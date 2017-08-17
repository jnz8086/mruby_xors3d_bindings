// xMRB. When your life couldn't get any more miserable and pathetic.

#include <mruby.h>
#include <mruby/compile.h>
#include <xors3d.h>
#include "xors_mrb_bind.h"

#include <windows.h>
#include <stdio.h>
#include <cstdlib>
#include <cstring>


/* --- utils --- */

bool ErrorsOccured = false;

void Error(const char* msg){
  ErrorsOccured = true;
  #ifdef XMRB_DEBUG
	printf("Error! %s\n", msg);
  #else
	MessageBox(0, msg, "Error!", 0);
  #endif
}

void Error0fs(const char* msg1_f, ...){
 int _TMP_BUF_SIZE = 255;
  char string[_TMP_BUF_SIZE];
   va_list arg_ptr;
	va_start(arg_ptr, msg1_f);
	 vsnprintf(string, _TMP_BUF_SIZE, msg1_f, arg_ptr);
	va_end(arg_ptr);
   Error(string);
  return;
}

char* xReadFromFile(const char* path, bool string = true){
  if(xFileType(path)==0) return NULL;
   int size = xFileSize(path);
	char* data = (char*)malloc(sizeof(char)*(size+string));
	  if(string) data[size] = 0;
	int file = xReadFile(path);
	  for(int i=0; i<size; i++)
		data[i] = xReadByte(file);
	xCloseFile(file);
  return data;
}

/* --- mruby --- */

#define mrbfunc(name) mrb_value name(mrb_state *mrb, mrb_value self)

mrb_state* ruby_s;
mrbc_context* ruby_c;

mrb_value xMRB_LoopStack,
		  xMRB_CurrentLoop;

bool xMRB_Check(const char* name){ //check for runtime errors
	if(ruby_s->exc){
		mrb_value exc = mrb_obj_value(ruby_s->exc);
		mrb_value msg = mrb_funcall(ruby_s, exc, "inspect", 0);
		Error0fs("(%s): %s",name, RSTRING_PTR(msg));
		#ifdef XMRB_DEBUG
			mrb_print_backtrace(ruby_s);
			// I don't think it does anything at all, actually.
			// If you know how to make it work, please contact me.
		#endif
	  return true;
	}
  return false;
}

bool xMRB_Run(const char* path, mrb_value self){
	char* filedata = xReadFromFile(path);
	  if(filedata == nullptr) return true;
		struct mrb_parser_state* ps = mrb_parse_string(ruby_s, filedata, ruby_c);
		mrb_parser_set_filename(ps, path);
		struct RProc* pr = mrb_generate_code(ruby_s, ps);
	  free(filedata);
		if(pr){
			if(mrb_nil_p(self))
			  self = mrb_top_self(ruby_s);
		  mrb_run(ruby_s, pr, self);
		}
	return xMRB_Check(path);
}

void xMRB_Frame(){
	#ifdef __EMSCRIPTEN__  // one day, comrades, one day...
	  if(mrb_nil_p(xMRB_CurrentLoop)){
		  emscripten_cancel_main_loop();
		return;
	  }
	#endif
	
	mrb_value res = mrb_yield(ruby_s, xMRB_CurrentLoop, mrb_nil_value());
	if(mrb_bool(res)){
		mrb_ary_pop(ruby_s, xMRB_LoopStack);
		xMRB_CurrentLoop = mrb_ary_ref(ruby_s, xMRB_LoopStack, -1);
	}
	
	xMRB_Check("");
}

void xMRB_MainLoop(){
	#ifdef __EMSCRIPTEN__
		emscripten_set_main_loop(xMRB_Frame, 0, 1);
	#else
		while(!mrb_nil_p(xMRB_CurrentLoop)){
			xMRB_Frame();
		}
	#endif
}

mrbfunc(_xMRB_require){
  char* path;
   mrb_get_args(mrb, "z", &path);
	xMRB_Run(path, self);
  free(path);
 return mrb_nil_value();
}

mrbfunc(_xMRB_onFrame){
  mrb_bool stack = true;
  mrb_value frameblock;
   mrb_get_args(mrb, "|b&", &stack, &frameblock);
    if(!stack) mrb_ary_clear(ruby_s, xMRB_LoopStack);
	mrb_ary_push(ruby_s, xMRB_LoopStack, frameblock);
	xMRB_CurrentLoop = frameblock;
  return mrb_nil_value();
}

/* --- main --- */

int main(){
  
  // config
	
	LPCTSTR config_ini_path = ".\\config.ini";
	  char* config_basemodule    = new char[64];
	  char* config_defaultpkg    = new char[64];
	  char* config_defaultpkg_mp = new char[64];
	  char* config_entrypoint    = new char[64];
		GetPrivateProfileString("xmrb", "basemodule", "", config_basemodule, 64, config_ini_path);
		GetPrivateProfileString("xmrb", "defaultpkg", "", config_defaultpkg, 64, config_ini_path);
		GetPrivateProfileString("xmrb", "defaultpkg_mp", "", config_defaultpkg_mp, 64, config_ini_path);
		GetPrivateProfileString("xmrb", "entrypoint", "scripts\\main.rb", config_entrypoint, 64, config_ini_path);
	
  // set up MRuby
	
	ruby_s = mrb_open();
	ruby_c = mrbc_context_new(ruby_s);
	
	xMRB_LoopStack = mrb_ary_new(ruby_s);
	xMRB_CurrentLoop = mrb_nil_value();
	
  // bind functions
	
	mrb_define_method(ruby_s, ruby_s->kernel_module, "require", _xMRB_require, MRB_ARGS_REQ(1));
	mrb_define_method(ruby_s, ruby_s->kernel_module, "onFrame", _xMRB_onFrame, MRB_ARGS_OPT(1));
	
	struct RClass* xmrb_module = ((config_basemodule[0]==0) ?
									(ruby_s->kernel_module) :
									(mrb_define_module(ruby_s, config_basemodule)));
	mrb_xors3d_bind(ruby_s, xmrb_module);
	
  // set up Xors3d
	
	xKey("DHf0J-0UbxC-t6wAf-6y2cT-1K7U5");
	xSetEngineSetting("Splash::TilingTime","0");
	xSetEngineSetting("Splash::AfterTilingTime","0");
	
  // kickstart the thing
	
	if(config_defaultpkg[0]!=0)
	  xMountPackFile(config_defaultpkg, config_defaultpkg_mp, "");
	
	xMRB_Run(config_entrypoint, mrb_nil_value());
	xMRB_MainLoop();
	
  // handle exceptions
	
  #ifdef XMRB_DEBUG
	if(ErrorsOccured){
		xDestroyRenderWindow();
		system("PAUSE");
	}
  #endif
	
  return 0;
}
