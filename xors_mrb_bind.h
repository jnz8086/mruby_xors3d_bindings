
#include <mruby.h>
#include <mruby/proc.h>
#include <mruby/data.h>
#include <mruby/compile.h>
#include <mruby/variable.h>
#include <mruby/array.h>
#include <mruby/string.h>
#include <mruby/hash.h>
#include <mruby/irep.h>
#include <mruby/error.h>
#include <mruby/dump.h>


#include <xors3d.h> 


mrb_value mrb_xors3d_xCreateLine3D(mrb_state *mrb, mrb_value self){
  double fromX;
  double fromY;
  double fromZ;
  double toX;
  double toY;
  double toZ;
  int red = 255;
  int green = 255;
  int blue = 255;
  int alpha = 255;
  int useZBuffer = true;
	mrb_get_args(mrb,"ffffff|iiiii",&fromX,&fromY,&fromZ,&toX,&toY,&toZ,&red,&green,&blue,&alpha,&useZBuffer);
   int _res = (int)xCreateLine3D(fromX,fromY,fromZ,toX,toY,toZ,red,green,blue,alpha,useZBuffer);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLine3DOrigin(mrb_state *mrb, mrb_value self){
  int line3d;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&line3d,&x,&y,&z,&isGlobal);
   xLine3DOrigin(line3d,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLine3DAddNode(mrb_state *mrb, mrb_value self){
  int line3d;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&line3d,&x,&y,&z,&isGlobal);
   xLine3DAddNode(line3d,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLine3DColor(mrb_state *mrb, mrb_value self){
  int line3d;
  int red;
  int green;
  int blue;
  int alpha;
	mrb_get_args(mrb,"iiiii",&line3d,&red,&green,&blue,&alpha);
   xLine3DColor(line3d,red,green,blue,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLine3DUseZBuffer(mrb_state *mrb, mrb_value self){
  int line3d;
  int state;
	mrb_get_args(mrb,"ii",&line3d,&state);
   xLine3DUseZBuffer(line3d,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLine3DOriginX(mrb_state *mrb, mrb_value self){
  int line3d;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&line3d,&isGlobal);
   double _res = (double)xLine3DOriginX(line3d,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xLine3DOriginY(mrb_state *mrb, mrb_value self){
  int line3d;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&line3d,&isGlobal);
   double _res = (double)xLine3DOriginY(line3d,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xLine3DOriginZ(mrb_state *mrb, mrb_value self){
  int line3d;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&line3d,&isGlobal);
   double _res = (double)xLine3DOriginZ(line3d,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xLine3DNodesCount(mrb_state *mrb, mrb_value self){
  int line3d;
	mrb_get_args(mrb,"i",&line3d);
   int _res = (int)xLine3DNodesCount(line3d);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLine3DNodePosition(mrb_state *mrb, mrb_value self){
  int line3d;
  int index;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"iifff|i",&line3d,&index,&x,&y,&z,&isGlobal);
   xLine3DNodePosition(line3d,index,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLine3DNodeX(mrb_state *mrb, mrb_value self){
  int line3d;
  int index;
  int isGlobal = false;
	mrb_get_args(mrb,"ii|i",&line3d,&index,&isGlobal);
   double _res = (double)xLine3DNodeX(line3d,index,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xLine3DNodeY(mrb_state *mrb, mrb_value self){
  int line3d;
  int index;
  int isGlobal = false;
	mrb_get_args(mrb,"ii|i",&line3d,&index,&isGlobal);
   double _res = (double)xLine3DNodeY(line3d,index,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xLine3DNodeZ(mrb_state *mrb, mrb_value self){
  int line3d;
  int index;
  int isGlobal = false;
	mrb_get_args(mrb,"ii|i",&line3d,&index,&isGlobal);
   double _res = (double)xLine3DNodeZ(line3d,index,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xLine3DRed(mrb_state *mrb, mrb_value self){
  int line3d;
	mrb_get_args(mrb,"i",&line3d);
   int _res = (int)xLine3DRed(line3d);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLine3DGreen(mrb_state *mrb, mrb_value self){
  int line3d;
	mrb_get_args(mrb,"i",&line3d);
   int _res = (int)xLine3DGreen(line3d);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLine3DBlue(mrb_state *mrb, mrb_value self){
  int line3d;
	mrb_get_args(mrb,"i",&line3d);
   int _res = (int)xLine3DBlue(line3d);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLine3DAlpha(mrb_state *mrb, mrb_value self){
  int line3d;
	mrb_get_args(mrb,"i",&line3d);
   int _res = (int)xLine3DAlpha(line3d);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetLine3DUseZBuffer(mrb_state *mrb, mrb_value self){
  int line3d;
	mrb_get_args(mrb,"i",&line3d);
   int _res = (int)xGetLine3DUseZBuffer(line3d);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDeleteLine3DNode(mrb_state *mrb, mrb_value self){
  int line3d;
  int index;
	mrb_get_args(mrb,"ii",&line3d,&index);
   xDeleteLine3DNode(line3d,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearLine3D(mrb_state *mrb, mrb_value self){
  int line3d;
	mrb_get_args(mrb,"i",&line3d);
   xClearLine3D(line3d);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoadBrush(mrb_state *mrb, mrb_value self){
  char* path;
  int flags = 9;
  double xScale = 1.0;
  double yScale = 1.0;
	mrb_get_args(mrb,"z|iff",&path,&flags,&xScale,&yScale);
   int _res = (int)xLoadBrush(path,flags,xScale,yScale);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateBrush(mrb_state *mrb, mrb_value self){
  double red = 255.0;
  double green = 255.0;
  double blue = 255.0;
	mrb_get_args(mrb,"|fff",&red,&green,&blue);
   int _res = (int)xCreateBrush(red,green,blue);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreeBrush(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   xFreeBrush(brush);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetBrushTexture(mrb_state *mrb, mrb_value self){
  int brush;
  int index = 0;
	mrb_get_args(mrb,"i|i",&brush,&index);
   int _res = (int)xGetBrushTexture(brush,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xBrushColor(mrb_state *mrb, mrb_value self){
  int brush;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&brush,&red,&green,&blue);
   xBrushColor(brush,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBrushAlpha(mrb_state *mrb, mrb_value self){
  int brush;
  double alpha;
	mrb_get_args(mrb,"if",&brush,&alpha);
   xBrushAlpha(brush,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBrushShininess(mrb_state *mrb, mrb_value self){
  int brush;
  double shininess;
	mrb_get_args(mrb,"if",&brush,&shininess);
   xBrushShininess(brush,shininess);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBrushBlend(mrb_state *mrb, mrb_value self){
  int brush;
  int blend;
	mrb_get_args(mrb,"ii",&brush,&blend);
   xBrushBlend(brush,blend);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBrushFX(mrb_state *mrb, mrb_value self){
  int brush;
  int FX;
	mrb_get_args(mrb,"ii",&brush,&FX);
   xBrushFX(brush,FX);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBrushTexture(mrb_state *mrb, mrb_value self){
  int brush;
  int texture;
  int frame = 0;
  int index = 0;
	mrb_get_args(mrb,"ii|ii",&brush,&texture,&frame,&index);
   xBrushTexture(brush,texture,frame,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetBrushName(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   char* _res = (char*)xGetBrushName(brush);
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xBrushName(mrb_state *mrb, mrb_value self){
  int brush;
  char* name;
	mrb_get_args(mrb,"iz",&brush,&name);
   xBrushName(brush,name);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetBrushAlpha(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   double _res = (double)xGetBrushAlpha(brush);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetBrushBlend(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   int _res = (int)xGetBrushBlend(brush);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetBrushRed(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   int _res = (int)xGetBrushRed(brush);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetBrushGreen(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   int _res = (int)xGetBrushGreen(brush);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetBrushBlue(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   int _res = (int)xGetBrushBlue(brush);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetBrushFX(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   int _res = (int)xGetBrushFX(brush);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetBrushShininess(mrb_state *mrb, mrb_value self){
  int brush;
	mrb_get_args(mrb,"i",&brush);
   double _res = (double)xGetBrushShininess(brush);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCameraFogMode(mrb_state *mrb, mrb_value self){
  int camera;
  int mode;
	mrb_get_args(mrb,"ii",&camera,&mode);
   xCameraFogMode(camera,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraFogColor(mrb_state *mrb, mrb_value self){
  int camera;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&camera,&red,&green,&blue);
   xCameraFogColor(camera,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraFogRange(mrb_state *mrb, mrb_value self){
  int camera;
  double nearRange;
  double farRange;
	mrb_get_args(mrb,"iff",&camera,&nearRange,&farRange);
   xCameraFogRange(camera,nearRange,farRange);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraClsColor(mrb_state *mrb, mrb_value self){
  int camera;
  int red;
  int green;
  int blue;
  int alpha = 255;
	mrb_get_args(mrb,"iiii|i",&camera,&red,&green,&blue,&alpha);
   xCameraClsColor(camera,red,green,blue,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraProjMode(mrb_state *mrb, mrb_value self){
  int camera;
  int mode;
	mrb_get_args(mrb,"ii",&camera,&mode);
   xCameraProjMode(camera,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraClsMode(mrb_state *mrb, mrb_value self){
  int camera;
  int clearColor;
  int clearZBuffer;
	mrb_get_args(mrb,"iii",&camera,&clearColor,&clearZBuffer);
   xCameraClsMode(camera,clearColor,clearZBuffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSphereInFrustum(mrb_state *mrb, mrb_value self){
  int camera;
  double x;
  double y;
  double z;
  double radii;
	mrb_get_args(mrb,"iffff",&camera,&x,&y,&z,&radii);
   int _res = (int)xSphereInFrustum(camera,x,y,z,radii);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCameraClipPlane(mrb_state *mrb, mrb_value self){
  int camera;
  int index;
  int enabled;
  double a;
  double b;
  double c;
  double d;
	mrb_get_args(mrb,"iiiffff",&camera,&index,&enabled,&a,&b,&c,&d);
   xCameraClipPlane(camera,index,enabled,a,b,c,d);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraRange(mrb_state *mrb, mrb_value self){
  int camera;
  double nearRange;
  double farRange;
	mrb_get_args(mrb,"iff",&camera,&nearRange,&farRange);
   xCameraRange(camera,nearRange,farRange);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraViewport(mrb_state *mrb, mrb_value self){
  int camera;
  int x;
  int y;
  int width;
  int height;
	mrb_get_args(mrb,"iiiii",&camera,&x,&y,&width,&height);
   xCameraViewport(camera,x,y,width,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraCropViewport(mrb_state *mrb, mrb_value self){
  int camera;
  int x;
  int y;
  int width;
  int height;
	mrb_get_args(mrb,"iiiii",&camera,&x,&y,&width,&height);
   xCameraCropViewport(camera,x,y,width,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateCamera(mrb_state *mrb, mrb_value self){
  int parent = 0;
	mrb_get_args(mrb,"|i",&parent);
   int _res = (int)xCreateCamera(parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCameraProject(mrb_state *mrb, mrb_value self){
  int camera;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&camera,&x,&y,&z);
   xCameraProject(camera,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraProject2D(mrb_state *mrb, mrb_value self){
  int camera;
  int x;
  int y;
  double zDistance;
	mrb_get_args(mrb,"iiif",&camera,&x,&y,&zDistance);
   xCameraProject2D(camera,x,y,zDistance);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xProjectedX(mrb_state *mrb, mrb_value self){
   double _res = (double)xProjectedX();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xProjectedY(mrb_state *mrb, mrb_value self){
   double _res = (double)xProjectedY();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xProjectedZ(mrb_state *mrb, mrb_value self){
   double _res = (double)xProjectedZ();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetViewMatrix(mrb_state *mrb, mrb_value self){
  int camera;
	mrb_get_args(mrb,"i",&camera);
   int _res = (int)xGetViewMatrix(camera);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetProjectionMatrix(mrb_state *mrb, mrb_value self){
  int camera;
	mrb_get_args(mrb,"i",&camera);
   int _res = (int)xGetProjectionMatrix(camera);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCameraZoom(mrb_state *mrb, mrb_value self){
  int camera;
  double zoom;
	mrb_get_args(mrb,"if",&camera,&zoom);
   xCameraZoom(camera,zoom);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetViewProjMatrix(mrb_state *mrb, mrb_value self){
  int camera;
	mrb_get_args(mrb,"i",&camera);
   int _res = (int)xGetViewProjMatrix(camera);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCollisions(mrb_state *mrb, mrb_value self){
  int srcType;
  int destType;
  int collideMethod;
  int response;
	mrb_get_args(mrb,"iiii",&srcType,&destType,&collideMethod,&response);
   xCollisions(srcType,destType,collideMethod,response);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearCollisions(mrb_state *mrb, mrb_value self){
   xClearCollisions();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xResetEntity(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xResetEntity(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityRadius(mrb_state *mrb, mrb_value self){
  int entity;
  double xRadius;
  double yRadius = 0.0;
	mrb_get_args(mrb,"if|f",&entity,&xRadius,&yRadius);
   xEntityRadius(entity,xRadius,yRadius);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityBox(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  double width;
  double height;
  double depth;
	mrb_get_args(mrb,"iffffff",&entity,&x,&y,&z,&width,&height,&depth);
   xEntityBox(entity,x,y,z,width,height,depth);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityType(mrb_state *mrb, mrb_value self){
  int entity;
  int typeID;
  int recurse = false;
	mrb_get_args(mrb,"ii|i",&entity,&typeID,&recurse);
   xEntityType(entity,typeID,recurse);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityCollided(mrb_state *mrb, mrb_value self){
  int entity;
  int typeID;
	mrb_get_args(mrb,"ii",&entity,&typeID);
   int _res = (int)xEntityCollided(entity,typeID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCountCollisions(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xCountCollisions(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCollisionX(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xCollisionX(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCollisionY(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xCollisionY(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCollisionZ(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xCollisionZ(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCollisionNX(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xCollisionNX(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCollisionNY(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xCollisionNY(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCollisionNZ(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xCollisionNZ(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCollisionTime(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xCollisionTime(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCollisionEntity(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   int _res = (int)xCollisionEntity(entity,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCollisionSurface(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   int _res = (int)xCollisionSurface(entity,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCollisionTriangle(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   int _res = (int)xCollisionTriangle(entity,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetEntityType(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetEntityType(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xRenderPostEffect(mrb_state *mrb, mrb_value self){
  int poly;
	mrb_get_args(mrb,"i",&poly);
   xRenderPostEffect(poly);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreatePostEffectPoly(mrb_state *mrb, mrb_value self){
  int camera;
  int mode;
	mrb_get_args(mrb,"ii",&camera,&mode);
   int _res = (int)xCreatePostEffectPoly(camera,mode);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetFunctionAddress(mrb_state *mrb, mrb_value self){
  char* name;
	mrb_get_args(mrb,"z",&name);
   int _res = (int)xGetFunctionAddress(name);
  free(name);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadFXFile(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xLoadFXFile(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreeEffect(mrb_state *mrb, mrb_value self){
  int effect;
	mrb_get_args(mrb,"i",&effect);
   xFreeEffect(effect);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEntityEffect(mrb_state *mrb, mrb_value self){
  int entity;
  int effect;
  int index = -1;
	mrb_get_args(mrb,"ii|i",&entity,&effect,&index);
   xSetEntityEffect(entity,effect,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetSurfaceEffect(mrb_state *mrb, mrb_value self){
  int surface;
  int effect;
  int index = -1;
	mrb_get_args(mrb,"ii|i",&surface,&effect,&index);
   xSetSurfaceEffect(surface,effect,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetBonesArrayName(mrb_state *mrb, mrb_value self){
  int entity;
  char* arrayName;
  int layer = -1;
	mrb_get_args(mrb,"iz|i",&entity,&arrayName,&layer);
   xSetBonesArrayName(entity,arrayName,layer);
  free(arrayName);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceBonesArrayName(mrb_state *mrb, mrb_value self){
  int surface;
  char* arrayName;
  int layer = -1;
	mrb_get_args(mrb,"iz|i",&surface,&arrayName,&layer);
   xSurfaceBonesArrayName(surface,arrayName,layer);
  free(arrayName);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectInt(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int value;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&entity,&name,&value,&layer);
   xSetEffectInt(entity,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectInt(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  int value;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&surface,&name,&value,&layer);
   xSurfaceEffectInt(surface,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectFloat(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  double value;
  int layer = -1;
	mrb_get_args(mrb,"izf|i",&entity,&name,&value,&layer);
   xSetEffectFloat(entity,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectFloat(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  double value;
  int layer = -1;
	mrb_get_args(mrb,"izf|i",&surface,&name,&value,&layer);
   xSurfaceEffectFloat(surface,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectBool(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int value;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&entity,&name,&value,&layer);
   xSetEffectBool(entity,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectBool(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  int value;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&surface,&name,&value,&layer);
   xSurfaceEffectBool(surface,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectVector(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  double x;
  double y;
  double z;
  double w = 0.0;
  int layer = -1;
	mrb_get_args(mrb,"izfff|fi",&entity,&name,&x,&y,&z,&w,&layer);
   xSetEffectVector(entity,name,x,y,z,w,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectVector(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  double x;
  double y;
  double z;
  double w = 0.0;
  int layer = -1;
	mrb_get_args(mrb,"izfff|fi",&surface,&name,&x,&y,&z,&w,&layer);
   xSurfaceEffectVector(surface,name,x,y,z,w,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectVectorArray(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&entity,&name,&value,&count,&layer);
	  float* value_v = (float*)malloc(sizeof(float)*count*4);
		for(int i=0; i<count; i++)
		 for(int j=0; j<4; j++)
		  value_v[i] = mrb_ary_entry(value[i],j).value.f;
   xSetEffectVectorArray(entity,name,(Handle)value_v,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectVectorArray(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&surface,&name,&value,&count,&layer);
	  float* value_v = (float*)malloc(sizeof(float)*count*4);
		for(int i=0; i<count; i++)
		 for(int j=0; j<4; j++)
		  value_v[i] = mrb_ary_entry(value[i],j).value.f;
   xSurfaceEffectVectorArray(surface,name,(Handle)value_v,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectMatrixArray(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&surface,&name,&value,&count,&layer);
	  float* value_m = (float*)malloc(sizeof(float)*count*16);
		for(int i=0; i<count; i++)
		 for(int j=0; j<16; j++)
		  value_m[i] = mrb_ary_entry(value[i],j).value.f;
   xSurfaceEffectMatrixArray(surface,name,(Handle)value_m,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectFloatArray(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&surface,&name,&value,&count,&layer);
	  float* value_f = (float*)malloc(sizeof(float)*count);
		for(int i=0; i<count; i++)
			value_f[i] = value[i].value.f;
   xSurfaceEffectFloatArray(surface,name,(Handle)value_f,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectIntArray(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&surface,&name,&value,&count,&layer);
	  int* value_i = (int*)malloc(sizeof(int)*count);
		for(int i=0; i<count; i++)
			value_i[i] = value[i].value.f;
   xSurfaceEffectIntArray(surface,name,(Handle)value_i,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectMatrixArray(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&entity,&name,&value,&count,&layer);
	  float* value_m = (float*)malloc(sizeof(float)*count*16);
		for(int i=0; i<count; i++)
		 for(int j=0; j<16; j++)
		  value_m[i] = mrb_ary_entry(value[i],j).value.f;
   xSetEffectMatrixArray(entity,name,(Handle)value_m,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectFloatArray(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&entity,&name,&value,&count,&layer);
	  float* value_f = (float*)malloc(sizeof(float)*count);
		for(int i=0; i<count; i++)
			value_f[i] = value[i].value.f;
   xSetEffectFloatArray(entity,name,(Handle)value_f,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectIntArray(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  mrb_value* value;
  int count;
  int layer = -1;
	mrb_get_args(mrb,"iza|i",&entity,&name,&value,&count,&layer);
	  int* value_i = (int*)malloc(sizeof(int)*count);
		for(int i=0; i<count; i++)
			value_i[i] = value[i].value.f;
   xSetEffectIntArray(entity,name,(Handle)value_i,count,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateBufferVectors(mrb_state *mrb, mrb_value self){      //todo?
  int count;
	mrb_get_args(mrb,"i",&count);
   int _res = (int)xCreateBufferVectors(count);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xBufferVectorsSetElement(mrb_state *mrb, mrb_value self){      //todo?
  int buffer;
  int number;
  double x;
  double y;
  double z;
  double w;
	mrb_get_args(mrb,"iiffff",&buffer,&number,&x,&y,&z,&w);
   xBufferVectorsSetElement(buffer,number,x,y,z,w);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateBufferMatrix(mrb_state *mrb, mrb_value self){      //todo?
  int count;
	mrb_get_args(mrb,"i",&count);
   int _res = (int)xCreateBufferMatrix(count);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xBufferMatrixSetElement(mrb_state *mrb, mrb_value self){      //todo?
  int buffer;
  int number;
  int matrix;
	mrb_get_args(mrb,"iii",&buffer,&number,&matrix);
   xBufferMatrixSetElement(buffer,number,matrix);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBufferMatrixGetElement(mrb_state *mrb, mrb_value self){      //todo?
  int buffer;
  int number;
	mrb_get_args(mrb,"ii",&buffer,&number);
   int _res = (int)xBufferMatrixGetElement(buffer,number);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateBufferFloats(mrb_state *mrb, mrb_value self){      //todo?
  int count;
	mrb_get_args(mrb,"i",&count);
   int _res = (int)xCreateBufferFloats(count);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xBufferFloatsSetElement(mrb_state *mrb, mrb_value self){      //todo?
  int buffer;
  int number;
  double value;
	mrb_get_args(mrb,"iif",&buffer,&number,&value);
   xBufferFloatsSetElement(buffer,number,value);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBufferFloatsGetElement(mrb_state *mrb, mrb_value self){      //todo?
  int buffer;
  int number;
	mrb_get_args(mrb,"ii",&buffer,&number);
   double _res = (double)xBufferFloatsGetElement(buffer,number);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xBufferDelete(mrb_state *mrb, mrb_value self){      //todo?
  int buffer;
	mrb_get_args(mrb,"i",&buffer);
   xBufferDelete(buffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectMatrixWithElements(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  double m11;
  double m12;
  double m13;
  double m14;
  double m21;
  double m22;
  double m23;
  double m24;
  double m31;
  double m32;
  double m33;
  double m34;
  double m41;
  double m42;
  double m43;
  double m44;
  int layer = -1;
	mrb_get_args(mrb,"izffffffffffffffff|i",&entity,&name,&m11,&m12,&m13,&m14,&m21,&m22,&m23,&m24,&m31,&m32,&m33,&m34,&m41,&m42,&m43,&m44,&layer);
   xSetEffectMatrixWithElements(entity,name,m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m41,m42,m43,m44,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectMatrix(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int matrix;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&entity,&name,&matrix,&layer);
   xSetEffectMatrix(entity,name,matrix,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectMatrix(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  int matrix;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&surface,&name,&matrix,&layer);
   xSurfaceEffectMatrix(surface,name,matrix,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectMatrixWithElements(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  double m11;
  double m12;
  double m13;
  double m14;
  double m21;
  double m22;
  double m23;
  double m24;
  double m31;
  double m32;
  double m33;
  double m34;
  double m41;
  double m42;
  double m43;
  double m44;
  int layer = -1;
	mrb_get_args(mrb,"izffffffffffffffff|i",&surface,&name,&m11,&m12,&m13,&m14,&m21,&m22,&m23,&m24,&m31,&m32,&m33,&m34,&m41,&m42,&m43,&m44,&layer);
   xSurfaceEffectMatrixWithElements(surface,name,m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m41,m42,m43,m44,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectEntityTexture(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int index = 0;
  int layer = -1;
	mrb_get_args(mrb,"iz|ii",&entity,&name,&index,&layer);
   xSetEffectEntityTexture(entity,name,index,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectTexture(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int texture;
  int frame = 0;
  int layer = -1;
  int isRecursive = 1;
	mrb_get_args(mrb,"izi|iii",&entity,&name,&texture,&frame,&layer,&isRecursive);
   xSetEffectTexture(entity,name,texture,frame,layer,isRecursive);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectTexture(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  int texture;
  int frame = 0;
  int layer = -1;
	mrb_get_args(mrb,"izi|ii",&surface,&name,&texture,&frame,&layer);
   xSurfaceEffectTexture(surface,name,texture,frame,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceEffectMatrixSemantic(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  int value;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&surface,&name,&value,&layer);
   xSurfaceEffectMatrixSemantic(surface,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectMatrixSemantic(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int value;
  int layer = -1;
	mrb_get_args(mrb,"izi|i",&entity,&name,&value,&layer);
   xSetEffectMatrixSemantic(entity,name,value,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeleteSurfaceConstant(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  int layer = -1;
	mrb_get_args(mrb,"iz|i",&surface,&name,&layer);
   xDeleteSurfaceConstant(surface,name,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeleteEffectConstant(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int layer = -1;
	mrb_get_args(mrb,"iz|i",&entity,&name,&layer);
   xDeleteEffectConstant(entity,name,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearSurfaceConstants(mrb_state *mrb, mrb_value self){
  int surface;
  int layer = -1;
	mrb_get_args(mrb,"i|i",&surface,&layer);
   xClearSurfaceConstants(surface,layer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearEffectConstants(mrb_state *mrb, mrb_value self){
  int entity;
  int layer = -1;
	mrb_get_args(mrb,"i|i",&entity,&layer);
   xClearEffectConstants(entity,layer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEffectTechnique(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
  int layer = -1;
	mrb_get_args(mrb,"iz|i",&entity,&name,&layer);
   xSetEffectTechnique(entity,name,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceTechnique(mrb_state *mrb, mrb_value self){
  int surface;
  char* name;
  int layer = -1;
	mrb_get_args(mrb,"iz|i",&surface,&name,&layer);
   xSurfaceTechnique(surface,name,layer);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xValidateEffectTechnique(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
	mrb_get_args(mrb,"iz",&effect,&name);
   int _res = (int)xValidateEffectTechnique(effect,name);
  free(name);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetEntityShaderLayer(mrb_state *mrb, mrb_value self){
  int entity;
  int layer;
	mrb_get_args(mrb,"ii",&entity,&layer);
   xSetEntityShaderLayer(entity,layer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetEntityShaderLayer(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetEntityShaderLayer(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetSurfaceShaderLayer(mrb_state *mrb, mrb_value self){
  int surface;
  int layer;
	mrb_get_args(mrb,"ii",&surface,&layer);
   xSetSurfaceShaderLayer(surface,layer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetSurfaceShaderLayer(mrb_state *mrb, mrb_value self){
  int surface;
	mrb_get_args(mrb,"i",&surface);
   int _res = (int)xGetSurfaceShaderLayer(surface);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetFXInt(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int value;
	mrb_get_args(mrb,"izi",&effect,&name,&value);
   xSetFXInt(effect,name,value);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXFloat(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  double value;
	mrb_get_args(mrb,"izf",&effect,&name,&value);
   xSetFXFloat(effect,name,value);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXBool(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int value;
	mrb_get_args(mrb,"izi",&effect,&name,&value);
   xSetFXBool(effect,name,value);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXVector(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  double x;
  double y;
  double z;
  double w = 0.0;
	mrb_get_args(mrb,"izfff|f",&effect,&name,&x,&y,&z,&w);
   xSetFXVector(effect,name,x,y,z,w);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXVectorArray(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int value;
  int count;
	mrb_get_args(mrb,"izii",&effect,&name,&value,&count);
   xSetFXVectorArray(effect,name,value,count);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXMatrixArray(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int value;
  int count;
	mrb_get_args(mrb,"izii",&effect,&name,&value,&count);
   xSetFXMatrixArray(effect,name,value,count);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXFloatArray(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int value;
  int count;
	mrb_get_args(mrb,"izii",&effect,&name,&value,&count);
   xSetFXFloatArray(effect,name,value,count);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXIntArray(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int value;
  int count;
	mrb_get_args(mrb,"izii",&effect,&name,&value,&count);
   xSetFXIntArray(effect,name,value,count);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXEntityMatrix(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int matrix;
	mrb_get_args(mrb,"izi",&effect,&name,&matrix);
   xSetFXEntityMatrix(effect,name,matrix);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXTexture(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int texture;
  int frame = 0;
	mrb_get_args(mrb,"izi|i",&effect,&name,&texture,&frame);
   xSetFXTexture(effect,name,texture,frame);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXMatrixSemantic(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
  int value;
	mrb_get_args(mrb,"izi",&effect,&name,&value);
   xSetFXMatrixSemantic(effect,name,value);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeleteFXConstant(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
	mrb_get_args(mrb,"iz",&effect,&name);
   xDeleteFXConstant(effect,name);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearFXConstants(mrb_state *mrb, mrb_value self){
  int effect;
	mrb_get_args(mrb,"i",&effect);
   xClearFXConstants(effect);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFXTechnique(mrb_state *mrb, mrb_value self){
  int effect;
  char* name;
	mrb_get_args(mrb,"iz",&effect,&name);
   xSetFXTechnique(effect,name);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateEmitter(mrb_state *mrb, mrb_value self){
  int psystem;
  int parent = 0;
	mrb_get_args(mrb,"i|i",&psystem,&parent);
   int _res = (int)xCreateEmitter(psystem,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitterEnable(mrb_state *mrb, mrb_value self){
  int emitter;
  int state;
	mrb_get_args(mrb,"ii",&emitter,&state);
   xEmitterEnable(emitter,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEmitterEnabled(mrb_state *mrb, mrb_value self){
  int emitter;
	mrb_get_args(mrb,"i",&emitter);
   int _res = (int)xEmitterEnabled(emitter);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitterGetPSystem(mrb_state *mrb, mrb_value self){
  int emitter;
	mrb_get_args(mrb,"i",&emitter);
   int _res = (int)xEmitterGetPSystem(emitter);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitterAddParticle(mrb_state *mrb, mrb_value self){
  int emitter;
	mrb_get_args(mrb,"i",&emitter);
   int _res = (int)xEmitterAddParticle(emitter);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitterFreeParticle(mrb_state *mrb, mrb_value self){
  int emitter;
  int particle;
	mrb_get_args(mrb,"ii",&emitter,&particle);
   xEmitterFreeParticle(emitter,particle);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEmitterValidateParticle(mrb_state *mrb, mrb_value self){
  int emitter;
  int particle;
	mrb_get_args(mrb,"ii",&emitter,&particle);
   int _res = (int)xEmitterValidateParticle(emitter,particle);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitterCountParticles(mrb_state *mrb, mrb_value self){
  int emitter;
	mrb_get_args(mrb,"i",&emitter);
   int _res = (int)xEmitterCountParticles(emitter);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitterGetParticle(mrb_state *mrb, mrb_value self){
  int emitter;
  int index;
	mrb_get_args(mrb,"ii",&emitter,&index);
   int _res = (int)xEmitterGetParticle(emitter,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitterAlive(mrb_state *mrb, mrb_value self){
  int emitter;
	mrb_get_args(mrb,"i",&emitter);
   int _res = (int)xEmitterAlive(emitter);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xExtractAnimSeq(mrb_state *mrb, mrb_value self){
  int entity;
  int firstFrame;
  int lastFrame;
  int sequence = 0;
	mrb_get_args(mrb,"iii|i",&entity,&firstFrame,&lastFrame,&sequence);
   int _res = (int)xExtractAnimSeq(entity,firstFrame,lastFrame,sequence);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadAnimSeq(mrb_state *mrb, mrb_value self){
  int entity;
  char* path;
	mrb_get_args(mrb,"iz",&entity,&path);
   int _res = (int)xLoadAnimSeq(entity,path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetAnimSpeed(mrb_state *mrb, mrb_value self){
  int entity;
  double speed;
  char* rootBone = "";
	mrb_get_args(mrb,"if|z",&entity,&speed,&rootBone);
   xSetAnimSpeed(entity,speed,rootBone);
  free(rootBone);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xAnimSpeed(mrb_state *mrb, mrb_value self){
  int entity;
  char* rootBone = "";
	mrb_get_args(mrb,"i|z",&entity,&rootBone);
   double _res = (double)xAnimSpeed(entity,rootBone);
  free(rootBone);
return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xAnimating(mrb_state *mrb, mrb_value self){
  int entity;
  char* rootBone = "";
	mrb_get_args(mrb,"i|z",&entity,&rootBone);
   int _res = (int)xAnimating(entity,rootBone);
  free(rootBone);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAnimTime(mrb_state *mrb, mrb_value self){
  int entity;
  char* rootBone = "";
	mrb_get_args(mrb,"i|z",&entity,&rootBone);
   double _res = (double)xAnimTime(entity,rootBone);
  free(rootBone);
return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xAnimate(mrb_state *mrb, mrb_value self){
  int entity;
  int mode = 1;
  double speed = 1.0;
  int sequence = 0;
  double translate = 0.0;
  char* rootBone = "";
	mrb_get_args(mrb,"i|ififz",&entity,&mode,&speed,&sequence,&translate,&rootBone);
   xAnimate(entity,mode,speed,sequence,translate,rootBone);
  free(rootBone);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xAnimSeq(mrb_state *mrb, mrb_value self){
  int entity;
  char* rootBone = "";
	mrb_get_args(mrb,"i|z",&entity,&rootBone);
   int _res = (int)xAnimSeq(entity,rootBone);
  free(rootBone);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAnimLength(mrb_state *mrb, mrb_value self){
  int entity;
  char* rootBone = "";
	mrb_get_args(mrb,"i|z",&entity,&rootBone);
   double _res = (double)xAnimLength(entity,rootBone);
  free(rootBone);
return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xSetAnimTime(mrb_state *mrb, mrb_value self){
  int entity;
  double time;
  int sequence;
  char* rootBone = "";
	mrb_get_args(mrb,"ifi|z",&entity,&time,&sequence,&rootBone);
   xSetAnimTime(entity,time,sequence,rootBone);
  free(rootBone);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetAnimFrame(mrb_state *mrb, mrb_value self){
  int entity;
  double frame;
  int sequence;
  char* rootBone = "";
	mrb_get_args(mrb,"ifi|z",&entity,&frame,&sequence,&rootBone);
   xSetAnimFrame(entity,frame,sequence,rootBone);
  free(rootBone);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAutoFade(mrb_state *mrb, mrb_value self){
  int entity;
  double nearRange;
  double farRange;
	mrb_get_args(mrb,"iff",&entity,&nearRange,&farRange);
   xEntityAutoFade(entity,nearRange,farRange);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityOrder(mrb_state *mrb, mrb_value self){
  int entity;
  int order;
	mrb_get_args(mrb,"ii",&entity,&order);
   xEntityOrder(entity,order);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFreeEntity(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xFreeEntity(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCopyEntity(mrb_state *mrb, mrb_value self){
  int entity;
  int parent = 0;
  int cloneBuffers = 0;
	mrb_get_args(mrb,"i|ii",&entity,&parent,&cloneBuffers);
   int _res = (int)xCopyEntity(entity,parent,cloneBuffers);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPaintEntity(mrb_state *mrb, mrb_value self){
  int entity;
  int brush;
	mrb_get_args(mrb,"ii",&entity,&brush);
   xPaintEntity(entity,brush);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityShininess(mrb_state *mrb, mrb_value self){
  int entity;
  double shininess;
	mrb_get_args(mrb,"if",&entity,&shininess);
   xEntityShininess(entity,shininess);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityPickMode(mrb_state *mrb, mrb_value self){
  int entity;
  int mode;
  int obscurer = true;
  int recursive = true;
	mrb_get_args(mrb,"ii|ii",&entity,&mode,&obscurer,&recursive);
   xEntityPickMode(entity,mode,obscurer,recursive);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityTexture(mrb_state *mrb, mrb_value self){
  int entity;
  int texture;
  int frame = 0;
  int index = 0;
  int isRecursive = 1;
	mrb_get_args(mrb,"ii|iii",&entity,&texture,&frame,&index,&isRecursive);
   xEntityTexture(entity,texture,frame,index,isRecursive);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityFX(mrb_state *mrb, mrb_value self){
  int entity;
  int fx;
	mrb_get_args(mrb,"ii",&entity,&fx);
   xEntityFX(entity,fx);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetParent(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetParent(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetFrustumSphere(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  double radii;
	mrb_get_args(mrb,"iffff",&entity,&x,&y,&z,&radii);
   xSetFrustumSphere(entity,x,y,z,radii);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCalculateFrustumVolume(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xCalculateFrustumVolume(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityParent(mrb_state *mrb, mrb_value self){
  int entity;
  int parent = 0;
  int isGlobal = true;
	mrb_get_args(mrb,"i|ii",&entity,&parent,&isGlobal);
   xEntityParent(entity,parent,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xShowEntity(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xShowEntity(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xHideEntity(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xHideEntity(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xNameEntity(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
	mrb_get_args(mrb,"iz",&entity,&name);
   xNameEntity(entity,name);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEntityQuaternion(mrb_state *mrb, mrb_value self){
  int entity;
  int quaternion;
	mrb_get_args(mrb,"ii",&entity,&quaternion);
   xSetEntityQuaternion(entity,quaternion);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEntityMatrix(mrb_state *mrb, mrb_value self){
  int entity;
  int matrix;
	mrb_get_args(mrb,"ii",&entity,&matrix);
   xSetEntityMatrix(entity,matrix);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAlpha(mrb_state *mrb, mrb_value self){
  int entity;
  double alpha;
	mrb_get_args(mrb,"if",&entity,&alpha);
   xEntityAlpha(entity,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityColor(mrb_state *mrb, mrb_value self){
  int entity;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&entity,&red,&green,&blue);
   xEntityColor(entity,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntitySpecularColor(mrb_state *mrb, mrb_value self){
  int entity;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&entity,&red,&green,&blue);
   xEntitySpecularColor(entity,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAmbientColor(mrb_state *mrb, mrb_value self){
  int entity;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&entity,&red,&green,&blue);
   xEntityAmbientColor(entity,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityEmissiveColor(mrb_state *mrb, mrb_value self){
  int entity;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&entity,&red,&green,&blue);
   xEntityEmissiveColor(entity,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityBlend(mrb_state *mrb, mrb_value self){
  int entity;
  int mode;
	mrb_get_args(mrb,"ii",&entity,&mode);
   xEntityBlend(entity,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAlphaRef(mrb_state *mrb, mrb_value self){
  int entity;
  int value;
	mrb_get_args(mrb,"ii",&entity,&value);
   xEntityAlphaRef(entity,value);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAlphaFunc(mrb_state *mrb, mrb_value self){
  int entity;
  int value;
	mrb_get_args(mrb,"ii",&entity,&value);
   xEntityAlphaFunc(entity,value);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateInstance(mrb_state *mrb, mrb_value self){
  int entity;
  int parent = 0;
	mrb_get_args(mrb,"i|i",&entity,&parent);
   int _res = (int)xCreateInstance(entity,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreezeInstances(mrb_state *mrb, mrb_value self){
  int entity;
  int enable = true;
	mrb_get_args(mrb,"i|i",&entity,&enable);
   xFreezeInstances(entity,enable);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xInstancingAvaliable(mrb_state *mrb, mrb_value self){
   int _res = (int)xInstancingAvaliable();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetEntityWorld(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetEntityWorld(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetEntityWorld(mrb_state *mrb, mrb_value self){
  int entity;
  int world;
	mrb_get_args(mrb,"ii",&entity,&world);
   xSetEntityWorld(entity,world);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xScaleEntity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xScaleEntity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPositionEntity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xPositionEntity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMoveEntity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xMoveEntity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTranslateEntity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xTranslateEntity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRotateEntity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xRotateEntity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTurnEntity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xTurnEntity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPointEntity(mrb_state *mrb, mrb_value self){
  int entity1;
  int entity2;
  double roll = 0.0;
	mrb_get_args(mrb,"ii|f",&entity1,&entity2,&roll);
   xPointEntity(entity1,entity2,roll);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xAlignToVector(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int axis;
  double factor = 1.0;
	mrb_get_args(mrb,"ifffi|f",&entity,&x,&y,&z,&axis,&factor);
   xAlignToVector(entity,x,y,z,axis,factor);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityDistance(mrb_state *mrb, mrb_value self){
  int entity1;
  int entity2;
	mrb_get_args(mrb,"ii",&entity1,&entity2);
   double _res = (double)xEntityDistance(entity1,entity2);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetMatElement(mrb_state *mrb, mrb_value self){
  int entity;
  int row;
  int col;
	mrb_get_args(mrb,"iii",&entity,&row,&col);
   double _res = (double)xGetMatElement(entity,row,col);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityClass(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   char* _res = (char*)xEntityClass(entity);
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xGetEntityBrush(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetEntityBrush(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityX(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityX(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityY(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityY(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityZ(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityZ(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityVisible(mrb_state *mrb, mrb_value self){
  int entity;
  int destination;
	mrb_get_args(mrb,"ii",&entity,&destination);
   int _res = (int)xEntityVisible(entity,destination);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityScaleX(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityScaleX(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityScaleY(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityScaleY(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityScaleZ(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityScaleZ(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityRoll(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityRoll(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityYaw(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityYaw(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityPitch(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityPitch(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityName(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   char* _res = (char*)xEntityName(entity);
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xCountChildren(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xCountChildren(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetChild(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   int _res = (int)xGetChild(entity,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityInView(mrb_state *mrb, mrb_value self){
  int entity;
  int camera;
	mrb_get_args(mrb,"ii",&entity,&camera);
   int _res = (int)xEntityInView(entity,camera);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFindChild(mrb_state *mrb, mrb_value self){
  int entity;
  char* name;
	mrb_get_args(mrb,"iz",&entity,&name);
   int _res = (int)xFindChild(entity,name);
  free(name);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetEntityMatrix(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetEntityMatrix(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetEntityAlpha(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xGetEntityAlpha(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetAlphaRef(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetAlphaRef(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetAlphaFunc(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetAlphaFunc(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityRed(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityRed(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityGreen(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityGreen(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityBlue(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityBlue(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetEntityShininess(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xGetEntityShininess(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetEntityBlend(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetEntityBlend(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetEntityFX(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetEntityFX(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityHidden(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityHidden(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntitiesBBIntersect(mrb_state *mrb, mrb_value self){
  int entity1;
  int entity2;
	mrb_get_args(mrb,"ii",&entity1,&entity2);
   int _res = (int)xEntitiesBBIntersect(entity1,entity2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMountPackFile(mrb_state *mrb, mrb_value self){
  char* path;
  char* mountpoint = "";
  char* password = "";
	mrb_get_args(mrb,"z|zz",&path,&mountpoint,&password);
   int _res = (int)xMountPackFile(path,mountpoint,password);
  free(path);
free(mountpoint);
free(password);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xUnmountPackFile(mrb_state *mrb, mrb_value self){
  int packfile;
	mrb_get_args(mrb,"i",&packfile);
   xUnmountPackFile(packfile);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xOpenFile(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xOpenFile(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xReadFile(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xReadFile(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xWriteFile(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xWriteFile(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCloseFile(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   xCloseFile(file);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFilePos(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   int _res = (int)xFilePos(file);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSeekFile(mrb_state *mrb, mrb_value self){
  int file;
  int offset;
	mrb_get_args(mrb,"ii",&file,&offset);
   xSeekFile(file,offset);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFileType(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xFileType(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFileSize(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xFileSize(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFileCreationTime(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xFileCreationTime(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFileCreationTimeStr(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   char* _res = (char*)xFileCreationTimeStr(path);
  free(path);
return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xFileModificationTime(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xFileModificationTime(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFileModificationTimeStr(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   char* _res = (char*)xFileModificationTimeStr(path);
  free(path);
return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xReadDir(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xReadDir(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCloseDir(mrb_state *mrb, mrb_value self){
  int handle;
	mrb_get_args(mrb,"i",&handle);
   xCloseDir(handle);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xNextFile(mrb_state *mrb, mrb_value self){
  int handle;
	mrb_get_args(mrb,"i",&handle);
   char* _res = (char*)xNextFile(handle);
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xCurrentDir(mrb_state *mrb, mrb_value self){
   char* _res = (char*)xCurrentDir();
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xChangeDir(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   xChangeDir(path);
  free(path);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateDir(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xCreateDir(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDeleteDir(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xDeleteDir(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCopyFile(mrb_state *mrb, mrb_value self){
  char* pathSrc;
  char* pathDest;
	mrb_get_args(mrb,"zz",&pathSrc,&pathDest);
   int _res = (int)xCopyFile(pathSrc,pathDest);
  free(pathSrc);
free(pathDest);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDeleteFile(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xDeleteFile(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEof(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   int _res = (int)xEof(file);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xReadByte(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   int _res = (int)xReadByte(file);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xReadShort(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   int _res = (int)xReadShort(file);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xReadInt(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   int _res = (int)xReadInt(file);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xReadFloat(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   double _res = (double)xReadFloat(file);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xReadString(mrb_state *mrb, mrb_value self){
  int file;
	mrb_get_args(mrb,"i",&file);
   char* _res = (char*)xReadString(file);
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xReadLine(mrb_state *mrb, mrb_value self){
  int file;
  int ls_flag = 0;
	mrb_get_args(mrb,"i|i",&file,&ls_flag);
   char* _res = (char*)xReadLine(file,ls_flag);
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xWriteByte(mrb_state *mrb, mrb_value self){
  int file;
  int value;
	mrb_get_args(mrb,"ii",&file,&value);
   xWriteByte(file,value);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWriteShort(mrb_state *mrb, mrb_value self){
  int file;
  int value;
	mrb_get_args(mrb,"ii",&file,&value);
   xWriteShort(file,value);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWriteInt(mrb_state *mrb, mrb_value self){
  int file;
  int value;
	mrb_get_args(mrb,"ii",&file,&value);
   xWriteInt(file,value);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWriteFloat(mrb_state *mrb, mrb_value self){
  int file;
  double value;
	mrb_get_args(mrb,"if",&file,&value);
   xWriteFloat(file,value);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWriteString(mrb_state *mrb, mrb_value self){
  int file;
  char* value;
	mrb_get_args(mrb,"iz",&file,&value);
   xWriteString(file,value);
  free(value);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xWriteLine(mrb_state *mrb, mrb_value self){
  int file;
  char* value;
  int ls_flag = 0;
	mrb_get_args(mrb,"iz|i",&file,&value,&ls_flag);
   xWriteLine(file,value,ls_flag);
  free(value);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoadFont(mrb_state *mrb, mrb_value self){
  char* name;
  int height;
  int bold = false;
  int italic = false;
  int underline = false;
  char* fontface = "";
	mrb_get_args(mrb,"zi|iiiz",&name,&height,&bold,&italic,&underline,&fontface);
   int _res = (int)xLoadFont(name,height,bold,italic,underline,fontface);
  free(name);
free(fontface);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xText(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  char* textString;
  int centerx = false;
  int centery = false;
	mrb_get_args(mrb,"ffz|ii",&x,&y,&textString,&centerx,&centery);
   xText(x,y,textString,centerx,centery);
  free(textString);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetFont(mrb_state *mrb, mrb_value self){
  int font;
	mrb_get_args(mrb,"i",&font);
   xSetFont(font);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFreeFont(mrb_state *mrb, mrb_value self){
  int font;
	mrb_get_args(mrb,"i",&font);
   xFreeFont(font);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFontWidth(mrb_state *mrb, mrb_value self){
   int _res = (int)xFontWidth();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFontHeight(mrb_state *mrb, mrb_value self){
   int _res = (int)xFontHeight();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xStringWidth(mrb_state *mrb, mrb_value self){
  char* textString;
	mrb_get_args(mrb,"z",&textString);
   int _res = (int)xStringWidth(textString);
  free(textString);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xStringHeight(mrb_state *mrb, mrb_value self){
  char* textString;
	mrb_get_args(mrb,"z",&textString);
   int _res = (int)xStringHeight(textString);
  free(textString);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xWinMessage(mrb_state *mrb, mrb_value self){
  char* message;
	mrb_get_args(mrb,"z",&message);
   int _res = (int)xWinMessage(message);
  free(message);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMaxPixelShaderVersion(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetMaxPixelShaderVersion();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLine(mrb_state *mrb, mrb_value self){
  int x1;
  int y1;
  int x2;
  int y2;
	mrb_get_args(mrb,"iiii",&x1,&y1,&x2,&y2);
   xLine(x1,y1,x2,y2);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRect(mrb_state *mrb, mrb_value self){
  int x;
  int y;
  int width;
  int height;
  int solid = false;
	mrb_get_args(mrb,"iiii|i",&x,&y,&width,&height,&solid);
   xRect(x,y,width,height,solid);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRectsOverlap(mrb_state *mrb, mrb_value self){
  int x1;
  int y1;
  int width1;
  int height1;
  int x2;
  int y2;
  int width2;
  int height2;
	mrb_get_args(mrb,"iiiiiiii",&x1,&y1,&width1,&height1,&x2,&y2,&width2,&height2);
   int _res = (int)xRectsOverlap(x1,y1,width1,height1,x2,y2,width2,height2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xViewport(mrb_state *mrb, mrb_value self){
  int x;
  int y;
  int width;
  int height;
	mrb_get_args(mrb,"iiii",&x,&y,&width,&height);
   xViewport(x,y,width,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xOval(mrb_state *mrb, mrb_value self){
  int x;
  int y;
  int width;
  int height;
  int solid = false;
	mrb_get_args(mrb,"iiii|i",&x,&y,&width,&height,&solid);
   xOval(x,y,width,height,solid);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xOrigin(mrb_state *mrb, mrb_value self){
  int x;
  int y;
	mrb_get_args(mrb,"ii",&x,&y);
   xOrigin(x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetMaxVertexShaderVersion(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetMaxVertexShaderVersion();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMaxAntiAlias(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetMaxAntiAlias();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMaxTextureFiltering(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetMaxTextureFiltering();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetAntiAliasType(mrb_state *mrb, mrb_value self){
  int typeID;
	mrb_get_args(mrb,"i",&typeID);
   xSetAntiAliasType(typeID);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xAppTitle(mrb_state *mrb, mrb_value self){
  char* title;
	mrb_get_args(mrb,"z",&title);
   xAppTitle(title);
  free(title);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetWND(mrb_state *mrb, mrb_value self){
  int window;
	mrb_get_args(mrb,"i",&window);
   xSetWND(window);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetRenderWindow(mrb_state *mrb, mrb_value self){
  int window;
	mrb_get_args(mrb,"i",&window);
   xSetRenderWindow(window);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetTopWindow(mrb_state *mrb, mrb_value self){
  int window;
	mrb_get_args(mrb,"i",&window);
   xSetTopWindow(window);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDestroyRenderWindow(mrb_state *mrb, mrb_value self){
   xDestroyRenderWindow();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFlip(mrb_state *mrb, mrb_value self){
   xFlip();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xBackBuffer(mrb_state *mrb, mrb_value self){
   int _res = (int)xBackBuffer();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLockBuffer(mrb_state *mrb, mrb_value self){
  int buffer = 0;
	mrb_get_args(mrb,"|i",&buffer);
   xLockBuffer(buffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xUnlockBuffer(mrb_state *mrb, mrb_value self){
  int buffer = 0;
	mrb_get_args(mrb,"|i",&buffer);
   xUnlockBuffer(buffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWritePixelFast(mrb_state *mrb, mrb_value self){
  int x;
  int y;
  int argb;
  int buffer = -1;
	mrb_get_args(mrb,"iii|i",&x,&y,&argb,&buffer);
   xWritePixelFast(x,y,argb,buffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xReadPixelFast(mrb_state *mrb, mrb_value self){
  int x;
  int y;
  int buffer = -1;
	mrb_get_args(mrb,"ii|i",&x,&y,&buffer);
   int _res = (int)xReadPixelFast(x,y,buffer);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetPixels(mrb_state *mrb, mrb_value self){
  int buffer = -1;
	mrb_get_args(mrb,"|i",&buffer);
   int _res = (int)xGetPixels(buffer);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSaveBuffer(mrb_state *mrb, mrb_value self){
  int buffer;
  char* path;
	mrb_get_args(mrb,"iz",&buffer,&path);
   xSaveBuffer(buffer,path);
  free(path);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetCurrentBuffer(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetCurrentBuffer();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xBufferWidth(mrb_state *mrb, mrb_value self){
  int buffer = 0;
	mrb_get_args(mrb,"|i",&buffer);
   int _res = (int)xBufferWidth(buffer);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xBufferHeight(mrb_state *mrb, mrb_value self){
  int buffer = 0;
	mrb_get_args(mrb,"|i",&buffer);
   int _res = (int)xBufferHeight(buffer);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCatchTimestamp(mrb_state *mrb, mrb_value self){
   int _res = (int)xCatchTimestamp();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetElapsedTime(mrb_state *mrb, mrb_value self){
  int timeStamp;
	mrb_get_args(mrb,"i",&timeStamp);
   double _res = (double)xGetElapsedTime(timeStamp);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xSetBuffer(mrb_state *mrb, mrb_value self){
  int buffer = 0;
	mrb_get_args(mrb,"|i",&buffer);
   xSetBuffer(buffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetMRT(mrb_state *mrb, mrb_value self){
  int buffer;
  int frame;
  int index;
	mrb_get_args(mrb,"iii",&buffer,&frame,&index);
   xSetMRT(buffer,frame,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xUnSetMRT(mrb_state *mrb, mrb_value self){
   xUnSetMRT();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetNumberRT(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetNumberRT();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xTextureBuffer(mrb_state *mrb, mrb_value self){
  int texture;
  int frame = 0;
	mrb_get_args(mrb,"i|i",&texture,&frame);
   int _res = (int)xTextureBuffer(texture,frame);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadBuffer(mrb_state *mrb, mrb_value self){
  int buffer;
  char* path;
	mrb_get_args(mrb,"iz",&buffer,&path);
   xLoadBuffer(buffer,path);
  free(path);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xWritePixel(mrb_state *mrb, mrb_value self){
  int x;
  int y;
  int argb;
  int buffer = 0;
	mrb_get_args(mrb,"iii|i",&x,&y,&argb,&buffer);
   xWritePixel(x,y,argb,buffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCopyPixel(mrb_state *mrb, mrb_value self){
  int sx;
  int sy;
  int sourceBuffer;
  int dx;
  int dy;
  int destinationBuffer;
	mrb_get_args(mrb,"iiiiii",&sx,&sy,&sourceBuffer,&dx,&dy,&destinationBuffer);
   xCopyPixel(sx,sy,sourceBuffer,dx,dy,destinationBuffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCopyPixelFast(mrb_state *mrb, mrb_value self){
  int sx;
  int sy;
  int sourceBuffer;
  int dx;
  int dy;
  int destinationBuffer;
	mrb_get_args(mrb,"iiiiii",&sx,&sy,&sourceBuffer,&dx,&dy,&destinationBuffer);
   xCopyPixelFast(sx,sy,sourceBuffer,dx,dy,destinationBuffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCopyRect(mrb_state *mrb, mrb_value self){
  int sx;
  int sy;
  int sw;
  int sh;
  int dx;
  int dy;
  int sourceBuffer;
  int destinationBuffer;
	mrb_get_args(mrb,"iiiiiiii",&sx,&sy,&sw,&sh,&dx,&dy,&sourceBuffer,&destinationBuffer);
   xCopyRect(sx,sy,sw,sh,dx,dy,sourceBuffer,destinationBuffer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGraphicsBuffer(mrb_state *mrb, mrb_value self){
   int _res = (int)xGraphicsBuffer();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetColor(mrb_state *mrb, mrb_value self){
  int x;
  int y;
	mrb_get_args(mrb,"ii",&x,&y);
   int _res = (int)xGetColor(x,y);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xReadPixel(mrb_state *mrb, mrb_value self){
  int x;
  int y;
  int buffer = 0;
	mrb_get_args(mrb,"ii|i",&x,&y,&buffer);
   int _res = (int)xReadPixel(x,y,buffer);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGraphicsWidth(mrb_state *mrb, mrb_value self){
  int isVirtual = true;
	mrb_get_args(mrb,"|i",&isVirtual);
   int _res = (int)xGraphicsWidth(isVirtual);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGraphicsHeight(mrb_state *mrb, mrb_value self){
  int isVirtual = true;
	mrb_get_args(mrb,"|i",&isVirtual);
   int _res = (int)xGraphicsHeight(isVirtual);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGraphicsDepth(mrb_state *mrb, mrb_value self){
   int _res = (int)xGraphicsDepth();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xColorAlpha(mrb_state *mrb, mrb_value self){
   int _res = (int)xColorAlpha();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xColorRed(mrb_state *mrb, mrb_value self){
   int _res = (int)xColorRed();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xColorGreen(mrb_state *mrb, mrb_value self){
   int _res = (int)xColorGreen();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xColorBlue(mrb_state *mrb, mrb_value self){
   int _res = (int)xColorBlue();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xClsColor(mrb_state *mrb, mrb_value self){
  int red;
  int green;
  int blue;
  int alpha = 255;
	mrb_get_args(mrb,"iii|i",&red,&green,&blue,&alpha);
   xClsColor(red,green,blue,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearWorld(mrb_state *mrb, mrb_value self){
  int entities = true;
  int brushes = true;
  int textures = true;
	mrb_get_args(mrb,"|iii",&entities,&brushes,&textures);
   xClearWorld(entities,brushes,textures);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xColor(mrb_state *mrb, mrb_value self){
  int red;
  int green;
  int blue;
  int alpha = 255;
	mrb_get_args(mrb,"iii|i",&red,&green,&blue,&alpha);
   xColor(red,green,blue,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCls(mrb_state *mrb, mrb_value self){
   xCls();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xUpdateWorld(mrb_state *mrb, mrb_value self){
  double speed = 1.0;
	mrb_get_args(mrb,"|f",&speed);
   xUpdateWorld(speed);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRenderEntity(mrb_state *mrb, mrb_value self){
  int camera;
  int entity;
  double tween = 1.0;
	mrb_get_args(mrb,"ii|f",&camera,&entity,&tween);
   xRenderEntity(camera,entity,tween);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRenderWorld(mrb_state *mrb, mrb_value self){
  double tween = 1.0;
  int renderShadows = false;
	mrb_get_args(mrb,"|fi",&tween,&renderShadows);
   xRenderWorld(tween,renderShadows);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetAutoTB(mrb_state *mrb, mrb_value self){
  int flag;
	mrb_get_args(mrb,"i",&flag);
   xSetAutoTB(flag);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMaxClipPlanes(mrb_state *mrb, mrb_value self){
   int _res = (int)xMaxClipPlanes();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xWireframe(mrb_state *mrb, mrb_value self){
  int state;
	mrb_get_args(mrb,"i",&state);
   xWireframe(state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDither(mrb_state *mrb, mrb_value self){
  int state;
	mrb_get_args(mrb,"i",&state);
   xDither(state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetSkinningMethod(mrb_state *mrb, mrb_value self){
  int skinMethod;
	mrb_get_args(mrb,"i",&skinMethod);
   xSetSkinningMethod(skinMethod);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTrisRendered(mrb_state *mrb, mrb_value self){
   int _res = (int)xTrisRendered();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDIPCounter(mrb_state *mrb, mrb_value self){
   int _res = (int)xDIPCounter();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSurfRendered(mrb_state *mrb, mrb_value self){
   int _res = (int)xSurfRendered();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityRendered(mrb_state *mrb, mrb_value self){
   int _res = (int)xEntityRendered();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAmbientLight(mrb_state *mrb, mrb_value self){
  int red;
  int green;
  int blue;
  int world = 0;
	mrb_get_args(mrb,"iii|i",&red,&green,&blue,&world);
   xAmbientLight(red,green,blue,world);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetFPS(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetFPS();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAntiAlias(mrb_state *mrb, mrb_value self){
  int state;
	mrb_get_args(mrb,"i",&state);
   xAntiAlias(state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetTextureFiltering(mrb_state *mrb, mrb_value self){
  int filter;
	mrb_get_args(mrb,"i",&filter);
   xSetTextureFiltering(filter);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xStretchRect(mrb_state *mrb, mrb_value self){
  int texture1;
  int x1;
  int y1;
  int width1;
  int height1;
  int texture2;
  int x2;
  int y2;
  int width2;
  int height2;
  int filter;
	mrb_get_args(mrb,"iiiiiiiiiii",&texture1,&x1,&y1,&width1,&height1,&texture2,&x2,&y2,&width2,&height2,&filter);
   xStretchRect(texture1,x1,y1,width1,height1,texture2,x2,y2,width2,height2,filter);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xStretchBackBuffer(mrb_state *mrb, mrb_value self){
  int texture;
  int x;
  int y;
  int width;
  int height;
  int filter;
	mrb_get_args(mrb,"iiiiii",&texture,&x,&y,&width,&height,&filter);
   xStretchBackBuffer(texture,x,y,width,height,filter);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetDevice(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetDevice();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xReleaseGraphics(mrb_state *mrb, mrb_value self){
   xReleaseGraphics();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xShowPointer(mrb_state *mrb, mrb_value self){
   xShowPointer();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xHidePointer(mrb_state *mrb, mrb_value self){
   xHidePointer();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateDSS(mrb_state *mrb, mrb_value self){
  int width;
  int height;
	mrb_get_args(mrb,"ii",&width,&height);
   xCreateDSS(width,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeleteDSS(mrb_state *mrb, mrb_value self){
   xDeleteDSS();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGridColor(mrb_state *mrb, mrb_value self){
  int centerRed;
  int centerGreen;
  int centerBlue;
  int gridRed;
  int gridGreen;
  int gridBlue;
	mrb_get_args(mrb,"iiiiii",&centerRed,&centerGreen,&centerBlue,&gridRed,&gridGreen,&gridBlue);
   xGridColor(centerRed,centerGreen,centerBlue,gridRed,gridGreen,gridBlue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawGrid(mrb_state *mrb, mrb_value self){
  double x;
  double z;
  int gridSize;
  int range;
	mrb_get_args(mrb,"ffii",&x,&z,&gridSize,&range);
   xDrawGrid(x,z,gridSize,range);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawBBox(mrb_state *mrb, mrb_value self){
  int draw;
  int zOn;
  int red;
  int green;
  int blue;
  int alpha;
	mrb_get_args(mrb,"iiiiii",&draw,&zOn,&red,&green,&blue,&alpha);
   xDrawBBox(draw,zOn,red,green,blue,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGraphics3D(mrb_state *mrb, mrb_value self){
  int width;
  int height;
  int depth;
  int mode;
  int vsync;
	mrb_get_args(mrb,"iiiii",&width,&height,&depth,&mode,&vsync);
   xGraphics3D(width,height,depth,mode,vsync);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGraphicsAspectRatio(mrb_state *mrb, mrb_value self){
  double aspectRatio;
	mrb_get_args(mrb,"f",&aspectRatio);
   xGraphicsAspectRatio(aspectRatio);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGraphicsBorderColor(mrb_state *mrb, mrb_value self){
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iii",&red,&green,&blue);
   xGraphicsBorderColor(red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetRenderWindow(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetRenderWindow();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xKey(mrb_state *mrb, mrb_value self){
  char* key;
	mrb_get_args(mrb,"z",&key);
   xKey(key);
  //free(key);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetEngineSetting(mrb_state *mrb, mrb_value self){
  char* parameter;
  char* value;
	mrb_get_args(mrb,"zz",&parameter,&value);
   xSetEngineSetting(parameter,value);
  //free(parameter);
//free(value);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetEngineSetting(mrb_state *mrb, mrb_value self){
  char* parameter;
	mrb_get_args(mrb,"z",&parameter);
   char* _res = (char*)xGetEngineSetting(parameter);
  free(parameter);
return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xHWInstancingAvailable(mrb_state *mrb, mrb_value self){
   int _res = (int)xHWInstancingAvailable();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xShaderInstancingAvailable(mrb_state *mrb, mrb_value self){
   int _res = (int)xShaderInstancingAvailable();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetShaderLayer(mrb_state *mrb, mrb_value self){
  int layer;
	mrb_get_args(mrb,"i",&layer);
   xSetShaderLayer(layer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetShaderLayer(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetShaderLayer();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDrawMovementGizmo(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int selectMask = 0;
	mrb_get_args(mrb,"fff|i",&x,&y,&z,&selectMask);
   xDrawMovementGizmo(x,y,z,selectMask);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawScaleGizmo(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int selectMask = 0;
  double sx = 1.0;
  double sy = 1.0;
  double sz = 1.0;
	mrb_get_args(mrb,"fff|ifff",&x,&y,&z,&selectMask,&sx,&sy,&sz);
   xDrawScaleGizmo(x,y,z,selectMask,sx,sy,sz);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawRotationGizmo(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int selectMask = 0;
  double pitch = 0.0;
  double yaw = 0.0;
  double roll = 0.0;
	mrb_get_args(mrb,"fff|ifff",&x,&y,&z,&selectMask,&pitch,&yaw,&roll);
   xDrawRotationGizmo(x,y,z,selectMask,pitch,yaw,roll);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCheckMovementGizmo(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int camera;
  int mx;
  int my;
	mrb_get_args(mrb,"fffiii",&x,&y,&z,&camera,&mx,&my);
   int _res = (int)xCheckMovementGizmo(x,y,z,camera,mx,my);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCheckScaleGizmo(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int camera;
  int mx;
  int my;
	mrb_get_args(mrb,"fffiii",&x,&y,&z,&camera,&mx,&my);
   int _res = (int)xCheckScaleGizmo(x,y,z,camera,mx,my);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCheckRotationGizmo(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int camera;
  int mx;
  int my;
	mrb_get_args(mrb,"fffiii",&x,&y,&z,&camera,&mx,&my);
   int _res = (int)xCheckRotationGizmo(x,y,z,camera,mx,my);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCaptureWorld(mrb_state *mrb, mrb_value self){
   xCaptureWorld();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCountGfxModes(mrb_state *mrb, mrb_value self){
   int _res = (int)xCountGfxModes();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGfxModeWidth(mrb_state *mrb, mrb_value self){
  int mode;
	mrb_get_args(mrb,"i",&mode);
   int _res = (int)xGfxModeWidth(mode);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGfxModeHeight(mrb_state *mrb, mrb_value self){
  int mode;
	mrb_get_args(mrb,"i",&mode);
   int _res = (int)xGfxModeHeight(mode);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGfxModeDepth(mrb_state *mrb, mrb_value self){
  int mode;
	mrb_get_args(mrb,"i",&mode);
   int _res = (int)xGfxModeDepth(mode);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGfxModeExists(mrb_state *mrb, mrb_value self){
  int width;
  int height;
  int depth;
	mrb_get_args(mrb,"iii",&width,&height,&depth);
   int _res = (int)xGfxModeExists(width,height,depth);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAppWindowFrame(mrb_state *mrb, mrb_value self){
  int state;
	mrb_get_args(mrb,"i",&state);
   xAppWindowFrame(state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMillisecs(mrb_state *mrb, mrb_value self){
   int _res = (int)xMillisecs();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDeltaTime(mrb_state *mrb, mrb_value self){
  int fromInit = false;
	mrb_get_args(mrb,"|i",&fromInit);
   int _res = (int)xDeltaTime(fromInit);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDeltaValue(mrb_state *mrb, mrb_value self){
  double value;
  int time = 0;
	mrb_get_args(mrb,"f|i",&value,&time);
   double _res = (double)xDeltaValue(value,time);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xAddDeviceLostCallback(mrb_state *mrb, mrb_value self){
  int func;
	mrb_get_args(mrb,"i",&func);
   xAddDeviceLostCallback(func);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeleteDeviceLostCallback(mrb_state *mrb, mrb_value self){
  int func;
	mrb_get_args(mrb,"i",&func);
   xDeleteDeviceLostCallback(func);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeinit(mrb_state *mrb, mrb_value self){
   xDeinit();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xImageColor(mrb_state *mrb, mrb_value self){
  int image;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&image,&red,&green,&blue);
   xImageColor(image,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xImageAlpha(mrb_state *mrb, mrb_value self){
  int image;
  double alpha;
	mrb_get_args(mrb,"if",&image,&alpha);
   xImageAlpha(image,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xImageBuffer(mrb_state *mrb, mrb_value self){
  int image;
  int frame = 0;
	mrb_get_args(mrb,"i|i",&image,&frame);
   int _res = (int)xImageBuffer(image,frame);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateImage(mrb_state *mrb, mrb_value self){
  int width;
  int height;
  int frame = 1;
	mrb_get_args(mrb,"ii|i",&width,&height,&frame);
   int _res = (int)xCreateImage(width,height,frame);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGrabImage(mrb_state *mrb, mrb_value self){
  int image;
  int x;
  int y;
  int frame = 0;
	mrb_get_args(mrb,"iii|i",&image,&x,&y,&frame);
   xGrabImage(image,x,y,frame);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFreeImage(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   xFreeImage(image);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoadImage(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xLoadImage(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadAnimImage(mrb_state *mrb, mrb_value self){
  char* path;
  int width;
  int height;
  int startFrame;
  int frames;
	mrb_get_args(mrb,"ziiii",&path,&width,&height,&startFrame,&frames);
   int _res = (int)xLoadAnimImage(path,width,height,startFrame,frames);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSaveImage(mrb_state *mrb, mrb_value self){
  int image;
  char* path;
  int frame = 0;
	mrb_get_args(mrb,"iz|i",&image,&path,&frame);
   xSaveImage(image,path,frame);
  free(path);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawImage(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
  int frame = 0;
	mrb_get_args(mrb,"iff|i",&image,&x,&y,&frame);
   xDrawImage(image,x,y,frame);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawImageRect(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
  double rectx;
  double recty;
  double rectWidth;
  double rectHeight;
  int frame = 0;
	mrb_get_args(mrb,"iffffff|i",&image,&x,&y,&rectx,&recty,&rectWidth,&rectHeight,&frame);
   xDrawImageRect(image,x,y,rectx,recty,rectWidth,rectHeight,frame);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xScaleImage(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
	mrb_get_args(mrb,"iff",&image,&x,&y);
   xScaleImage(image,x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xResizeImage(mrb_state *mrb, mrb_value self){
  int image;
  double width;
  double height;
	mrb_get_args(mrb,"iff",&image,&width,&height);
   xResizeImage(image,width,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRotateImage(mrb_state *mrb, mrb_value self){
  int image;
  double angle;
	mrb_get_args(mrb,"if",&image,&angle);
   xRotateImage(image,angle);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xImageAngle(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   double _res = (double)xImageAngle(image);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xImageWidth(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   int _res = (int)xImageWidth(image);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xImageHeight(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   int _res = (int)xImageHeight(image);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xImagesCollide(mrb_state *mrb, mrb_value self){
  int image1;
  int x1;
  int y1;
  int frame1;
  int image2;
  int x2;
  int y2;
  int frame2;
	mrb_get_args(mrb,"iiiiiiii",&image1,&x1,&y1,&frame1,&image2,&x2,&y2,&frame2);
   int _res = (int)xImagesCollide(image1,x1,y1,frame1,image2,x2,y2,frame2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xImageRectCollide(mrb_state *mrb, mrb_value self){
  int image;
  int x;
  int y;
  int frame;
  int rectx;
  int recty;
  int rectWidth;
  int rectHeight;
	mrb_get_args(mrb,"iiiiiiii",&image,&x,&y,&frame,&rectx,&recty,&rectWidth,&rectHeight);
   int _res = (int)xImageRectCollide(image,x,y,frame,rectx,recty,rectWidth,rectHeight);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xImageRectOverlap(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
  double rectx;
  double recty;
  double rectWidth;
  double rectHeight;
	mrb_get_args(mrb,"iffffff",&image,&x,&y,&rectx,&recty,&rectWidth,&rectHeight);
   int _res = (int)xImageRectOverlap(image,x,y,rectx,recty,rectWidth,rectHeight);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xImageXHandle(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   int _res = (int)xImageXHandle(image);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xImageYHandle(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   int _res = (int)xImageYHandle(image);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xHandleImage(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
	mrb_get_args(mrb,"iff",&image,&x,&y);
   xHandleImage(image,x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMidHandle(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   xMidHandle(image);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xAutoMidHandle(mrb_state *mrb, mrb_value self){
  int state;
	mrb_get_args(mrb,"i",&state);
   xAutoMidHandle(state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTileImage(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
  int frame = 0;
	mrb_get_args(mrb,"iff|i",&image,&x,&y,&frame);
   xTileImage(image,x,y,frame);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xImagesOverlap(mrb_state *mrb, mrb_value self){
  int image1;
  double x1;
  double y1;
  int image2;
  double x2;
  double y2;
	mrb_get_args(mrb,"iffiff",&image1,&x1,&y1,&image2,&x2,&y2);
   int _res = (int)xImagesOverlap(image1,x1,y1,image2,x2,y2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMaskImage(mrb_state *mrb, mrb_value self){
  int image;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&image,&red,&green,&blue);
   xMaskImage(image,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCopyImage(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   int _res = (int)xCopyImage(image);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDrawBlock(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
  int frame = 0;
	mrb_get_args(mrb,"iff|i",&image,&x,&y,&frame);
   xDrawBlock(image,x,y,frame);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawBlockRect(mrb_state *mrb, mrb_value self){
  int image;
  double x;
  double y;
  double rectx;
  double recty;
  double rectWidth;
  double rectHeight;
  int frame = 0;
	mrb_get_args(mrb,"iffffff|i",&image,&x,&y,&rectx,&recty,&rectWidth,&rectHeight,&frame);
   xDrawBlockRect(image,x,y,rectx,recty,rectWidth,rectHeight,frame);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xImageActualWidth(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   int _res = (int)xImageActualWidth(image);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xImageActualHeight(mrb_state *mrb, mrb_value self){
  int image;
	mrb_get_args(mrb,"i",&image);
   int _res = (int)xImageActualHeight(image);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFlushKeys(mrb_state *mrb, mrb_value self){
   xFlushKeys();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFlushMouse(mrb_state *mrb, mrb_value self){
   xFlushMouse();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xKeyHit(mrb_state *mrb, mrb_value self){
  int key;
	mrb_get_args(mrb,"i",&key);
   int _res = (int)xKeyHit(key);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xKeyUp(mrb_state *mrb, mrb_value self){
  int key;
	mrb_get_args(mrb,"i",&key);
   int _res = (int)xKeyUp(key);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xWaitKey(mrb_state *mrb, mrb_value self){
   xWaitKey();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMouseHit(mrb_state *mrb, mrb_value self){
  int key;
	mrb_get_args(mrb,"i",&key);
   int _res = (int)xMouseHit(key);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xKeyDown(mrb_state *mrb, mrb_value self){
  int key;
	mrb_get_args(mrb,"i",&key);
   int _res = (int)xKeyDown(key);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetKey(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetKey();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseDown(mrb_state *mrb, mrb_value self){
  int key;
	mrb_get_args(mrb,"i",&key);
   int _res = (int)xMouseDown(key);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseUp(mrb_state *mrb, mrb_value self){
  int key;
	mrb_get_args(mrb,"i",&key);
   int _res = (int)xMouseUp(key);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMouse(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetMouse();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseX(mrb_state *mrb, mrb_value self){
   int _res = (int)xMouseX();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseY(mrb_state *mrb, mrb_value self){
   int _res = (int)xMouseY();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseZ(mrb_state *mrb, mrb_value self){
   int _res = (int)xMouseZ();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseXSpeed(mrb_state *mrb, mrb_value self){
   int _res = (int)xMouseXSpeed();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseYSpeed(mrb_state *mrb, mrb_value self){
   int _res = (int)xMouseYSpeed();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseZSpeed(mrb_state *mrb, mrb_value self){
   int _res = (int)xMouseZSpeed();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMouseSpeed(mrb_state *mrb, mrb_value self){
   int _res = (int)xMouseSpeed();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMoveMouse(mrb_state *mrb, mrb_value self){
  int x;
  int y;
	mrb_get_args(mrb,"ii",&x,&y);
   xMoveMouse(x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJoyType(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xJoyType(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJoyDown(mrb_state *mrb, mrb_value self){
  int key;
  int portID = 0;
	mrb_get_args(mrb,"i|i",&key,&portID);
   int _res = (int)xJoyDown(key,portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJoyHit(mrb_state *mrb, mrb_value self){
  int key;
  int portID = 0;
	mrb_get_args(mrb,"i|i",&key,&portID);
   int _res = (int)xJoyHit(key,portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetJoy(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xGetJoy(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFlushJoy(mrb_state *mrb, mrb_value self){
   xFlushJoy();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWaitJoy(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xWaitJoy(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJoyX(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyX(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyY(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyY(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyZ(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyZ(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyU(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyU(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyV(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyV(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyPitch(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyPitch(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyYaw(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyYaw(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyRoll(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyRoll(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyHat(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   double _res = (double)xJoyHat(portID);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJoyXDir(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xJoyXDir(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJoyYDir(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xJoyYDir(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJoyZDir(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xJoyZDir(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJoyUDir(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xJoyUDir(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJoyVDir(mrb_state *mrb, mrb_value self){
  int portID = 0;
	mrb_get_args(mrb,"|i",&portID);
   int _res = (int)xJoyVDir(portID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCountJoys(mrb_state *mrb, mrb_value self){
   int _res = (int)xCountJoys();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateLight(mrb_state *mrb, mrb_value self){
  int typeID = 1;
	mrb_get_args(mrb,"|i",&typeID);
   int _res = (int)xCreateLight(typeID);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLightShadowEpsilons(mrb_state *mrb, mrb_value self){
  int light;
  double epsilon1;
  double epsilon2;
	mrb_get_args(mrb,"iff",&light,&epsilon1,&epsilon2);
   xLightShadowEpsilons(light,epsilon1,epsilon2);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLightEnableShadows(mrb_state *mrb, mrb_value self){
  int light;
  int state;
	mrb_get_args(mrb,"ii",&light,&state);
   xLightEnableShadows(light,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLightShadowsEnabled(mrb_state *mrb, mrb_value self){
  int light;
	mrb_get_args(mrb,"i",&light);
   int _res = (int)xLightShadowsEnabled(light);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLightRange(mrb_state *mrb, mrb_value self){
  int light;
  double range;
	mrb_get_args(mrb,"if",&light,&range);
   xLightRange(light,range);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLightColor(mrb_state *mrb, mrb_value self){
  int light;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&light,&red,&green,&blue);
   xLightColor(light,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLightConeAngles(mrb_state *mrb, mrb_value self){
  int light;
  double inner;
  double outer;
	mrb_get_args(mrb,"iff",&light,&inner,&outer);
   xLightConeAngles(light,inner,outer);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateLog(mrb_state *mrb, mrb_value self){
  int target = 1;
  int level = 0;
  char* filename = "xors_log.html";
  char* cssfilename = "";
	mrb_get_args(mrb,"|iizz",&target,&level,&filename,&cssfilename);
   int _res = (int)xCreateLog(target,level,filename,cssfilename);
  free(filename);
free(cssfilename);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCloseLog(mrb_state *mrb, mrb_value self){
   int _res = (int)xCloseLog();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetLogString(mrb_state *mrb, mrb_value self){
   char* _res = (char*)xGetLogString();
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xClearLogString(mrb_state *mrb, mrb_value self){
   xClearLogString();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetLogLevel(mrb_state *mrb, mrb_value self){
  int level = 2;
	mrb_get_args(mrb,"|i",&level);
   xSetLogLevel(level);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetLogTarget(mrb_state *mrb, mrb_value self){
  int target = 1;
	mrb_get_args(mrb,"|i",&target);
   xSetLogTarget(target);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetLogLevel(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetLogLevel();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetLogTarget(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetLogTarget();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLogInfo(mrb_state *mrb, mrb_value self){
  char* message;
  char* func = "";
  char* file = "";
  int line = -1;
	mrb_get_args(mrb,"z|zzi",&message,&func,&file,&line);
   xLogInfo(message,func,file,line);
  free(message);
free(func);
free(file);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xLogMessage(mrb_state *mrb, mrb_value self){
  char* message;
  char* func = "";
  char* file = "";
  int line = -1;
	mrb_get_args(mrb,"z|zzi",&message,&func,&file,&line);
   xLogMessage(message,func,file,line);
  free(message);
free(func);
free(file);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xLogWarning(mrb_state *mrb, mrb_value self){
  char* message;
  char* func = "";
  char* file = "";
  int line = -1;
	mrb_get_args(mrb,"z|zzi",&message,&func,&file,&line);
   xLogWarning(message,func,file,line);
  free(message);
free(func);
free(file);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xLogError(mrb_state *mrb, mrb_value self){
  char* message;
  char* func = "";
  char* file = "";
  int line = -1;
	mrb_get_args(mrb,"z|zzi",&message,&func,&file,&line);
   xLogError(message,func,file,line);
  free(message);
free(func);
free(file);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xLogFatal(mrb_state *mrb, mrb_value self){
  char* message;
  char* func = "";
  char* file = "";
  int line = -1;
	mrb_get_args(mrb,"z|zzi",&message,&func,&file,&line);
   xLogFatal(message,func,file,line);
  free(message);
free(func);
free(file);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateMesh(mrb_state *mrb, mrb_value self){
  int parent = 0;
	mrb_get_args(mrb,"|i",&parent);
   int _res = (int)xCreateMesh(parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadMesh(mrb_state *mrb, mrb_value self){
  char* path;
  int parent = 0;
	mrb_get_args(mrb,"z|i",&path,&parent);
   int _res = (int)xLoadMesh(path,parent);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadMeshWithChild(mrb_state *mrb, mrb_value self){
  char* path;
  int parent = 0;
	mrb_get_args(mrb,"z|i",&path,&parent);
   int _res = (int)xLoadMeshWithChild(path,parent);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadAnimMesh(mrb_state *mrb, mrb_value self){
  char* path;
  int parent = 0;
	mrb_get_args(mrb,"z|i",&path,&parent);
   int _res = (int)xLoadAnimMesh(path,parent);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateCube(mrb_state *mrb, mrb_value self){
  int parent = 0;
	mrb_get_args(mrb,"|i",&parent);
   int _res = (int)xCreateCube(parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateSphere(mrb_state *mrb, mrb_value self){
  int segments = 16;
  int parent = 0;
	mrb_get_args(mrb,"|ii",&segments,&parent);
   int _res = (int)xCreateSphere(segments,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateCylinder(mrb_state *mrb, mrb_value self){
  int segments = 16;
  int solid = true;
  int parent = 0;
	mrb_get_args(mrb,"|iii",&segments,&solid,&parent);
   int _res = (int)xCreateCylinder(segments,solid,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateTorus(mrb_state *mrb, mrb_value self){
  int segments = 16;
  double R = 1.0;
  double r_tube = 0.025;
  int parent = 0;
	mrb_get_args(mrb,"|iffi",&segments,&R,&r_tube,&parent);
   int _res = (int)xCreateTorus(segments,R,r_tube,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateCone(mrb_state *mrb, mrb_value self){
  int segments = 16;
  int solid = true;
  int parent = 0;
	mrb_get_args(mrb,"|iii",&segments,&solid,&parent);
   int _res = (int)xCreateCone(segments,solid,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCopyMesh(mrb_state *mrb, mrb_value self){
  int entity;
  int parent = 0;
	mrb_get_args(mrb,"i|i",&entity,&parent);
   int _res = (int)xCopyMesh(entity,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAddMesh(mrb_state *mrb, mrb_value self){
  int source;
  int destination;
	mrb_get_args(mrb,"ii",&source,&destination);
   xAddMesh(source,destination);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFlipMesh(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xFlipMesh(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPaintMesh(mrb_state *mrb, mrb_value self){
  int entity;
  int brush;
	mrb_get_args(mrb,"ii",&entity,&brush);
   xPaintMesh(entity,brush);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xFitMesh(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  double width;
  double height;
  double depth;
  int uniform = false;
	mrb_get_args(mrb,"iffffff|i",&entity,&x,&y,&z,&width,&height,&depth,&uniform);
   xFitMesh(entity,x,y,z,width,height,depth,uniform);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMeshWidth(mrb_state *mrb, mrb_value self){
  int entity;
  int recursive = false;
	mrb_get_args(mrb,"i|i",&entity,&recursive);
   double _res = (double)xMeshWidth(entity,recursive);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xMeshHeight(mrb_state *mrb, mrb_value self){
  int entity;
  int recursive = false;
	mrb_get_args(mrb,"i|i",&entity,&recursive);
   double _res = (double)xMeshHeight(entity,recursive);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xMeshDepth(mrb_state *mrb, mrb_value self){
  int entity;
  int recursive = false;
	mrb_get_args(mrb,"i|i",&entity,&recursive);
   double _res = (double)xMeshDepth(entity,recursive);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xScaleMesh(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xScaleMesh(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRotateMesh(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xRotateMesh(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPositionMesh(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xPositionMesh(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xUpdateNormals(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xUpdateNormals(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xUpdateN(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xUpdateN(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xUpdateTB(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xUpdateTB(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMeshesBBIntersect(mrb_state *mrb, mrb_value self){
  int entity1;
  int entity2;
	mrb_get_args(mrb,"ii",&entity1,&entity2);
   int _res = (int)xMeshesBBIntersect(entity1,entity2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMeshesIntersect(mrb_state *mrb, mrb_value self){
  int entity1;
  int entity2;
	mrb_get_args(mrb,"ii",&entity1,&entity2);
   int _res = (int)xMeshesIntersect(entity1,entity2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMeshVB(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetMeshVB(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMeshIB(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetMeshIB(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMeshVBSize(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetMeshVBSize(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetMeshIBSize(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xGetMeshIBSize(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDeleteMeshVB(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xDeleteMeshVB(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeleteMeshIB(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xDeleteMeshIB(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCountSurfaces(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xCountSurfaces(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetSurface(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   int _res = (int)xGetSurface(entity,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreatePivot(mrb_state *mrb, mrb_value self){
  int parent = 0;
	mrb_get_args(mrb,"|i",&parent);
   int _res = (int)xCreatePivot(parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFindSurface(mrb_state *mrb, mrb_value self){
  int entity;
  int brush;
	mrb_get_args(mrb,"ii",&entity,&brush);
   int _res = (int)xFindSurface(entity,brush);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreatePoly(mrb_state *mrb, mrb_value self){
  int sides = 0;
  int parent = 0;
	mrb_get_args(mrb,"|ii",&sides,&parent);
   int _res = (int)xCreatePoly(sides,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMeshSingleSurface(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xMeshSingleSurface(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSaveMesh(mrb_state *mrb, mrb_value self){
  int entity;
  char* path;
	mrb_get_args(mrb,"iz",&entity,&path);
   int _res = (int)xSaveMesh(entity,path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLightMesh(mrb_state *mrb, mrb_value self){
  int entity;
  int red;
  int green;
  int blue;
  double range = 0.0;
  double lightX = 0.0;
  double lightY = 0.0;
  double lightZ = 0.0;
	mrb_get_args(mrb,"iiii|ffff",&entity,&red,&green,&blue,&range,&lightX,&lightY,&lightZ);
   xLightMesh(entity,red,green,blue,range,lightX,lightY,lightZ);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMeshPrimitiveType(mrb_state *mrb, mrb_value self){
  int entity;
  int ptype;
	mrb_get_args(mrb,"ii",&entity,&ptype);
   xMeshPrimitiveType(entity,ptype);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticlePosition(mrb_state *mrb, mrb_value self){
  int particle;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&particle,&x,&y,&z);
   xParticlePosition(particle,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticleX(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleX(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleY(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleY(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleZ(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleZ(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleVeclocity(mrb_state *mrb, mrb_value self){
  int particle;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&particle,&x,&y,&z);
   xParticleVeclocity(particle,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticleVX(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleVX(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleVY(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleVY(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleVZ(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleVZ(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleRotation(mrb_state *mrb, mrb_value self){
  int particle;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&particle,&x,&y,&z);
   xParticleRotation(particle,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticlePitch(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticlePitch(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleYaw(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleYaw(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleRoll(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleRoll(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleTorque(mrb_state *mrb, mrb_value self){
  int particle;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&particle,&x,&y,&z);
   xParticleTorque(particle,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticleTPitch(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleTPitch(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleTYaw(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleTYaw(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleTRoll(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleTRoll(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleSetAlpha(mrb_state *mrb, mrb_value self){
  int particle;
  double alpha;
	mrb_get_args(mrb,"if",&particle,&alpha);
   xParticleSetAlpha(particle,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticleGetAlpha(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleGetAlpha(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleColor(mrb_state *mrb, mrb_value self){
  int particle;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&particle,&x,&y,&z);
   xParticleColor(particle,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticleRed(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleRed(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleGreen(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleGreen(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleBlue(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleBlue(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleScale(mrb_state *mrb, mrb_value self){
  int particle;
  double x;
  double y;
	mrb_get_args(mrb,"iff",&particle,&x,&y);
   xParticleScale(particle,x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticleSX(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleSX(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleSY(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleSY(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleScaleSpeed(mrb_state *mrb, mrb_value self){
  int particle;
  double x;
  double y;
	mrb_get_args(mrb,"iff",&particle,&x,&y);
   xParticleScaleSpeed(particle,x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xParticleScaleSpeedX(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleScaleSpeedX(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xParticleScaleSpeedY(mrb_state *mrb, mrb_value self){
  int particle;
	mrb_get_args(mrb,"i",&particle);
   double _res = (double)xParticleScaleSpeedY(particle);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityAddDummyShape(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xEntityAddDummyShape(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddBoxShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
  double width = 0.0;
  double height = 0.0;
  double depth = 0.0;
	mrb_get_args(mrb,"if|fff",&entity,&mass,&width,&height,&depth);
   xEntityAddBoxShape(entity,mass,width,height,depth);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddSphereShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
  double radius = 0.0;
	mrb_get_args(mrb,"if|f",&entity,&mass,&radius);
   xEntityAddSphereShape(entity,mass,radius);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddCapsuleShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
  double radius = 0.0;
  double height = 0.0;
	mrb_get_args(mrb,"if|ff",&entity,&mass,&radius,&height);
   xEntityAddCapsuleShape(entity,mass,radius,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddConeShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
  double radius = 0.0;
  double height = 0.0;
	mrb_get_args(mrb,"if|ff",&entity,&mass,&radius,&height);
   xEntityAddConeShape(entity,mass,radius,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddCylinderShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
  double width = 0.0;
  double height = 0.0;
  double depth = 0.0;
	mrb_get_args(mrb,"if|fff",&entity,&mass,&width,&height,&depth);
   xEntityAddCylinderShape(entity,mass,width,height,depth);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddTriMeshShape(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xEntityAddTriMeshShape(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddTriMeshShapeProxy(mrb_state *mrb, mrb_value self){
  int entity;
  int proxy;
	mrb_get_args(mrb,"ii",&entity,&proxy);
   xEntityAddTriMeshShapeProxy(entity,proxy);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddConvexShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
	mrb_get_args(mrb,"if",&entity,&mass);
   xEntityAddConvexShape(entity,mass);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddConvexShapeProxy(mrb_state *mrb, mrb_value self){
  int entity;
  int proxy;
  double mass;
	mrb_get_args(mrb,"iif",&entity,&proxy,&mass);
   xEntityAddConvexShapeProxy(entity,proxy,mass);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddConcaveShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
	mrb_get_args(mrb,"if",&entity,&mass);
   xEntityAddConcaveShape(entity,mass);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddConcaveShapeProxy(mrb_state *mrb, mrb_value self){
  int entity;
  int proxy;
  double mass;
	mrb_get_args(mrb,"iif",&entity,&proxy,&mass);
   xEntityAddConcaveShapeProxy(entity,proxy,mass);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddTerrainShape(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xEntityAddTerrainShape(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAttachBody(mrb_state *mrb, mrb_value self){
  int entity;
  int body;
	mrb_get_args(mrb,"ii",&entity,&body);
   xEntityAttachBody(entity,body);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityDetachBody(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityDetachBody(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreeEntityBody(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xFreeEntityBody(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityAddCompoundShape(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
	mrb_get_args(mrb,"if",&entity,&mass);
   xEntityAddCompoundShape(entity,mass);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityCompoundAddBox(mrb_state *mrb, mrb_value self){
  int entity;
  double width;
  double height;
  double depth;
	mrb_get_args(mrb,"ifff",&entity,&width,&height,&depth);
   int _res = (int)xEntityCompoundAddBox(entity,width,height,depth);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityCompoundAddSphere(mrb_state *mrb, mrb_value self){
  int entity;
  double radius;
	mrb_get_args(mrb,"if",&entity,&radius);
   int _res = (int)xEntityCompoundAddSphere(entity,radius);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityCompoundAddCapsule(mrb_state *mrb, mrb_value self){
  int entity;
  double radius;
  double height;
	mrb_get_args(mrb,"iff",&entity,&radius,&height);
   int _res = (int)xEntityCompoundAddCapsule(entity,radius,height);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityCompoundAddCone(mrb_state *mrb, mrb_value self){
  int entity;
  double radius;
  double height;
	mrb_get_args(mrb,"iff",&entity,&radius,&height);
   int _res = (int)xEntityCompoundAddCone(entity,radius,height);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityCompoundAddCylinder(mrb_state *mrb, mrb_value self){
  int entity;
  double radius;
  double height;
	mrb_get_args(mrb,"iff",&entity,&radius,&height);
   int _res = (int)xEntityCompoundAddCylinder(entity,radius,height);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityCompoundCountChildren(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityCompoundCountChildren(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityCompoundRemoveChild(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   xEntityCompoundRemoveChild(entity,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityCompoundChildSetPosition(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"iifff",&entity,&index,&x,&y,&z);
   xEntityCompoundChildSetPosition(entity,index,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityCompoundChildGetX(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityCompoundChildGetX(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityCompoundChildGetY(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityCompoundChildGetY(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityCompoundChildGetZ(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityCompoundChildGetZ(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityCompoundChildSetRotation(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
  double pitch;
  double yaw;
  double roll;
	mrb_get_args(mrb,"iifff",&entity,&index,&pitch,&yaw,&roll);
   xEntityCompoundChildSetRotation(entity,index,pitch,yaw,roll);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityCompoundChildGetPitch(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityCompoundChildGetPitch(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityCompoundChildGetYaw(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityCompoundChildGetYaw(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityCompoundChildGetRoll(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityCompoundChildGetRoll(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xCreateHingeJoint(mrb_state *mrb, mrb_value self){
  int firstBody;
  int secondBody;
  double pivotX;
  double pivotY;
  double pivotZ;
  double axisX;
  double axisY;
  double axisZ;
  int isGlobal = false;
	mrb_get_args(mrb,"iiffffff|i",&firstBody,&secondBody,&pivotX,&pivotY,&pivotZ,&axisX,&axisY,&axisZ,&isGlobal);
   int _res = (int)xCreateHingeJoint(firstBody,secondBody,pivotX,pivotY,pivotZ,axisX,axisY,axisZ,isGlobal);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateBallJoint(mrb_state *mrb, mrb_value self){
  int firstBody;
  int secondBody;
  double pivotX;
  double pivotY;
  double pivotZ;
  int isGlobal = false;
	mrb_get_args(mrb,"iifff|i",&firstBody,&secondBody,&pivotX,&pivotY,&pivotZ,&isGlobal);
   int _res = (int)xCreateBallJoint(firstBody,secondBody,pivotX,pivotY,pivotZ,isGlobal);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateD6Joint(mrb_state *mrb, mrb_value self){
  int firstBody;
  int secondBody;
  double pivot1X;
  double pivot1Y;
  double pivot1Z;
  double pivot2X;
  double pivot2Y;
  double pivot2Z;
  int isGlobal1 = false;
  int isGlobal2 = false;
	mrb_get_args(mrb,"iiffffff|ii",&firstBody,&secondBody,&pivot1X,&pivot1Y,&pivot1Z,&pivot2X,&pivot2Y,&pivot2Z,&isGlobal1,&isGlobal2);
   int _res = (int)xCreateD6Joint(firstBody,secondBody,pivot1X,pivot1Y,pivot1Z,pivot2X,pivot2Y,pivot2Z,isGlobal1,isGlobal2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateD6SpringJoint(mrb_state *mrb, mrb_value self){
  int firstBody;
  int secondBody;
  double pivot1X;
  double pivot1Y;
  double pivot1Z;
  double pivot2X;
  double pivot2Y;
  double pivot2Z;
  int isGlobal1 = false;
  int isGlobal2 = false;
	mrb_get_args(mrb,"iiffffff|ii",&firstBody,&secondBody,&pivot1X,&pivot1Y,&pivot1Z,&pivot2X,&pivot2Y,&pivot2Z,&isGlobal1,&isGlobal2);
   int _res = (int)xCreateD6SpringJoint(firstBody,secondBody,pivot1X,pivot1Y,pivot1Z,pivot2X,pivot2Y,pivot2Z,isGlobal1,isGlobal2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJointHingeGetAngle(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointHingeGetAngle(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetPitchAngle(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetPitchAngle(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetYawAngle(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetYawAngle(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetRollAngle(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetRollAngle(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetAngle(mrb_state *mrb, mrb_value self){
  int joint;
  int axis = 0;
	mrb_get_args(mrb,"i|i",&joint,&axis);
   double _res = (double)xJointD6GetAngle(joint,axis);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointDisableCollisions(mrb_state *mrb, mrb_value self){
  int joint;
  int state;
	mrb_get_args(mrb,"ii",&joint,&state);
   xJointDisableCollisions(joint,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointEnable(mrb_state *mrb, mrb_value self){
  int joint;
  int state;
	mrb_get_args(mrb,"ii",&joint,&state);
   xJointEnable(joint,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointIsEnabled(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   int _res = (int)xJointIsEnabled(joint);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJointGetImpulse(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointGetImpulse(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xFreeJoint(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   xFreeJoint(joint);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointBallSetPivot(mrb_state *mrb, mrb_value self){
  int joint;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"ifff|i",&joint,&x,&y,&z,&isGlobal);
   xJointBallSetPivot(joint,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointBallGetPivotX(mrb_state *mrb, mrb_value self){
  int joint;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&joint,&isGlobal);
   double _res = (double)xJointBallGetPivotX(joint,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointBallGetPivotY(mrb_state *mrb, mrb_value self){
  int joint;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&joint,&isGlobal);
   double _res = (double)xJointBallGetPivotY(joint,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointBallGetPivotZ(mrb_state *mrb, mrb_value self){
  int joint;
  int isGlobal = false;
	mrb_get_args(mrb,"i|i",&joint,&isGlobal);
   double _res = (double)xJointBallGetPivotZ(joint,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6SetLimits(mrb_state *mrb, mrb_value self){
  int joint;
  int axis;
  double lower;
  double upper;
	mrb_get_args(mrb,"iiff",&joint,&axis,&lower,&upper);
   xJointD6SetLimits(joint,axis,lower,upper);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointD6SetLowerLinearLimits(mrb_state *mrb, mrb_value self){
  int joint;
  double lowerX;
  double lowerY;
  double lowerZ;
	mrb_get_args(mrb,"ifff",&joint,&lowerX,&lowerY,&lowerZ);
   xJointD6SetLowerLinearLimits(joint,lowerX,lowerY,lowerZ);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointD6SetUpperLinearLimits(mrb_state *mrb, mrb_value self){
  int joint;
  double upperX;
  double upperY;
  double upperZ;
	mrb_get_args(mrb,"ifff",&joint,&upperX,&upperY,&upperZ);
   xJointD6SetUpperLinearLimits(joint,upperX,upperY,upperZ);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointD6SetLowerAngularLimits(mrb_state *mrb, mrb_value self){
  int joint;
  double lowerX;
  double lowerY;
  double lowerZ;
	mrb_get_args(mrb,"ifff",&joint,&lowerX,&lowerY,&lowerZ);
   xJointD6SetLowerAngularLimits(joint,lowerX,lowerY,lowerZ);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointD6SetUpperAngularLimits(mrb_state *mrb, mrb_value self){
  int joint;
  double upperX;
  double upperY;
  double upperZ;
	mrb_get_args(mrb,"ifff",&joint,&upperX,&upperY,&upperZ);
   xJointD6SetUpperAngularLimits(joint,upperX,upperY,upperZ);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointD6SetLinearLimits(mrb_state *mrb, mrb_value self){
  int joint;
  double lowerX;
  double lowerY;
  double lowerZ;
  double upperX;
  double upperY;
  double upperZ;
	mrb_get_args(mrb,"iffffff",&joint,&lowerX,&lowerY,&lowerZ,&upperX,&upperY,&upperZ);
   xJointD6SetLinearLimits(joint,lowerX,lowerY,lowerZ,upperX,upperY,upperZ);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointD6SetAngularLimits(mrb_state *mrb, mrb_value self){
  int joint;
  double lowerX;
  double lowerY;
  double lowerZ;
  double upperX;
  double upperY;
  double upperZ;
	mrb_get_args(mrb,"iffffff",&joint,&lowerX,&lowerY,&lowerZ,&upperX,&upperY,&upperZ);
   xJointD6SetAngularLimits(joint,lowerX,lowerY,lowerZ,upperX,upperY,upperZ);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointD6GetLinearLowerX(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetLinearLowerX(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetLinearLowerY(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetLinearLowerY(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetLinearLowerZ(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetLinearLowerZ(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetLinearUpperX(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetLinearUpperX(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetLinearUpperY(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetLinearUpperY(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetLinearUpperZ(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetLinearUpperZ(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetAngularLowerX(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetAngularLowerX(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetAngularLowerY(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetAngularLowerY(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetAngularLowerZ(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetAngularLowerZ(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetAngularUpperX(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetAngularUpperX(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetAngularUpperY(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetAngularUpperY(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6GetAngularUpperZ(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointD6GetAngularUpperZ(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointD6SpringSetParam(mrb_state *mrb, mrb_value self){
  int joint;
  int index;
  int enabled;
  double damping = 1.0;
  double stiffness = 1.0;
	mrb_get_args(mrb,"iii|ff",&joint,&index,&enabled,&damping,&stiffness);
   xJointD6SpringSetParam(joint,index,enabled,damping,stiffness);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointHingeSetAxis(mrb_state *mrb, mrb_value self){
  int joint;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&joint,&x,&y,&z);
   xJointHingeSetAxis(joint,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointHingeSetLimits(mrb_state *mrb, mrb_value self){
  int joint;
  double lowerLimit;
  double upperLimit;
  double softness = 0.9;
  double biasFactor = 0.3;
  double relaxationFactor = 1.0;
	mrb_get_args(mrb,"iff|fff",&joint,&lowerLimit,&upperLimit,&softness,&biasFactor,&relaxationFactor);
   xJointHingeSetLimits(joint,lowerLimit,upperLimit,softness,biasFactor,relaxationFactor);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointHingeGetLowerLimit(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointHingeGetLowerLimit(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointHingeGetUpperLimit(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   double _res = (double)xJointHingeGetUpperLimit(joint);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xJointEnableMotor(mrb_state *mrb, mrb_value self){
  int joint;
  int enabled;
  double targetVelocity;
  double maxForce;
  int index = 0;
	mrb_get_args(mrb,"iiff|i",&joint,&enabled,&targetVelocity,&maxForce,&index);
   xJointEnableMotor(joint,enabled,targetVelocity,maxForce,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointHingeSetMotorTarget(mrb_state *mrb, mrb_value self){
  int joint;
  double targetAngle;
  double deltaTime;
	mrb_get_args(mrb,"iff",&joint,&targetAngle,&deltaTime);
   xJointHingeSetMotorTarget(joint,targetAngle,deltaTime);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xJointGetEntityA(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   int _res = (int)xJointGetEntityA(joint);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xJointGetEntityB(mrb_state *mrb, mrb_value self){
  int joint;
	mrb_get_args(mrb,"i",&joint);
   int _res = (int)xJointGetEntityB(joint);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityApplyCentralForce(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = true;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xEntityApplyCentralForce(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityApplyCentralImpulse(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = true;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xEntityApplyCentralImpulse(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityApplyTorque(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = true;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xEntityApplyTorque(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityApplyTorqueImpulse(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = true;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xEntityApplyTorqueImpulse(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityApplyForce(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  double pointx;
  double pointy;
  double pointz;
  int isGlobal = true;
  int globalPoint = true;
	mrb_get_args(mrb,"iffffff|ii",&entity,&x,&y,&z,&pointx,&pointy,&pointz,&isGlobal,&globalPoint);
   xEntityApplyForce(entity,x,y,z,pointx,pointy,pointz,isGlobal,globalPoint);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityApplyImpulse(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  double pointx;
  double pointy;
  double pointz;
  int isGlobal = true;
  int globalPoint = true;
	mrb_get_args(mrb,"iffffff|ii",&entity,&x,&y,&z,&pointx,&pointy,&pointz,&isGlobal,&globalPoint);
   xEntityApplyImpulse(entity,x,y,z,pointx,pointy,pointz,isGlobal,globalPoint);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityReleaseForces(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xEntityReleaseForces(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWorldSetGravity(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int world = 0;
	mrb_get_args(mrb,"fff|i",&x,&y,&z,&world);
   xWorldSetGravity(x,y,z,world);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWorldGetGravityX(mrb_state *mrb, mrb_value self){
  int world = 0;
	mrb_get_args(mrb,"|i",&world);
   double _res = (double)xWorldGetGravityX(world);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xWorldGetGravityY(mrb_state *mrb, mrb_value self){
  int world = 0;
	mrb_get_args(mrb,"|i",&world);
   double _res = (double)xWorldGetGravityY(world);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xWorldGetGravityZ(mrb_state *mrb, mrb_value self){
  int world = 0;
	mrb_get_args(mrb,"|i",&world);
   double _res = (double)xWorldGetGravityZ(world);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetGravity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xEntitySetGravity(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetGravityX(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetGravityX(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetGravityY(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetGravityY(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetGravityZ(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetGravityZ(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetLinearVelocity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = true;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xEntitySetLinearVelocity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetLinearVelocityX(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = true;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityGetLinearVelocityX(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetLinearVelocityY(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = true;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityGetLinearVelocityY(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetLinearVelocityZ(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = true;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityGetLinearVelocityZ(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetAngularVelocity(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
  int isGlobal = true;
	mrb_get_args(mrb,"ifff|i",&entity,&x,&y,&z,&isGlobal);
   xEntitySetAngularVelocity(entity,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetAngularVelocityX(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = true;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityGetAngularVelocityX(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAngularVelocityY(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = true;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityGetAngularVelocityY(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAngularVelocityZ(mrb_state *mrb, mrb_value self){
  int entity;
  int isGlobal = true;
	mrb_get_args(mrb,"i|i",&entity,&isGlobal);
   double _res = (double)xEntityGetAngularVelocityZ(entity,isGlobal);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetDamping(mrb_state *mrb, mrb_value self){
  int entity;
  double linear;
  double angular;
	mrb_get_args(mrb,"iff",&entity,&linear,&angular);
   xEntitySetDamping(entity,linear,angular);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetLinearDamping(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetLinearDamping(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAngularDamping(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAngularDamping(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetFriction(mrb_state *mrb, mrb_value self){
  int entity;
  double friction;
	mrb_get_args(mrb,"if",&entity,&friction);
   xEntitySetFriction(entity,friction);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetFriction(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetFriction(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetAnisotropicFriction(mrb_state *mrb, mrb_value self){
  int entity;
  double fx;
  double fy;
  double fz;
	mrb_get_args(mrb,"ifff",&entity,&fx,&fy,&fz);
   xEntitySetAnisotropicFriction(entity,fx,fy,fz);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetAnisotropicFrictionX(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAnisotropicFrictionX(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAnisotropicFrictionY(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAnisotropicFrictionY(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAnisotropicFrictionZ(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAnisotropicFrictionZ(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetLinearFactor(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xEntitySetLinearFactor(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetLinearFactorX(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetLinearFactorX(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetLinearFactorY(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetLinearFactorY(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetLinearFactorZ(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetLinearFactorZ(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetAngularFactor(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xEntitySetAngularFactor(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetAngularFactorX(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAngularFactorX(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAngularFactorY(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAngularFactorY(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAngularFactorZ(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAngularFactorZ(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetRestitution(mrb_state *mrb, mrb_value self){
  int entity;
  double restitution;
	mrb_get_args(mrb,"if",&entity,&restitution);
   xEntitySetRestitution(entity,restitution);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetRestitution(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetRestitution(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetMass(mrb_state *mrb, mrb_value self){
  int entity;
  double mass;
	mrb_get_args(mrb,"if",&entity,&mass);
   xEntitySetMass(entity,mass);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetMass(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetMass(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityCountContacts(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityCountContacts(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityGetContactX(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactX(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetContactY(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactY(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetContactZ(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactZ(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetContactNX(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactNX(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetContactNY(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactNY(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetContactNZ(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactNZ(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetContactDistance(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactDistance(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetContact(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   int _res = (int)xEntityGetContact(entity,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityGetContactImpulse(mrb_state *mrb, mrb_value self){
  int entity;
  int index;
	mrb_get_args(mrb,"ii",&entity,&index);
   double _res = (double)xEntityGetContactImpulse(entity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntitySetCollisionGroup(mrb_state *mrb, mrb_value self){
  int entity;
  int group;
	mrb_get_args(mrb,"ii",&entity,&group);
   xEntitySetCollisionGroup(entity,group);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetCollisionGroup(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityGetCollisionGroup(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntitySetContactGroup(mrb_state *mrb, mrb_value self){
  int entity;
  int group;
	mrb_get_args(mrb,"ii",&entity,&group);
   xEntitySetContactGroup(entity,group);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetContactGroup(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityGetContactGroup(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntitySetRaycastGroup(mrb_state *mrb, mrb_value self){
  int entity;
  int group;
	mrb_get_args(mrb,"ii",&entity,&group);
   xEntitySetRaycastGroup(entity,group);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetRaycastGroup(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityGetRaycastGroup(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPhysicsSetCollisionFilter(mrb_state *mrb, mrb_value self){
  int group0;
  int group1;
  int state;
	mrb_get_args(mrb,"iii",&group0,&group1,&state);
   xPhysicsSetCollisionFilter(group0,group1,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPhysicsGetCollisionFilter(mrb_state *mrb, mrb_value self){
  int group0;
  int group1;
	mrb_get_args(mrb,"ii",&group0,&group1);
   int _res = (int)xPhysicsGetCollisionFilter(group0,group1);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPhysicsSetContactFilter(mrb_state *mrb, mrb_value self){
  int group0;
  int group1;
  int state;
	mrb_get_args(mrb,"iii",&group0,&group1,&state);
   xPhysicsSetContactFilter(group0,group1,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPhysicsGetContactFilter(mrb_state *mrb, mrb_value self){
  int group0;
  int group1;
	mrb_get_args(mrb,"ii",&group0,&group1);
   int _res = (int)xPhysicsGetContactFilter(group0,group1);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPhysicsSetRaycastFilter(mrb_state *mrb, mrb_value self){
  int rayGroup;
  int bodyGroup;
  int state;
	mrb_get_args(mrb,"iii",&rayGroup,&bodyGroup,&state);
   xPhysicsSetRaycastFilter(rayGroup,bodyGroup,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPhysicsGetRaycastFilter(mrb_state *mrb, mrb_value self){
  int rayGroup;
  int bodyGroup;
	mrb_get_args(mrb,"ii",&rayGroup,&bodyGroup);
   int _res = (int)xPhysicsGetRaycastFilter(rayGroup,bodyGroup);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityIsSleeping(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityIsSleeping(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityDisableSleeping(mrb_state *mrb, mrb_value self){
  int entity;
  int state = 1;
	mrb_get_args(mrb,"i|i",&entity,&state);
   xEntityDisableSleeping(entity,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWakeUp(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xEntityWakeUp(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntitySleep(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   xEntitySleep(entity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntitySetSleepingThresholds(mrb_state *mrb, mrb_value self){
  int entity;
  double linearThreshold;
  double angularThreshold;
	mrb_get_args(mrb,"iff",&entity,&linearThreshold,&angularThreshold);
   xEntitySetSleepingThresholds(entity,linearThreshold,angularThreshold);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityGetLinearSleepingThreshold(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetLinearSleepingThreshold(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityGetAngularSleepingThreshold(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   double _res = (double)xEntityGetAngularSleepingThreshold(entity);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsRayCast(mrb_state *mrb, mrb_value self){
  double fromX;
  double fromY;
  double fromZ;
  double toX;
  double toY;
  double toZ;
  int rcType = 0;
  int rayGroup = 0;
	mrb_get_args(mrb,"ffffff|ii",&fromX,&fromY,&fromZ,&toX,&toY,&toZ,&rcType,&rayGroup);
   xPhysicsRayCast(fromX,fromY,fromZ,toX,toY,toZ,rcType,rayGroup);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPhysicsGetHitEntity(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   int _res = (int)xPhysicsGetHitEntity(index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPhysicsGetHitPointX(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   double _res = (double)xPhysicsGetHitPointX(index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsGetHitPointY(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   double _res = (double)xPhysicsGetHitPointY(index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsGetHitPointZ(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   double _res = (double)xPhysicsGetHitPointZ(index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsGetHitNormalX(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   double _res = (double)xPhysicsGetHitNormalX(index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsGetHitNormalY(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   double _res = (double)xPhysicsGetHitNormalY(index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsGetHitNormalZ(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   double _res = (double)xPhysicsGetHitNormalZ(index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsGetHitDistance(mrb_state *mrb, mrb_value self){
  int index = 0;
	mrb_get_args(mrb,"|i",&index);
   double _res = (double)xPhysicsGetHitDistance(index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPhysicsCountHits(mrb_state *mrb, mrb_value self){
   int _res = (int)xPhysicsCountHits();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityBodyLocalPosition(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xEntityBodyLocalPosition(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityBodyLocalRotation(mrb_state *mrb, mrb_value self){
  int entity;
  double pitch;
  double yaw;
  double roll;
	mrb_get_args(mrb,"ifff",&entity,&pitch,&yaw,&roll);
   xEntityBodyLocalRotation(entity,pitch,yaw,roll);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityBodyLocalScale(mrb_state *mrb, mrb_value self){
  int entity;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&entity,&x,&y,&z);
   xEntityBodyLocalScale(entity,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xWorldSetFrequency(mrb_state *mrb, mrb_value self){
  double frequency;
  int world = 0;
	mrb_get_args(mrb,"f|i",&frequency,&world);
   xWorldSetFrequency(frequency,world);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityMakeKinematic(mrb_state *mrb, mrb_value self){
  int entity;
  int state;
	mrb_get_args(mrb,"ii",&entity,&state);
   xEntityMakeKinematic(entity,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityIsKinematic(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityIsKinematic(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPhysicsDebugRender(mrb_state *mrb, mrb_value self){
  int state;
	mrb_get_args(mrb,"i",&state);
   xPhysicsDebugRender(state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityDisableSimulation(mrb_state *mrb, mrb_value self){
  int entity;
  int state;
	mrb_get_args(mrb,"ii",&entity,&state);
   xEntityDisableSimulation(entity,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityHasBody(mrb_state *mrb, mrb_value self){
  int entity;
	mrb_get_args(mrb,"i",&entity);
   int _res = (int)xEntityHasBody(entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityCreateVehicle(mrb_state *mrb, mrb_value self){
  int chassisEntity;
	mrb_get_args(mrb,"i",&chassisEntity);
   xEntityCreateVehicle(chassisEntity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityFreeVehicle(mrb_state *mrb, mrb_value self){
  int chassisEntity;
	mrb_get_args(mrb,"i",&chassisEntity);
   xEntityFreeVehicle(chassisEntity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityCountWheels(mrb_state *mrb, mrb_value self){
  int chassisEntity;
	mrb_get_args(mrb,"i",&chassisEntity);
   int _res = (int)xEntityCountWheels(chassisEntity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityAddWheel(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int wheelEntity;
	mrb_get_args(mrb,"ii",&chassisEntity,&wheelEntity);
   int _res = (int)xEntityAddWheel(chassisEntity,wheelEntity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityWheelSetRadius(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double radius;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&radius);
   xEntityWheelSetRadius(chassisEntity,index,radius);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetAxle(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"iifff",&chassisEntity,&index,&x,&y,&z);
   xEntityWheelSetAxle(chassisEntity,index,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetRay(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"iifff",&chassisEntity,&index,&x,&y,&z);
   xEntityWheelSetRay(chassisEntity,index,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetSuspensionLength(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double length;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&length);
   xEntityWheelSetSuspensionLength(chassisEntity,index,length);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetBrake(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double brake;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&brake);
   xEntityWheelSetBrake(chassisEntity,index,brake);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetMaxSuspensionForce(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double force;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&force);
   xEntityWheelSetMaxSuspensionForce(chassisEntity,index,force);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetMaxSuspensionTravel(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double travel;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&travel);
   xEntityWheelSetMaxSuspensionTravel(chassisEntity,index,travel);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetSuspensionStiffness(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double stiffness;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&stiffness);
   xEntityWheelSetSuspensionStiffness(chassisEntity,index,stiffness);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetSuspensionDamping(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double damping;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&damping);
   xEntityWheelSetSuspensionDamping(chassisEntity,index,damping);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetSuspensionCompression(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double compression;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&compression);
   xEntityWheelSetSuspensionCompression(chassisEntity,index,compression);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetFriction(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double friction;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&friction);
   xEntityWheelSetFriction(chassisEntity,index,friction);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetEngineForce(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double force;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&force);
   xEntityWheelSetEngineForce(chassisEntity,index,force);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetRollInfluence(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double roll;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&roll);
   xEntityWheelSetRollInfluence(chassisEntity,index,roll);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetRotation(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double rotation;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&rotation);
   xEntityWheelSetRotation(chassisEntity,index,rotation);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetSteering(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double steering;
	mrb_get_args(mrb,"iif",&chassisEntity,&index,&steering);
   xEntityWheelSetSteering(chassisEntity,index,steering);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelSetConnectionPoint(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
  double x;
  double y;
  double z;
  int isGlobal = false;
	mrb_get_args(mrb,"iifff|i",&chassisEntity,&index,&x,&y,&z,&isGlobal);
   xEntityWheelSetConnectionPoint(chassisEntity,index,x,y,z,isGlobal);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityWheelGetSuspensionLength(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
	mrb_get_args(mrb,"ii",&chassisEntity,&index);
   double _res = (double)xEntityWheelGetSuspensionLength(chassisEntity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityWheelGetPitch(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
	mrb_get_args(mrb,"ii",&chassisEntity,&index);
   double _res = (double)xEntityWheelGetPitch(chassisEntity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityWheelGetYaw(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
	mrb_get_args(mrb,"ii",&chassisEntity,&index);
   double _res = (double)xEntityWheelGetYaw(chassisEntity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityWheelGetRoll(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
	mrb_get_args(mrb,"ii",&chassisEntity,&index);
   double _res = (double)xEntityWheelGetRoll(chassisEntity,index);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xEntityWheelGetContactEntity(mrb_state *mrb, mrb_value self){
  int chassisEntity;
  int index;
	mrb_get_args(mrb,"ii",&chassisEntity,&index);
   int _res = (int)xEntityWheelGetContactEntity(chassisEntity,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadPostEffect(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xLoadPostEffect(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreePostEffect(mrb_state *mrb, mrb_value self){
  int postEffect;
	mrb_get_args(mrb,"i",&postEffect);
   xFreePostEffect(postEffect);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetPostEffect(mrb_state *mrb, mrb_value self){
  int index;
  int postEffect;
  char* technique = "MainTechnique";
	mrb_get_args(mrb,"ii|z",&index,&postEffect,&technique);
   xSetPostEffect(index,postEffect,technique);
  free(technique);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xRenderPostEffects(mrb_state *mrb, mrb_value self){
   xRenderPostEffects();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetPostEffectInt(mrb_state *mrb, mrb_value self){
  int postEffect;
  char* name;
  int value;
	mrb_get_args(mrb,"izi",&postEffect,&name,&value);
   xSetPostEffectInt(postEffect,name,value);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetPostEffectFloat(mrb_state *mrb, mrb_value self){
  int postEffect;
  char* name;
  double value;
	mrb_get_args(mrb,"izf",&postEffect,&name,&value);
   xSetPostEffectFloat(postEffect,name,value);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetPostEffectBool(mrb_state *mrb, mrb_value self){
  int postEffect;
  char* name;
  int value;
	mrb_get_args(mrb,"izi",&postEffect,&name,&value);
   xSetPostEffectBool(postEffect,name,value);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetPostEffectVector(mrb_state *mrb, mrb_value self){
  int postEffect;
  char* name;
  double x;
  double y;
  double z;
  double w = 1.0;
	mrb_get_args(mrb,"izfff|f",&postEffect,&name,&x,&y,&z,&w);
   xSetPostEffectVector(postEffect,name,x,y,z,w);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetPostEffectTexture(mrb_state *mrb, mrb_value self){
  int postEffect;
  char* name;
  int texture;
  int frame = 0;
	mrb_get_args(mrb,"izi|i",&postEffect,&name,&texture,&frame);
   xSetPostEffectTexture(postEffect,name,texture,frame);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xDeletePostEffectConstant(mrb_state *mrb, mrb_value self){
  int postEffect;
  char* name;
	mrb_get_args(mrb,"iz",&postEffect,&name);
   xDeletePostEffectConstant(postEffect,name);
  free(name);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearPostEffectConstants(mrb_state *mrb, mrb_value self){
  int postEffect;
	mrb_get_args(mrb,"i",&postEffect);
   xClearPostEffectConstants(postEffect);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreatePSystem(mrb_state *mrb, mrb_value self){
  int pointSprites = false;
	mrb_get_args(mrb,"|i",&pointSprites);
   int _res = (int)xCreatePSystem(pointSprites);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemType(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemType(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetBlend(mrb_state *mrb, mrb_value self){
  int psystem;
  int mode;
	mrb_get_args(mrb,"ii",&psystem,&mode);
   xPSystemSetBlend(psystem,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetBlend(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetBlend(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetMaxParticles(mrb_state *mrb, mrb_value self){
  int psystem;
  int maxNumber;
	mrb_get_args(mrb,"ii",&psystem,&maxNumber);
   xPSystemSetMaxParticles(psystem,maxNumber);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetMaxParticles(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetMaxParticles(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetEmitterLifetime(mrb_state *mrb, mrb_value self){
  int psystem;
  int lifetime;
	mrb_get_args(mrb,"ii",&psystem,&lifetime);
   xPSystemSetEmitterLifetime(psystem,lifetime);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetEmitterLifetime(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetEmitterLifetime(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetParticleLifetime(mrb_state *mrb, mrb_value self){
  int psystem;
  int lifetime;
	mrb_get_args(mrb,"ii",&psystem,&lifetime);
   xPSystemSetParticleLifetime(psystem,lifetime);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetParticleLifetime(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetParticleLifetime(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetCreationInterval(mrb_state *mrb, mrb_value self){
  int psystem;
  int interval;
	mrb_get_args(mrb,"ii",&psystem,&interval);
   xPSystemSetCreationInterval(psystem,interval);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetCreationInterval(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetCreationInterval(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetCreationFrequency(mrb_state *mrb, mrb_value self){
  int psystem;
  int frequency;
	mrb_get_args(mrb,"ii",&psystem,&frequency);
   xPSystemSetCreationFrequency(psystem,frequency);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetCreationFrequency(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetCreationFrequency(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetTexture(mrb_state *mrb, mrb_value self){
  int psystem;
  int texture;
  int frames;
  double speed;
	mrb_get_args(mrb,"iiif",&psystem,&texture,&frames,&speed);
   xPSystemSetTexture(psystem,texture,frames,speed);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetTexture(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetTexture(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemGetTextureFrames(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetTextureFrames(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemGetTextureAnimationSpeed(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetTextureAnimationSpeed(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetOffset(mrb_state *mrb, mrb_value self){
  int psystem;
  double minx;
  double miny;
  double minz;
  double maxx;
  double maxy;
  double maxz;
	mrb_get_args(mrb,"iffffff",&psystem,&minx,&miny,&minz,&maxx,&maxy,&maxz);
   xPSystemSetOffset(psystem,minx,miny,minz,maxx,maxy,maxz);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetOffsetMinX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetOffsetMinX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetOffsetMinY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetOffsetMinY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetOffsetMinZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetOffsetMinZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetOffsetMaxX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetOffsetMaxX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetOffsetMaxY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetOffsetMaxY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetOffsetMaxZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetOffsetMaxZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetVelocity(mrb_state *mrb, mrb_value self){
  int psystem;
  double minx;
  double miny;
  double minz;
  double maxx;
  double maxy;
  double maxz;
	mrb_get_args(mrb,"iffffff",&psystem,&minx,&miny,&minz,&maxx,&maxy,&maxz);
   xPSystemSetVelocity(psystem,minx,miny,minz,maxx,maxy,maxz);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetVelocityMinX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetVelocityMinX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetVelocityMinY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetVelocityMinY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetVelocityMinZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetVelocityMinZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetVelocityMaxX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetVelocityMaxX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetVelocityMaxY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetVelocityMaxY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetVelocityMaxZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetVelocityMaxZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemEnableFixedQuads(mrb_state *mrb, mrb_value self){
  int psystem;
  int state;
	mrb_get_args(mrb,"ii",&psystem,&state);
   xPSystemEnableFixedQuads(psystem,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemFixedQuadsUsed(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemFixedQuadsUsed(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetTorque(mrb_state *mrb, mrb_value self){
  int psystem;
  double minx;
  double miny;
  double minz;
  double maxx;
  double maxy;
  double maxz;
	mrb_get_args(mrb,"iffffff",&psystem,&minx,&miny,&minz,&maxx,&maxy,&maxz);
   xPSystemSetTorque(psystem,minx,miny,minz,maxx,maxy,maxz);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetTorqueMinX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetTorqueMinX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetTorqueMinY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetTorqueMinY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetTorqueMinZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetTorqueMinZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetTorqueMaxX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetTorqueMaxX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetTorqueMaxY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetTorqueMaxY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetTorqueMaxZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetTorqueMaxZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetGravity(mrb_state *mrb, mrb_value self){
  int psystem;
  double gravity;
	mrb_get_args(mrb,"if",&psystem,&gravity);
   xPSystemSetGravity(psystem,gravity);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetGravity(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetGravity(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetAlpha(mrb_state *mrb, mrb_value self){
  int psystem;
  double alpha;
	mrb_get_args(mrb,"if",&psystem,&alpha);
   xPSystemSetAlpha(psystem,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetAlpha(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetAlpha(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetFadeSpeed(mrb_state *mrb, mrb_value self){
  int psystem;
  double speed;
	mrb_get_args(mrb,"if",&psystem,&speed);
   xPSystemSetFadeSpeed(psystem,speed);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetFadeSpeed(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetFadeSpeed(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetParticleSize(mrb_state *mrb, mrb_value self){
  int psystem;
  double minx;
  double miny;
  double maxx;
  double maxy;
	mrb_get_args(mrb,"iffff",&psystem,&minx,&miny,&maxx,&maxy);
   xPSystemSetParticleSize(psystem,minx,miny,maxx,maxy);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetSizeMinX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetSizeMinX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetSizeMinY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetSizeMinY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetSizeMaxX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetSizeMaxX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetSizeMaxY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetSizeMaxY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetScaleSpeed(mrb_state *mrb, mrb_value self){
  int psystem;
  double minx;
  double miny;
  double maxx;
  double maxy;
	mrb_get_args(mrb,"iffff",&psystem,&minx,&miny,&maxx,&maxy);
   xPSystemSetScaleSpeed(psystem,minx,miny,maxx,maxy);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetScaleSpeedMinX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetScaleSpeedMinX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetScaleSpeedMinY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetScaleSpeedMinY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetScaleSpeedMaxX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetScaleSpeedMaxX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetScaleSpeedMaxY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetScaleSpeedMaxY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetAngles(mrb_state *mrb, mrb_value self){
  int psystem;
  double minx;
  double miny;
  double minz;
  double maxx;
  double maxy;
  double maxz;
	mrb_get_args(mrb,"iffffff",&psystem,&minx,&miny,&minz,&maxx,&maxy,&maxz);
   xPSystemSetAngles(psystem,minx,miny,minz,maxx,maxy,maxz);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetAnglesMinX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetAnglesMinX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetAnglesMinY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetAnglesMinY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetAnglesMinZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetAnglesMinZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetAnglesMaxX(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetAnglesMaxX(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetAnglesMaxY(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetAnglesMaxY(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetAnglesMaxZ(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetAnglesMaxZ(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemSetColorMode(mrb_state *mrb, mrb_value self){
  int psystem;
  int mode;
	mrb_get_args(mrb,"ii",&psystem,&mode);
   xPSystemSetColorMode(psystem,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetColorMode(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetColorMode(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPSystemSetColors(mrb_state *mrb, mrb_value self){
  int psystem;
  double sred;
  double sgreen;
  double sblue;
  double ered;
  double egreen;
  double eblue;
	mrb_get_args(mrb,"iffffff",&psystem,&sred,&sgreen,&sblue,&ered,&egreen,&eblue);
   xPSystemSetColors(psystem,sred,sgreen,sblue,ered,egreen,eblue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetBeginColorRed(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetBeginColorRed(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetBeginColorGreen(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetBeginColorGreen(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetBeginColorBlue(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetBeginColorBlue(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetEndColorRed(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetEndColorRed(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetEndColorGreen(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetEndColorGreen(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPSystemGetEndColorBlue(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   double _res = (double)xPSystemGetEndColorBlue(psystem);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xFreePSystem(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   xFreePSystem(psystem);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemSetParticleParenting(mrb_state *mrb, mrb_value self){
  int psystem;
  int mode;
	mrb_get_args(mrb,"ii",&psystem,&mode);
   xPSystemSetParticleParenting(psystem,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPSystemGetParticleParenting(mrb_state *mrb, mrb_value self){
  int psystem;
	mrb_get_args(mrb,"i",&psystem);
   int _res = (int)xPSystemGetParticleParenting(psystem);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLinePick(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  double dx;
  double dy;
  double dz;
  double distance = 0.0;
	mrb_get_args(mrb,"ffffff|f",&x,&y,&z,&dx,&dy,&dz,&distance);
   int _res = (int)xLinePick(x,y,z,dx,dy,dz,distance);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityPick(mrb_state *mrb, mrb_value self){
  int entity;
  double range = 0.0;
	mrb_get_args(mrb,"i|f",&entity,&range);
   int _res = (int)xEntityPick(entity,range);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCameraPick(mrb_state *mrb, mrb_value self){
  int camera;
  int x;
  int y;
	mrb_get_args(mrb,"iii",&camera,&x,&y);
   int _res = (int)xCameraPick(camera,x,y);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPickedNX(mrb_state *mrb, mrb_value self){
   double _res = (double)xPickedNX();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPickedNY(mrb_state *mrb, mrb_value self){
   double _res = (double)xPickedNY();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPickedNZ(mrb_state *mrb, mrb_value self){
   double _res = (double)xPickedNZ();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPickedX(mrb_state *mrb, mrb_value self){
   double _res = (double)xPickedX();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPickedY(mrb_state *mrb, mrb_value self){
   double _res = (double)xPickedY();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPickedZ(mrb_state *mrb, mrb_value self){
   double _res = (double)xPickedZ();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xPickedEntity(mrb_state *mrb, mrb_value self){
   int _res = (int)xPickedEntity();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPickedSurface(mrb_state *mrb, mrb_value self){
   int _res = (int)xPickedSurface();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPickedTriangle(mrb_state *mrb, mrb_value self){
   int _res = (int)xPickedTriangle();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPickedTime(mrb_state *mrb, mrb_value self){
   int _res = (int)xPickedTime();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetShadowsBlur(mrb_state *mrb, mrb_value self){
  int blurLevel;
	mrb_get_args(mrb,"i",&blurLevel);
   xSetShadowsBlur(blurLevel);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetShadowShader(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   xSetShadowShader(path);
  free(path);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xInitShadows(mrb_state *mrb, mrb_value self){
  int dirSize;
  int spotSize;
  int pointSize;
	mrb_get_args(mrb,"iii",&dirSize,&spotSize,&pointSize);
   int _res = (int)xInitShadows(dirSize,spotSize,pointSize);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetShadowParams(mrb_state *mrb, mrb_value self){
  int splitPlanes = 4;
  double splitLambda = 0.95;
  int useOrtho = true;
  double lightDist = 300.0;
	mrb_get_args(mrb,"|ifif",&splitPlanes,&splitLambda,&useOrtho,&lightDist);
   xSetShadowParams(splitPlanes,splitLambda,useOrtho,lightDist);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRenderShadows(mrb_state *mrb, mrb_value self){
  int mainCamera;
  int texture;
	mrb_get_args(mrb,"ii",&mainCamera,&texture);
   xRenderShadows(mainCamera,texture);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xShadowPriority(mrb_state *mrb, mrb_value self){
  int priority;
	mrb_get_args(mrb,"i",&priority);
   xShadowPriority(priority);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraDisableShadows(mrb_state *mrb, mrb_value self){
  int camera;
	mrb_get_args(mrb,"i",&camera);
   xCameraDisableShadows(camera);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCameraEnableShadows(mrb_state *mrb, mrb_value self){
  int camera;
	mrb_get_args(mrb,"i",&camera);
   xCameraEnableShadows(camera);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityCastShadows(mrb_state *mrb, mrb_value self){
  int entity;
  int light;
  int state;
	mrb_get_args(mrb,"iii",&entity,&light,&state);
   xEntityCastShadows(entity,light,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityReceiveShadows(mrb_state *mrb, mrb_value self){
  int entity;
  int light;
  int state;
	mrb_get_args(mrb,"iii",&entity,&light,&state);
   xEntityReceiveShadows(entity,light,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xEntityIsCaster(mrb_state *mrb, mrb_value self){
  int entity;
  int light;
	mrb_get_args(mrb,"ii",&entity,&light);
   int _res = (int)xEntityIsCaster(entity,light);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEntityIsReceiver(mrb_state *mrb, mrb_value self){
  int entity;
  int light;
	mrb_get_args(mrb,"ii",&entity,&light);
   int _res = (int)xEntityIsReceiver(entity,light);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadSound(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xLoadSound(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoad3DSound(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xLoad3DSound(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreeSound(mrb_state *mrb, mrb_value self){
  int sound;
	mrb_get_args(mrb,"i",&sound);
   xFreeSound(sound);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoopSound(mrb_state *mrb, mrb_value self){
  int sound;
	mrb_get_args(mrb,"i",&sound);
   xLoopSound(sound);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSoundPitch(mrb_state *mrb, mrb_value self){
  int sound;
  int pitch;
	mrb_get_args(mrb,"ii",&sound,&pitch);
   xSoundPitch(sound,pitch);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSoundVolume(mrb_state *mrb, mrb_value self){
  int sound;
  double volume;
	mrb_get_args(mrb,"if",&sound,&volume);
   xSoundVolume(sound,volume);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSoundPan(mrb_state *mrb, mrb_value self){
  int sound;
  double pan;
	mrb_get_args(mrb,"if",&sound,&pan);
   xSoundPan(sound,pan);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPlaySound(mrb_state *mrb, mrb_value self){
  int sound;
	mrb_get_args(mrb,"i",&sound);
   int _res = (int)xPlaySound(sound);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xStopChannel(mrb_state *mrb, mrb_value self){
  int channel;
	mrb_get_args(mrb,"i",&channel);
   xStopChannel(channel);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPauseChannel(mrb_state *mrb, mrb_value self){
  int channel;
	mrb_get_args(mrb,"i",&channel);
   xPauseChannel(channel);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xResumeChannel(mrb_state *mrb, mrb_value self){
  int channel;
	mrb_get_args(mrb,"i",&channel);
   xResumeChannel(channel);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xPlayMusic(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xPlayMusic(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xChannelPitch(mrb_state *mrb, mrb_value self){
  int channel;
  int pitch;
	mrb_get_args(mrb,"ii",&channel,&pitch);
   xChannelPitch(channel,pitch);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xChannelVolume(mrb_state *mrb, mrb_value self){
  int channel;
  double volume;
	mrb_get_args(mrb,"if",&channel,&volume);
   xChannelVolume(channel,volume);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xChannelPan(mrb_state *mrb, mrb_value self){
  int channel;
  double pan;
	mrb_get_args(mrb,"if",&channel,&pan);
   xChannelPan(channel,pan);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xChannelPlaying(mrb_state *mrb, mrb_value self){
  int channel;
	mrb_get_args(mrb,"i",&channel);
   int _res = (int)xChannelPlaying(channel);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xEmitSound(mrb_state *mrb, mrb_value self){
  int sound;
  int entity;
	mrb_get_args(mrb,"ii",&sound,&entity);
   int _res = (int)xEmitSound(sound,entity);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateListener(mrb_state *mrb, mrb_value self){
  int parent = 0;
  double roFactor = 1.0;
  double doplerFactor = 1.0;
  double distFactor = 1.0;
	mrb_get_args(mrb,"|ifff",&parent,&roFactor,&doplerFactor,&distFactor);
   int _res = (int)xCreateListener(parent,roFactor,doplerFactor,distFactor);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetListener(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetListener();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xInitalizeSound(mrb_state *mrb, mrb_value self){
   int _res = (int)xInitalizeSound();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateSprite(mrb_state *mrb, mrb_value self){
  int parent = 0;
	mrb_get_args(mrb,"|i",&parent);
   int _res = (int)xCreateSprite(parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSpriteViewMode(mrb_state *mrb, mrb_value self){
  int sprite;
  int mode;
	mrb_get_args(mrb,"ii",&sprite,&mode);
   xSpriteViewMode(sprite,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xHandleSprite(mrb_state *mrb, mrb_value self){
  int sprite;
  double x;
  double y;
	mrb_get_args(mrb,"iff",&sprite,&x,&y);
   xHandleSprite(sprite,x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoadSprite(mrb_state *mrb, mrb_value self){
  char* path;
  int flags = 9;
  int parent = 0;
	mrb_get_args(mrb,"z|ii",&path,&flags,&parent);
   int _res = (int)xLoadSprite(path,flags,parent);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xRotateSprite(mrb_state *mrb, mrb_value self){
  int sprite;
  double angle;
	mrb_get_args(mrb,"if",&sprite,&angle);
   xRotateSprite(sprite,angle);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xScaleSprite(mrb_state *mrb, mrb_value self){
  int sprite;
  double xScale;
  double yScale;
	mrb_get_args(mrb,"iff",&sprite,&xScale,&yScale);
   xScaleSprite(sprite,xScale,yScale);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCreateSurface(mrb_state *mrb, mrb_value self){
  int entity;
  int brush = 0;
  int dynamic = false;
	mrb_get_args(mrb,"i|ii",&entity,&brush,&dynamic);
   int _res = (int)xCreateSurface(entity,brush,dynamic);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetSurfaceBrush(mrb_state *mrb, mrb_value self){
  int surface;
	mrb_get_args(mrb,"i",&surface);
   int _res = (int)xGetSurfaceBrush(surface);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAddVertex(mrb_state *mrb, mrb_value self){
  int surface;
  double x;
  double y;
  double z;
  double u = 0.0;
  double v = 0.0;
  double w = 0.0;
	mrb_get_args(mrb,"ifff|fff",&surface,&x,&y,&z,&u,&v,&w);
   int _res = (int)xAddVertex(surface,x,y,z,u,v,w);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xAddTriangle(mrb_state *mrb, mrb_value self){
  int surface;
  int v0;
  int v1;
  int v2;
	mrb_get_args(mrb,"iiii",&surface,&v0,&v1,&v2);
   int _res = (int)xAddTriangle(surface,v0,v1,v2);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetSurfaceFrustumSphere(mrb_state *mrb, mrb_value self){
  int surface;
  double x;
  double y;
  double z;
  double radii;
	mrb_get_args(mrb,"iffff",&surface,&x,&y,&z,&radii);
   xSetSurfaceFrustumSphere(surface,x,y,z,radii);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xVertexCoords(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"iifff",&surface,&vertex,&x,&y,&z);
   xVertexCoords(surface,vertex,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xVertexNormal(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"iifff",&surface,&vertex,&x,&y,&z);
   xVertexNormal(surface,vertex,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xVertexTangent(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"iifff",&surface,&vertex,&x,&y,&z);
   xVertexTangent(surface,vertex,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xVertexBinormal(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"iifff",&surface,&vertex,&x,&y,&z);
   xVertexBinormal(surface,vertex,x,y,z);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xVertexColor(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  int red;
  int green;
  int blue;
  double alpha = 1.0;
	mrb_get_args(mrb,"iiiii|f",&surface,&vertex,&red,&green,&blue,&alpha);
   xVertexColor(surface,vertex,red,green,blue,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xVertexTexCoords(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  double u;
  double v;
  double w = 1.0;
  int textureSet = 0;
	mrb_get_args(mrb,"iiff|fi",&surface,&vertex,&u,&v,&w,&textureSet);
   xVertexTexCoords(surface,vertex,u,v,w,textureSet);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCountVertices(mrb_state *mrb, mrb_value self){
  int surface;
	mrb_get_args(mrb,"i",&surface);
   int _res = (int)xCountVertices(surface);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xVertexX(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexX(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexY(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexY(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexZ(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexZ(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexNX(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexNX(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexNY(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexNY(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexNZ(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexNZ(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexTX(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexTX(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexTY(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexTY(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexTZ(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexTZ(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexBX(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexBX(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexBY(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexBY(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexBZ(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexBZ(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexU(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  int textureSet = 0;
	mrb_get_args(mrb,"ii|i",&surface,&vertex,&textureSet);
   double _res = (double)xVertexU(surface,vertex,textureSet);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexV(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  int textureSet = 0;
	mrb_get_args(mrb,"ii|i",&surface,&vertex,&textureSet);
   double _res = (double)xVertexV(surface,vertex,textureSet);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexW(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
  int textureSet = 0;
	mrb_get_args(mrb,"ii|i",&surface,&vertex,&textureSet);
   double _res = (double)xVertexW(surface,vertex,textureSet);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexRed(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexRed(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexGreen(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexGreen(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexBlue(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexBlue(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVertexAlpha(mrb_state *mrb, mrb_value self){
  int surface;
  int vertex;
	mrb_get_args(mrb,"ii",&surface,&vertex);
   double _res = (double)xVertexAlpha(surface,vertex);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTriangleVertex(mrb_state *mrb, mrb_value self){
  int surface;
  int triangle;
  int corner;
	mrb_get_args(mrb,"iii",&surface,&triangle,&corner);
   int _res = (int)xTriangleVertex(surface,triangle,corner);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCountTriangles(mrb_state *mrb, mrb_value self){
  int surface;
	mrb_get_args(mrb,"i",&surface);
   int _res = (int)xCountTriangles(surface);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xPaintSurface(mrb_state *mrb, mrb_value self){
  int surface;
  int brush;
	mrb_get_args(mrb,"ii",&surface,&brush);
   xPaintSurface(surface,brush);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearSurface(mrb_state *mrb, mrb_value self){
  int surface;
  int vertices = true;
  int triangles = true;
	mrb_get_args(mrb,"i|ii",&surface,&vertices,&triangles);
   xClearSurface(surface,vertices,triangles);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetSurfaceTexture(mrb_state *mrb, mrb_value self){
  int surface;
  int index = 0;
	mrb_get_args(mrb,"i|i",&surface,&index);
   int _res = (int)xGetSurfaceTexture(surface,index);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreeSurface(mrb_state *mrb, mrb_value self){
  int surface;
	mrb_get_args(mrb,"i",&surface);
   xFreeSurface(surface);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfacePrimitiveType(mrb_state *mrb, mrb_value self){
  int surface;
  int ptype;
	mrb_get_args(mrb,"ii",&surface,&ptype);
   xSurfacePrimitiveType(surface,ptype);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceTexture(mrb_state *mrb, mrb_value self){
  int surface;
  int texture;
  int frame;
  int index;
	mrb_get_args(mrb,"iiii",&surface,&texture,&frame,&index);
   xSurfaceTexture(surface,texture,frame,index);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceColor(mrb_state *mrb, mrb_value self){
  int surface;
  int red;
  int green;
  int blue;
	mrb_get_args(mrb,"iiii",&surface,&red,&green,&blue);
   xSurfaceColor(surface,red,green,blue);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceAlpha(mrb_state *mrb, mrb_value self){
  int surface;
  double alpha;
	mrb_get_args(mrb,"if",&surface,&alpha);
   xSurfaceAlpha(surface,alpha);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceShininess(mrb_state *mrb, mrb_value self){
  int surface;
  double shininess;
	mrb_get_args(mrb,"if",&surface,&shininess);
   xSurfaceShininess(surface,shininess);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceBlend(mrb_state *mrb, mrb_value self){
  int surface;
  int blendMode;
	mrb_get_args(mrb,"ii",&surface,&blendMode);
   xSurfaceBlend(surface,blendMode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceFX(mrb_state *mrb, mrb_value self){
  int surface;
  int fxFlags;
	mrb_get_args(mrb,"ii",&surface,&fxFlags);
   xSurfaceFX(surface,fxFlags);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceAlphaRef(mrb_state *mrb, mrb_value self){
  int surface;
  int alphaRef;
	mrb_get_args(mrb,"ii",&surface,&alphaRef);
   xSurfaceAlphaRef(surface,alphaRef);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSurfaceAlphaFunc(mrb_state *mrb, mrb_value self){
  int surface;
  int alphaFunc;
	mrb_get_args(mrb,"ii",&surface,&alphaFunc);
   xSurfaceAlphaFunc(surface,alphaFunc);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xCPUName(mrb_state *mrb, mrb_value self){
   char* _res = (char*)xCPUName();
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xCPUVendor(mrb_state *mrb, mrb_value self){
   char* _res = (char*)xCPUVendor();
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xCPUFamily(mrb_state *mrb, mrb_value self){
   int _res = (int)xCPUFamily();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCPUModel(mrb_state *mrb, mrb_value self){
   int _res = (int)xCPUModel();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCPUStepping(mrb_state *mrb, mrb_value self){
   int _res = (int)xCPUStepping();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCPUSpeed(mrb_state *mrb, mrb_value self){
   int _res = (int)xCPUSpeed();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xVideoInfo(mrb_state *mrb, mrb_value self){
   char* _res = (char*)xVideoInfo();
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xVideoAspectRatio(mrb_state *mrb, mrb_value self){
   double _res = (double)xVideoAspectRatio();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVideoAspectRatioStr(mrb_state *mrb, mrb_value self){
   char* _res = (char*)xVideoAspectRatioStr();
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xGetTotalPhysMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetTotalPhysMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetAvailPhysMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetAvailPhysMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTotalPageMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetTotalPageMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetAvailPageMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetAvailPageMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTotalVidMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetTotalVidMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetAvailVidMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetAvailVidMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTotalVidLocalMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetTotalVidLocalMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetAvailVidLocalMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetAvailVidLocalMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTotalVidNonlocalMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetTotalVidNonlocalMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetAvailVidNonlocalMem(mrb_state *mrb, mrb_value self){
   double _res = (double)xGetAvailVidNonlocalMem();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetXors3dVersion(mrb_state *mrb, mrb_value self){
   char* _res = (char*)xGetXors3dVersion();
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xGetXors3dMajorVersion(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetXors3dMajorVersion();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetXors3dMinorVersion(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetXors3dMinorVersion();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetXors3dRevision(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetXors3dRevision();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xLoadTerrain(mrb_state *mrb, mrb_value self){
  char* path;
  int parent = 0;
	mrb_get_args(mrb,"z|i",&path,&parent);
   int _res = (int)xLoadTerrain(path,parent);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateTerrain(mrb_state *mrb, mrb_value self){
  int size;
  int parent = 0;
	mrb_get_args(mrb,"i|i",&size,&parent);
   int _res = (int)xCreateTerrain(size,parent);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xTerrainShading(mrb_state *mrb, mrb_value self){
  int terrain;
  int state = false;
	mrb_get_args(mrb,"i|i",&terrain,&state);
   xTerrainShading(terrain,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTerrainHeight(mrb_state *mrb, mrb_value self){
  int terrain;
  int x;
  int y;
	mrb_get_args(mrb,"iii",&terrain,&x,&y);
   double _res = (double)xTerrainHeight(terrain,x,y);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTerrainSize(mrb_state *mrb, mrb_value self){
  int terrain;
	mrb_get_args(mrb,"i",&terrain);
   int _res = (int)xTerrainSize(terrain);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xTerrainX(mrb_state *mrb, mrb_value self){
  int terrain;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&terrain,&x,&y,&z);
   double _res = (double)xTerrainX(terrain,x,y,z);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTerrainY(mrb_state *mrb, mrb_value self){
  int terrain;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&terrain,&x,&y,&z);
   double _res = (double)xTerrainY(terrain,x,y,z);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTerrainZ(mrb_state *mrb, mrb_value self){
  int terrain;
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"ifff",&terrain,&x,&y,&z);
   double _res = (double)xTerrainZ(terrain,x,y,z);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xModifyTerrain(mrb_state *mrb, mrb_value self){
  int terrain;
  int x;
  int y;
  double height;
  int realtime = false;
	mrb_get_args(mrb,"iiif|i",&terrain,&x,&y,&height,&realtime);
   xModifyTerrain(terrain,x,y,height,realtime);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTerrainDetail(mrb_state *mrb, mrb_value self){
  int terrain;
  int detail;
	mrb_get_args(mrb,"ii",&terrain,&detail);
   xTerrainDetail(terrain,detail);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTerrainSplatting(mrb_state *mrb, mrb_value self){
  int terrain;
  int state;
	mrb_get_args(mrb,"ii",&terrain,&state);
   xTerrainSplatting(terrain,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoadTerrainTexture(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xLoadTerrainTexture(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreeTerrainTexture(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   xFreeTerrainTexture(texture);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTerrainTextureLightmap(mrb_state *mrb, mrb_value self){
  int texture;
  int state;
	mrb_get_args(mrb,"ii",&texture,&state);
   xTerrainTextureLightmap(texture,state);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTerrainTexture(mrb_state *mrb, mrb_value self){
  int terrain;
  int texture;
	mrb_get_args(mrb,"ii",&terrain,&texture);
   xTerrainTexture(terrain,texture);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTerrainViewZone(mrb_state *mrb, mrb_value self){
  int terrain;
  int viewZone;
  int texturingZone = -1;
	mrb_get_args(mrb,"ii|i",&terrain,&viewZone,&texturingZone);
   xTerrainViewZone(terrain,viewZone,texturingZone);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTerrainLODs(mrb_state *mrb, mrb_value self){
  int lodsCount;
	mrb_get_args(mrb,"i",&lodsCount);
   xTerrainLODs(lodsCount);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTextureWidth(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xTextureWidth(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xTextureHeight(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xTextureHeight(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateTexture(mrb_state *mrb, mrb_value self){
  int width;
  int height;
  int flags = 9;
  int frames = 1;
	mrb_get_args(mrb,"ii|ii",&width,&height,&flags,&frames);
   int _res = (int)xCreateTexture(width,height,flags,frames);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xFreeTexture(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   xFreeTexture(texture);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetTextureFilter(mrb_state *mrb, mrb_value self){
  int texture;
  int mode;
	mrb_get_args(mrb,"ii",&texture,&mode);
   xSetTextureFilter(texture,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTextureBlend(mrb_state *mrb, mrb_value self){
  int texture;
  int blend;
	mrb_get_args(mrb,"ii",&texture,&blend);
   xTextureBlend(texture,blend);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTextureCoords(mrb_state *mrb, mrb_value self){
  int texture;
  int coords;
	mrb_get_args(mrb,"ii",&texture,&coords);
   xTextureCoords(texture,coords);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTextureFilter(mrb_state *mrb, mrb_value self){
  char* matchText;
  int flags;
	mrb_get_args(mrb,"zi",&matchText,&flags);
   xTextureFilter(matchText,flags);
  free(matchText);
return mrb_nil_value();
}

mrb_value mrb_xors3d_xClearTextureFilters(mrb_state *mrb, mrb_value self){
   xClearTextureFilters();
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoadTexture(mrb_state *mrb, mrb_value self){
  char* path;
  int flags = 9;
	mrb_get_args(mrb,"z|i",&path,&flags);
   int _res = (int)xLoadTexture(path,flags);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xTextureName(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   char* _res = (char*)xTextureName(texture);
  return mrb_str_new_cstr(mrb, _res);
}

mrb_value mrb_xors3d_xPositionTexture(mrb_state *mrb, mrb_value self){
  int texture;
  double x;
  double y;
	mrb_get_args(mrb,"iff",&texture,&x,&y);
   xPositionTexture(texture,x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xScaleTexture(mrb_state *mrb, mrb_value self){
  int texture;
  double x;
  double y;
	mrb_get_args(mrb,"iff",&texture,&x,&y);
   xScaleTexture(texture,x,y);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xRotateTexture(mrb_state *mrb, mrb_value self){
  int texture;
  double angle;
	mrb_get_args(mrb,"if",&texture,&angle);
   xRotateTexture(texture,angle);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xLoadAnimTexture(mrb_state *mrb, mrb_value self){
  char* path;
  int flags;
  int width;
  int height;
  int startFrame;
  int frames;
	mrb_get_args(mrb,"ziiiii",&path,&flags,&width,&height,&startFrame,&frames);
   int _res = (int)xLoadAnimTexture(path,flags,width,height,startFrame,frames);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateTextureFromData(mrb_state *mrb, mrb_value self){
  int pixelsData;
  int width;
  int height;
  int flags = 9;
  int frames = 1;
	mrb_get_args(mrb,"iii|ii",&pixelsData,&width,&height,&flags,&frames);
   int _res = (int)xCreateTextureFromData(pixelsData,width,height,flags,frames);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetTextureData(mrb_state *mrb, mrb_value self){
  int texture;
  int frame = 0;
	mrb_get_args(mrb,"i|i",&texture,&frame);
   int _res = (int)xGetTextureData(texture,frame);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetTextureDataPitch(mrb_state *mrb, mrb_value self){
  int texture;
  int frame = 0;
	mrb_get_args(mrb,"i|i",&texture,&frame);
   int _res = (int)xGetTextureDataPitch(texture,frame);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetTextureSurface(mrb_state *mrb, mrb_value self){
  int texture;
  int frame = 0;
	mrb_get_args(mrb,"i|i",&texture,&frame);
   int _res = (int)xGetTextureSurface(texture,frame);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetTextureFrames(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xGetTextureFrames(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetCubeFace(mrb_state *mrb, mrb_value self){
  int texture;
  int face;
	mrb_get_args(mrb,"ii",&texture,&face);
   xSetCubeFace(texture,face);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xSetCubeMode(mrb_state *mrb, mrb_value self){
  int texture;
  int mode;
	mrb_get_args(mrb,"ii",&texture,&mode);
   xSetCubeMode(texture,mode);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetTextureBlend(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xGetTextureBlend(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetTextureX(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   double _res = (double)xGetTextureX(texture);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTextureY(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   double _res = (double)xGetTextureY(texture);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTextureScaleX(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   double _res = (double)xGetTextureScaleX(texture);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTextureScaleY(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   double _res = (double)xGetTextureScaleY(texture);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTextureAngle(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   double _res = (double)xGetTextureAngle(texture);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xGetTextureCoords(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xGetTextureCoords(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetCubeFace(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xGetCubeFace(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetCubeMode(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xGetCubeMode(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetTextureFlags(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xGetTextureFlags(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetTextureFlags(mrb_state *mrb, mrb_value self){
  int texture;
  int flags;
	mrb_get_args(mrb,"ii",&texture,&flags);
   xSetTextureFlags(texture,flags);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTextureCounter(mrb_state *mrb, mrb_value self){
  int texture;
	mrb_get_args(mrb,"i",&texture);
   int _res = (int)xTextureCounter(texture);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xVectorPitch(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"fff",&x,&y,&z);
   double _res = (double)xVectorPitch(x,y,z);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xVectorYaw(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
	mrb_get_args(mrb,"fff",&x,&y,&z);
   double _res = (double)xVectorYaw(x,y,z);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xDeltaPitch(mrb_state *mrb, mrb_value self){
  int entity1;
  int entity2;
	mrb_get_args(mrb,"ii",&entity1,&entity2);
   double _res = (double)xDeltaPitch(entity1,entity2);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xDeltaYaw(mrb_state *mrb, mrb_value self){
  int entity1;
  int entity2;
	mrb_get_args(mrb,"ii",&entity1,&entity2);
   double _res = (double)xDeltaYaw(entity1,entity2);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTFormedX(mrb_state *mrb, mrb_value self){
   double _res = (double)xTFormedX();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTFormedY(mrb_state *mrb, mrb_value self){
   double _res = (double)xTFormedY();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTFormedZ(mrb_state *mrb, mrb_value self){
   double _res = (double)xTFormedZ();
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xTFormPoint(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int source;
  int destination;
	mrb_get_args(mrb,"fffii",&x,&y,&z,&source,&destination);
   xTFormPoint(x,y,z,source,destination);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTFormVector(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int source;
  int destination;
	mrb_get_args(mrb,"fffii",&x,&y,&z,&source,&destination);
   xTFormVector(x,y,z,source,destination);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xTFormNormal(mrb_state *mrb, mrb_value self){
  double x;
  double y;
  double z;
  int source;
  int destination;
	mrb_get_args(mrb,"fffii",&x,&y,&z,&source,&destination);
   xTFormNormal(x,y,z,source,destination);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xOpenMovie(mrb_state *mrb, mrb_value self){
  char* path;
	mrb_get_args(mrb,"z",&path);
   int _res = (int)xOpenMovie(path);
  free(path);
return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCloseMovie(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   xCloseMovie(video);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xDrawMovie(mrb_state *mrb, mrb_value self){
  int video;
  int x = 0;
  int y = 0;
  int width = -1;
  int height = -1;
	mrb_get_args(mrb,"i|iiii",&video,&x,&y,&width,&height);
   xDrawMovie(video,x,y,width,height);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMovieWidth(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   int _res = (int)xMovieWidth(video);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMovieHeight(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   int _res = (int)xMovieHeight(video);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMoviePlaying(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   int _res = (int)xMoviePlaying(video);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xMovieSeek(mrb_state *mrb, mrb_value self){
  int video;
  double time;
  int relative = false;
	mrb_get_args(mrb,"if|i",&video,&time,&relative);
   xMovieSeek(video,time,relative);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMovieLength(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   double _res = (double)xMovieLength(video);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xMovieCurrentTime(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   double _res = (double)xMovieCurrentTime(video);
  return mrb_float_value(mrb, _res);
}

mrb_value mrb_xors3d_xMoviePause(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   xMoviePause(video);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMovieResume(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   xMovieResume(video);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xMovieTexture(mrb_state *mrb, mrb_value self){
  int video;
	mrb_get_args(mrb,"i",&video);
   int _res = (int)xMovieTexture(video);
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xCreateWorld(mrb_state *mrb, mrb_value self){
   int _res = (int)xCreateWorld();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xSetActiveWorld(mrb_state *mrb, mrb_value self){
  int world;
	mrb_get_args(mrb,"i",&world);
   xSetActiveWorld(world);
  return mrb_nil_value();
}

mrb_value mrb_xors3d_xGetActiveWorld(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetActiveWorld();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xGetDefaultWorld(mrb_state *mrb, mrb_value self){
   int _res = (int)xGetDefaultWorld();
  return mrb_fixnum_value(_res);
}

mrb_value mrb_xors3d_xDeleteWorld(mrb_state *mrb, mrb_value self){
  int world;
	mrb_get_args(mrb,"i",&world);
   xDeleteWorld(world);
  return mrb_nil_value();
}


void mrb_xors3d_bind(mrb_state *mrb, struct RClass *c){
	mrb_define_const(mrb,c,"LOG_NO",mrb_fixnum_value(LOG_NO));
	mrb_define_const(mrb,c,"LOG_FATAL",mrb_fixnum_value(LOG_FATAL));
	mrb_define_const(mrb,c,"LOG_ERROR",mrb_fixnum_value(LOG_ERROR));
	mrb_define_const(mrb,c,"LOG_WARNING",mrb_fixnum_value(LOG_WARNING));
	mrb_define_const(mrb,c,"LOG_MESSAGE",mrb_fixnum_value(LOG_MESSAGE));
	mrb_define_const(mrb,c,"LOG_INFO",mrb_fixnum_value(LOG_INFO));
	mrb_define_const(mrb,c,"LOG_HTML",mrb_fixnum_value(LOG_HTML));
	mrb_define_const(mrb,c,"LOG_COUT",mrb_fixnum_value(LOG_COUT));
	mrb_define_const(mrb,c,"LOG_STRING",mrb_fixnum_value(LOG_STRING));
	mrb_define_const(mrb,c,"SKIN_SOFTWARE",mrb_fixnum_value(SKIN_SOFTWARE));
	mrb_define_const(mrb,c,"SKIN_HARDWARE",mrb_fixnum_value(SKIN_HARDWARE));
	mrb_define_const(mrb,c,"LIGHT_DIRECTIONAL",mrb_fixnum_value(LIGHT_DIRECTIONAL));
	mrb_define_const(mrb,c,"LIGHT_POINT",mrb_fixnum_value(LIGHT_POINT));
	mrb_define_const(mrb,c,"LIGHT_SPOT",mrb_fixnum_value(LIGHT_SPOT));
	mrb_define_const(mrb,c,"TF_NONE",mrb_fixnum_value(TF_NONE));
	mrb_define_const(mrb,c,"TF_POINT",mrb_fixnum_value(TF_POINT));
	mrb_define_const(mrb,c,"TF_LINEAR",mrb_fixnum_value(TF_LINEAR));
	mrb_define_const(mrb,c,"TF_ANISOTROPIC",mrb_fixnum_value(TF_ANISOTROPIC));
	mrb_define_const(mrb,c,"TF_ANISOTROPICX4",mrb_fixnum_value(TF_ANISOTROPICX4));
	mrb_define_const(mrb,c,"TF_ANISOTROPICX8",mrb_fixnum_value(TF_ANISOTROPICX8));
	mrb_define_const(mrb,c,"TF_ANISOTROPICX16",mrb_fixnum_value(TF_ANISOTROPICX16));
	mrb_define_const(mrb,c,"PS_1_1",mrb_fixnum_value(PS_1_1));
	mrb_define_const(mrb,c,"PS_1_2",mrb_fixnum_value(PS_1_2));
	mrb_define_const(mrb,c,"PS_1_3",mrb_fixnum_value(PS_1_3));
	mrb_define_const(mrb,c,"PS_1_4",mrb_fixnum_value(PS_1_4));
	mrb_define_const(mrb,c,"PS_2_0",mrb_fixnum_value(PS_2_0));
	mrb_define_const(mrb,c,"PS_3_0",mrb_fixnum_value(PS_3_0));
	mrb_define_const(mrb,c,"VS_1_1",mrb_fixnum_value(VS_1_1));
	mrb_define_const(mrb,c,"VS_2_0",mrb_fixnum_value(VS_2_0));
	mrb_define_const(mrb,c,"VS_3_0",mrb_fixnum_value(VS_3_0));
	mrb_define_const(mrb,c,"WORLD",mrb_fixnum_value(WORLD));
	mrb_define_const(mrb,c,"WORLDVIEWPROJ",mrb_fixnum_value(WORLDVIEWPROJ));
	mrb_define_const(mrb,c,"VIEWPROJ",mrb_fixnum_value(VIEWPROJ));
	mrb_define_const(mrb,c,"VIEW",mrb_fixnum_value(VIEW));
	mrb_define_const(mrb,c,"PROJ",mrb_fixnum_value(PROJ));
	mrb_define_const(mrb,c,"WORLDVIEW",mrb_fixnum_value(WORLDVIEW));
	mrb_define_const(mrb,c,"VIEWINVERSE",mrb_fixnum_value(VIEWINVERSE));
	mrb_define_const(mrb,c,"WORLDINVERSETRANSPOSE",mrb_fixnum_value(WORLDINVERSETRANSPOSE));
	mrb_define_const(mrb,c,"WORLDINVERSE",mrb_fixnum_value(WORLDINVERSE));
	mrb_define_const(mrb,c,"WORLDTRANSPOSE",mrb_fixnum_value(WORLDTRANSPOSE));
	mrb_define_const(mrb,c,"VIEWPROJINVERSE",mrb_fixnum_value(VIEWPROJINVERSE));
	mrb_define_const(mrb,c,"VIEWPROJINVERSETRANSPOSE",mrb_fixnum_value(VIEWPROJINVERSETRANSPOSE));
	mrb_define_const(mrb,c,"VIEWTRANSPOSE",mrb_fixnum_value(VIEWTRANSPOSE));
	mrb_define_const(mrb,c,"VIEWINVRSETRANSPOSE",mrb_fixnum_value(VIEWINVRSETRANSPOSE));
	mrb_define_const(mrb,c,"PROJINVERSE",mrb_fixnum_value(PROJINVERSE));
	mrb_define_const(mrb,c,"PROJTRANSPOSE",mrb_fixnum_value(PROJTRANSPOSE));
	mrb_define_const(mrb,c,"PROJINVRSETRANSPOSE",mrb_fixnum_value(PROJINVRSETRANSPOSE));
	mrb_define_const(mrb,c,"WORLDVIEWPROJTRANSPOSE",mrb_fixnum_value(WORLDVIEWPROJTRANSPOSE));
	mrb_define_const(mrb,c,"WORLDVIEWPROJINVERSE",mrb_fixnum_value(WORLDVIEWPROJINVERSE));
	mrb_define_const(mrb,c,"WORLDVIEWPROJINVERSETRANSPOSE",mrb_fixnum_value(WORLDVIEWPROJINVERSETRANSPOSE));
	mrb_define_const(mrb,c,"WORLDVIEWTRANSPOSE",mrb_fixnum_value(WORLDVIEWTRANSPOSE));
	mrb_define_const(mrb,c,"WORLDVIEWINVERSE",mrb_fixnum_value(WORLDVIEWINVERSE));
	mrb_define_const(mrb,c,"WORLDVIEWINVERSETRANSPOSE",mrb_fixnum_value(WORLDVIEWINVERSETRANSPOSE));
	mrb_define_const(mrb,c,"AANONE",mrb_fixnum_value(AANONE));
	mrb_define_const(mrb,c,"AA2SAMPLES",mrb_fixnum_value(AA2SAMPLES));
	mrb_define_const(mrb,c,"AA3SAMPLES",mrb_fixnum_value(AA3SAMPLES));
	mrb_define_const(mrb,c,"AA4SAMPLES",mrb_fixnum_value(AA4SAMPLES));
	mrb_define_const(mrb,c,"AA5SAMPLES",mrb_fixnum_value(AA5SAMPLES));
	mrb_define_const(mrb,c,"AA6SAMPLES",mrb_fixnum_value(AA6SAMPLES));
	mrb_define_const(mrb,c,"AA7SAMPLES",mrb_fixnum_value(AA7SAMPLES));
	mrb_define_const(mrb,c,"AA8SAMPLES",mrb_fixnum_value(AA8SAMPLES));
	mrb_define_const(mrb,c,"AA9SAMPLES",mrb_fixnum_value(AA9SAMPLES));
	mrb_define_const(mrb,c,"AA10SAMPLES",mrb_fixnum_value(AA10SAMPLES));
	mrb_define_const(mrb,c,"AA11SAMPLES",mrb_fixnum_value(AA11SAMPLES));
	mrb_define_const(mrb,c,"AA12SAMPLES",mrb_fixnum_value(AA12SAMPLES));
	mrb_define_const(mrb,c,"AA13SAMPLES",mrb_fixnum_value(AA13SAMPLES));
	mrb_define_const(mrb,c,"AA14SAMPLES",mrb_fixnum_value(AA14SAMPLES));
	mrb_define_const(mrb,c,"AA15SAMPLES",mrb_fixnum_value(AA15SAMPLES));
	mrb_define_const(mrb,c,"AA16SAMPLES",mrb_fixnum_value(AA16SAMPLES));
	mrb_define_const(mrb,c,"FOG_NONE",mrb_fixnum_value(FOG_NONE));
	mrb_define_const(mrb,c,"FOG_LINEAR",mrb_fixnum_value(FOG_LINEAR));
	mrb_define_const(mrb,c,"PROJ_DISABLE",mrb_fixnum_value(PROJ_DISABLE));
	mrb_define_const(mrb,c,"PROJ_PERSPECTIVE",mrb_fixnum_value(PROJ_PERSPECTIVE));
	mrb_define_const(mrb,c,"PROJ_ORTHOGRAPHIC",mrb_fixnum_value(PROJ_ORTHOGRAPHIC));
	mrb_define_const(mrb,c,"FX_NOTHING",mrb_fixnum_value(FX_NOTHING));
	mrb_define_const(mrb,c,"FX_FULLBRIGHT",mrb_fixnum_value(FX_FULLBRIGHT));
	mrb_define_const(mrb,c,"FX_VERTEXCOLOR",mrb_fixnum_value(FX_VERTEXCOLOR));
	mrb_define_const(mrb,c,"FX_FLATSHADED",mrb_fixnum_value(FX_FLATSHADED));
	mrb_define_const(mrb,c,"FX_DISABLEFOG",mrb_fixnum_value(FX_DISABLEFOG));
	mrb_define_const(mrb,c,"FX_DISABLECULLING",mrb_fixnum_value(FX_DISABLECULLING));
	mrb_define_const(mrb,c,"FX_NOALPHABLEND",mrb_fixnum_value(FX_NOALPHABLEND));
	mrb_define_const(mrb,c,"BLEND_ALPHA",mrb_fixnum_value(BLEND_ALPHA));
	mrb_define_const(mrb,c,"BLEND_MULTIPLY",mrb_fixnum_value(BLEND_MULTIPLY));
	mrb_define_const(mrb,c,"BLEND_ADD",mrb_fixnum_value(BLEND_ADD));
	mrb_define_const(mrb,c,"BLEND_PUREADD",mrb_fixnum_value(BLEND_PUREADD));
	mrb_define_const(mrb,c,"CMP_NEVER",mrb_fixnum_value(CMP_NEVER));
	mrb_define_const(mrb,c,"CMP_LESS",mrb_fixnum_value(CMP_LESS));
	mrb_define_const(mrb,c,"CMP_EQUAL",mrb_fixnum_value(CMP_EQUAL));
	mrb_define_const(mrb,c,"CMP_LESSEQUAL",mrb_fixnum_value(CMP_LESSEQUAL));
	mrb_define_const(mrb,c,"CMP_GREATER",mrb_fixnum_value(CMP_GREATER));
	mrb_define_const(mrb,c,"CMP_NOTEQUAL",mrb_fixnum_value(CMP_NOTEQUAL));
	mrb_define_const(mrb,c,"CMP_GREATEREQUAL",mrb_fixnum_value(CMP_GREATEREQUAL));
	mrb_define_const(mrb,c,"CMP_ALWAYS",mrb_fixnum_value(CMP_ALWAYS));
	mrb_define_const(mrb,c,"AXIS_X",mrb_fixnum_value(AXIS_X));
	mrb_define_const(mrb,c,"AXIS_Y",mrb_fixnum_value(AXIS_Y));
	mrb_define_const(mrb,c,"AXIS_Z",mrb_fixnum_value(AXIS_Z));
	mrb_define_const(mrb,c,"FLAGS_COLOR",mrb_fixnum_value(FLAGS_COLOR));
	mrb_define_const(mrb,c,"FLAGS_ALPHA",mrb_fixnum_value(FLAGS_ALPHA));
	mrb_define_const(mrb,c,"FLAGS_MASKED",mrb_fixnum_value(FLAGS_MASKED));
	mrb_define_const(mrb,c,"FLAGS_MIPMAPPED",mrb_fixnum_value(FLAGS_MIPMAPPED));
	mrb_define_const(mrb,c,"FLAGS_CLAMPU",mrb_fixnum_value(FLAGS_CLAMPU));
	mrb_define_const(mrb,c,"FLAGS_CLAMPV",mrb_fixnum_value(FLAGS_CLAMPV));
	mrb_define_const(mrb,c,"FLAGS_SPHERICALENVMAP",mrb_fixnum_value(FLAGS_SPHERICALENVMAP));
	mrb_define_const(mrb,c,"FLAGS_CUBICENVMAP",mrb_fixnum_value(FLAGS_CUBICENVMAP));
	mrb_define_const(mrb,c,"FLAGS_R32F",mrb_fixnum_value(FLAGS_R32F));
	mrb_define_const(mrb,c,"FLAGS_SKIPCACHE",mrb_fixnum_value(FLAGS_SKIPCACHE));
	mrb_define_const(mrb,c,"FLAGS_VOLUMETEXTURE",mrb_fixnum_value(FLAGS_VOLUMETEXTURE));
	mrb_define_const(mrb,c,"FLAGS_ARBG16F",mrb_fixnum_value(FLAGS_ARBG16F));
	mrb_define_const(mrb,c,"FLAGS_ARBG32F",mrb_fixnum_value(FLAGS_ARBG32F));
	mrb_define_const(mrb,c,"TEXBLEND_NONE",mrb_fixnum_value(TEXBLEND_NONE));
	mrb_define_const(mrb,c,"TEXBLEND_ALPHA",mrb_fixnum_value(TEXBLEND_ALPHA));
	mrb_define_const(mrb,c,"TEXBLEND_MULTIPLY",mrb_fixnum_value(TEXBLEND_MULTIPLY));
	mrb_define_const(mrb,c,"TEXBLEND_ADD",mrb_fixnum_value(TEXBLEND_ADD));
	mrb_define_const(mrb,c,"TEXBLEND_DOT3",mrb_fixnum_value(TEXBLEND_DOT3));
	mrb_define_const(mrb,c,"TEXBLEND_LIGHTMAP",mrb_fixnum_value(TEXBLEND_LIGHTMAP));
	mrb_define_const(mrb,c,"TEXBLEND_SEPARATEALPHA",mrb_fixnum_value(TEXBLEND_SEPARATEALPHA));
	mrb_define_const(mrb,c,"FACE_LEFT",mrb_fixnum_value(FACE_LEFT));
	mrb_define_const(mrb,c,"FACE_FORWARD",mrb_fixnum_value(FACE_FORWARD));
	mrb_define_const(mrb,c,"FACE_RIGHT",mrb_fixnum_value(FACE_RIGHT));
	mrb_define_const(mrb,c,"FACE_BACKWARD",mrb_fixnum_value(FACE_BACKWARD));
	mrb_define_const(mrb,c,"FACE_UP",mrb_fixnum_value(FACE_UP));
	mrb_define_const(mrb,c,"FACE_DOWN",mrb_fixnum_value(FACE_DOWN));
	mrb_define_const(mrb,c,"ANIMATION_STOP",mrb_fixnum_value(ANIMATION_STOP));
	mrb_define_const(mrb,c,"ANIMATION_LOOP",mrb_fixnum_value(ANIMATION_LOOP));
	mrb_define_const(mrb,c,"ANIMATION_PINGPONG",mrb_fixnum_value(ANIMATION_PINGPONG));
	mrb_define_const(mrb,c,"ANIMATION_ONE",mrb_fixnum_value(ANIMATION_ONE));
	mrb_define_const(mrb,c,"SPHERETOSPHERE",mrb_fixnum_value(SPHERETOSPHERE));
	mrb_define_const(mrb,c,"SPHERETOBOX",mrb_fixnum_value(SPHERETOBOX));
	mrb_define_const(mrb,c,"SPHERETOTRIMESH",mrb_fixnum_value(SPHERETOTRIMESH));
	mrb_define_const(mrb,c,"RESPONSE_STOP",mrb_fixnum_value(RESPONSE_STOP));
	mrb_define_const(mrb,c,"RESPONSE_SLIDING",mrb_fixnum_value(RESPONSE_SLIDING));
	mrb_define_const(mrb,c,"RESPONSE_SLIDING_DOWNLOCK",mrb_fixnum_value(RESPONSE_SLIDING_DOWNLOCK));
	mrb_define_const(mrb,c,"PICK_NONE",mrb_fixnum_value(PICK_NONE));
	mrb_define_const(mrb,c,"PICK_SPHERE",mrb_fixnum_value(PICK_SPHERE));
	mrb_define_const(mrb,c,"PICK_TRIMESH",mrb_fixnum_value(PICK_TRIMESH));
	mrb_define_const(mrb,c,"PICK_BOX",mrb_fixnum_value(PICK_BOX));
	mrb_define_const(mrb,c,"SPRITE_FIXED",mrb_fixnum_value(SPRITE_FIXED));
	mrb_define_const(mrb,c,"SPRITE_FREE",mrb_fixnum_value(SPRITE_FREE));
	mrb_define_const(mrb,c,"SPRITE_FREEROLL",mrb_fixnum_value(SPRITE_FREEROLL));
	mrb_define_const(mrb,c,"SPRITE_FIXEDYAW",mrb_fixnum_value(SPRITE_FIXEDYAW));
	mrb_define_const(mrb,c,"JOY_NONE",mrb_fixnum_value(JOY_NONE));
	mrb_define_const(mrb,c,"JOY_DIGITAL",mrb_fixnum_value(JOY_DIGITAL));
	mrb_define_const(mrb,c,"JOY_ANALOG",mrb_fixnum_value(JOY_ANALOG));
	mrb_define_const(mrb,c,"CUBEMAP_SPECULAR",mrb_fixnum_value(CUBEMAP_SPECULAR));
	mrb_define_const(mrb,c,"CUBEMAP_DIFFUSE",mrb_fixnum_value(CUBEMAP_DIFFUSE));
	mrb_define_const(mrb,c,"CUBEMAP_REFRACTION",mrb_fixnum_value(CUBEMAP_REFRACTION));
	mrb_define_const(mrb,c,"SHADOWS_BLUR_NONE",mrb_fixnum_value(SHADOWS_BLUR_NONE));
	mrb_define_const(mrb,c,"SHADOWS_BLUR_3",mrb_fixnum_value(SHADOWS_BLUR_3));
	mrb_define_const(mrb,c,"SHADOWS_BLUR_5",mrb_fixnum_value(SHADOWS_BLUR_5));
	mrb_define_const(mrb,c,"SHADOWS_BLUR_7",mrb_fixnum_value(SHADOWS_BLUR_7));
	mrb_define_const(mrb,c,"SHADOWS_BLUR_11",mrb_fixnum_value(SHADOWS_BLUR_11));
	mrb_define_const(mrb,c,"SHADOWS_BLUR_13",mrb_fixnum_value(SHADOWS_BLUR_13));
	mrb_define_const(mrb,c,"PRIMITIVE_POINTLIST",mrb_fixnum_value(PRIMITIVE_POINTLIST));
	mrb_define_const(mrb,c,"PRIMITIVE_LINELIST",mrb_fixnum_value(PRIMITIVE_LINELIST));
	mrb_define_const(mrb,c,"PRIMITIVE_LINESTRIP",mrb_fixnum_value(PRIMITIVE_LINESTRIP));
	mrb_define_const(mrb,c,"PRIMITIVE_TRIANGLELIST",mrb_fixnum_value(PRIMITIVE_TRIANGLELIST));
	mrb_define_const(mrb,c,"PRIMITIVE_TRIANGLESTRIP",mrb_fixnum_value(PRIMITIVE_TRIANGLESTRIP));
	mrb_define_const(mrb,c,"PRIMITIVE_TRIANGLEFAN",mrb_fixnum_value(PRIMITIVE_TRIANGLEFAN));
	mrb_define_const(mrb,c,"LS_NUL",mrb_fixnum_value(LS_NUL));
	mrb_define_const(mrb,c,"LS_CR",mrb_fixnum_value(LS_CR));
	mrb_define_const(mrb,c,"LS_LF",mrb_fixnum_value(LS_LF));
	mrb_define_const(mrb,c,"LS_CRLF",mrb_fixnum_value(LS_CRLF));
	mrb_define_const(mrb,c,"JOINT_POINT2POINT",mrb_fixnum_value(JOINT_POINT2POINT));
	mrb_define_const(mrb,c,"JOINT_6DOF",mrb_fixnum_value(JOINT_6DOF));
	mrb_define_const(mrb,c,"JOINT_6DOFSPRING",mrb_fixnum_value(JOINT_6DOFSPRING));
	mrb_define_const(mrb,c,"JOINT_HINGE",mrb_fixnum_value(JOINT_HINGE));
	mrb_define_const(mrb,c,"PXDD_NO",mrb_fixnum_value(PXDD_NO));
	mrb_define_const(mrb,c,"PXDD_WIREFRAME",mrb_fixnum_value(PXDD_WIREFRAME));
	mrb_define_const(mrb,c,"PXDD_AABB",mrb_fixnum_value(PXDD_AABB));
	mrb_define_const(mrb,c,"PXDD_CONTACTS",mrb_fixnum_value(PXDD_CONTACTS));
	mrb_define_const(mrb,c,"PXDD_JOINTS",mrb_fixnum_value(PXDD_JOINTS));
	mrb_define_const(mrb,c,"PXDD_JOINT_LIMITS",mrb_fixnum_value(PXDD_JOINT_LIMITS));
	mrb_define_const(mrb,c,"PXDD_NO_AXIS",mrb_fixnum_value(PXDD_NO_AXIS));
	mrb_define_const(mrb,c,"PXRC_SINGLE",mrb_fixnum_value(PXRC_SINGLE));
	mrb_define_const(mrb,c,"PXRC_MULTIPLE",mrb_fixnum_value(PXRC_MULTIPLE));
	mrb_define_const(mrb,c,"MOUSE_LEFT",mrb_fixnum_value(MOUSE_LEFT));
	mrb_define_const(mrb,c,"MOUSE_RIGHT",mrb_fixnum_value(MOUSE_RIGHT));
	mrb_define_const(mrb,c,"MOUSE_MIDDLE",mrb_fixnum_value(MOUSE_MIDDLE));
	mrb_define_const(mrb,c,"MOUSE4",mrb_fixnum_value(MOUSE4));
	mrb_define_const(mrb,c,"MOUSE5",mrb_fixnum_value(MOUSE5));
	mrb_define_const(mrb,c,"MOUSE6",mrb_fixnum_value(MOUSE6));
	mrb_define_const(mrb,c,"MOUSE7",mrb_fixnum_value(MOUSE7));
	mrb_define_const(mrb,c,"MOUSE8",mrb_fixnum_value(MOUSE8));
	mrb_define_const(mrb,c,"xMOUSE_LEFT",mrb_fixnum_value(xMOUSE_LEFT));
	mrb_define_const(mrb,c,"xMOUSE_RIGHT",mrb_fixnum_value(xMOUSE_RIGHT));
	mrb_define_const(mrb,c,"xMOUSE_MIDDLE",mrb_fixnum_value(xMOUSE_MIDDLE));
	mrb_define_const(mrb,c,"xMOUSE4",mrb_fixnum_value(xMOUSE4));
	mrb_define_const(mrb,c,"xMOUSE5",mrb_fixnum_value(xMOUSE5));
	mrb_define_const(mrb,c,"xMOUSE6",mrb_fixnum_value(xMOUSE6));
	mrb_define_const(mrb,c,"xMOUSE7",mrb_fixnum_value(xMOUSE7));
	mrb_define_const(mrb,c,"xMOUSE8",mrb_fixnum_value(xMOUSE8));
	mrb_define_const(mrb,c,"KEY_ESCAPE",mrb_fixnum_value(KEY_ESCAPE));
	mrb_define_const(mrb,c,"KEY_1",mrb_fixnum_value(KEY_1));
	mrb_define_const(mrb,c,"KEY_2",mrb_fixnum_value(KEY_2));
	mrb_define_const(mrb,c,"KEY_3",mrb_fixnum_value(KEY_3));
	mrb_define_const(mrb,c,"KEY_4",mrb_fixnum_value(KEY_4));
	mrb_define_const(mrb,c,"KEY_5",mrb_fixnum_value(KEY_5));
	mrb_define_const(mrb,c,"KEY_6",mrb_fixnum_value(KEY_6));
	mrb_define_const(mrb,c,"KEY_7",mrb_fixnum_value(KEY_7));
	mrb_define_const(mrb,c,"KEY_8",mrb_fixnum_value(KEY_8));
	mrb_define_const(mrb,c,"KEY_9",mrb_fixnum_value(KEY_9));
	mrb_define_const(mrb,c,"KEY_0",mrb_fixnum_value(KEY_0));
	mrb_define_const(mrb,c,"KEY_MINUS",mrb_fixnum_value(KEY_MINUS));
	mrb_define_const(mrb,c,"KEY_EQUALS",mrb_fixnum_value(KEY_EQUALS));
	mrb_define_const(mrb,c,"KEY_BACK",mrb_fixnum_value(KEY_BACK));
	mrb_define_const(mrb,c,"KEY_TAB",mrb_fixnum_value(KEY_TAB));
	mrb_define_const(mrb,c,"KEY_Q",mrb_fixnum_value(KEY_Q));
	mrb_define_const(mrb,c,"KEY_W",mrb_fixnum_value(KEY_W));
	mrb_define_const(mrb,c,"KEY_E",mrb_fixnum_value(KEY_E));
	mrb_define_const(mrb,c,"KEY_R",mrb_fixnum_value(KEY_R));
	mrb_define_const(mrb,c,"KEY_T",mrb_fixnum_value(KEY_T));
	mrb_define_const(mrb,c,"KEY_Y",mrb_fixnum_value(KEY_Y));
	mrb_define_const(mrb,c,"KEY_U",mrb_fixnum_value(KEY_U));
	mrb_define_const(mrb,c,"KEY_I",mrb_fixnum_value(KEY_I));
	mrb_define_const(mrb,c,"KEY_O",mrb_fixnum_value(KEY_O));
	mrb_define_const(mrb,c,"KEY_P",mrb_fixnum_value(KEY_P));
	mrb_define_const(mrb,c,"KEY_LBRACKET",mrb_fixnum_value(KEY_LBRACKET));
	mrb_define_const(mrb,c,"KEY_RBRACKET",mrb_fixnum_value(KEY_RBRACKET));
	mrb_define_const(mrb,c,"KEY_RETURN",mrb_fixnum_value(KEY_RETURN));
	mrb_define_const(mrb,c,"KEY_ENTER",mrb_fixnum_value(KEY_ENTER));
	mrb_define_const(mrb,c,"KEY_LCONTROL",mrb_fixnum_value(KEY_LCONTROL));
	mrb_define_const(mrb,c,"KEY_RCONTROL",mrb_fixnum_value(KEY_RCONTROL));
	mrb_define_const(mrb,c,"KEY_A",mrb_fixnum_value(KEY_A));
	mrb_define_const(mrb,c,"KEY_S",mrb_fixnum_value(KEY_S));
	mrb_define_const(mrb,c,"KEY_D",mrb_fixnum_value(KEY_D));
	mrb_define_const(mrb,c,"KEY_F",mrb_fixnum_value(KEY_F));
	mrb_define_const(mrb,c,"KEY_G",mrb_fixnum_value(KEY_G));
	mrb_define_const(mrb,c,"KEY_H",mrb_fixnum_value(KEY_H));
	mrb_define_const(mrb,c,"KEY_J",mrb_fixnum_value(KEY_J));
	mrb_define_const(mrb,c,"KEY_K",mrb_fixnum_value(KEY_K));
	mrb_define_const(mrb,c,"KEY_L",mrb_fixnum_value(KEY_L));
	mrb_define_const(mrb,c,"KEY_SEMICOLON",mrb_fixnum_value(KEY_SEMICOLON));
	mrb_define_const(mrb,c,"KEY_APOSTROPHE",mrb_fixnum_value(KEY_APOSTROPHE));
	mrb_define_const(mrb,c,"KEY_GRAVE",mrb_fixnum_value(KEY_GRAVE));
	mrb_define_const(mrb,c,"KEY_LSHIFT",mrb_fixnum_value(KEY_LSHIFT));
	mrb_define_const(mrb,c,"KEY_BACKSLASH",mrb_fixnum_value(KEY_BACKSLASH));
	mrb_define_const(mrb,c,"KEY_Z",mrb_fixnum_value(KEY_Z));
	mrb_define_const(mrb,c,"KEY_X",mrb_fixnum_value(KEY_X));
	mrb_define_const(mrb,c,"KEY_C",mrb_fixnum_value(KEY_C));
	mrb_define_const(mrb,c,"KEY_V",mrb_fixnum_value(KEY_V));
	mrb_define_const(mrb,c,"KEY_B",mrb_fixnum_value(KEY_B));
	mrb_define_const(mrb,c,"KEY_N",mrb_fixnum_value(KEY_N));
	mrb_define_const(mrb,c,"KEY_M",mrb_fixnum_value(KEY_M));
	mrb_define_const(mrb,c,"KEY_COMMA",mrb_fixnum_value(KEY_COMMA));
	mrb_define_const(mrb,c,"KEY_PERIOD",mrb_fixnum_value(KEY_PERIOD));
	mrb_define_const(mrb,c,"KEY_SLASH",mrb_fixnum_value(KEY_SLASH));
	mrb_define_const(mrb,c,"KEY_RSHIFT",mrb_fixnum_value(KEY_RSHIFT));
	mrb_define_const(mrb,c,"KEY_MULTIPLY",mrb_fixnum_value(KEY_MULTIPLY));
	mrb_define_const(mrb,c,"KEY_MENU",mrb_fixnum_value(KEY_MENU));
	mrb_define_const(mrb,c,"KEY_SPACE",mrb_fixnum_value(KEY_SPACE));
	mrb_define_const(mrb,c,"KEY_F1",mrb_fixnum_value(KEY_F1));
	mrb_define_const(mrb,c,"KEY_F2",mrb_fixnum_value(KEY_F2));
	mrb_define_const(mrb,c,"KEY_F3",mrb_fixnum_value(KEY_F3));
	mrb_define_const(mrb,c,"KEY_F4",mrb_fixnum_value(KEY_F4));
	mrb_define_const(mrb,c,"KEY_F5",mrb_fixnum_value(KEY_F5));
	mrb_define_const(mrb,c,"KEY_F6",mrb_fixnum_value(KEY_F6));
	mrb_define_const(mrb,c,"KEY_F7",mrb_fixnum_value(KEY_F7));
	mrb_define_const(mrb,c,"KEY_F8",mrb_fixnum_value(KEY_F8));
	mrb_define_const(mrb,c,"KEY_F9",mrb_fixnum_value(KEY_F9));
	mrb_define_const(mrb,c,"KEY_F10",mrb_fixnum_value(KEY_F10));
	mrb_define_const(mrb,c,"KEY_NUMLOCK",mrb_fixnum_value(KEY_NUMLOCK));
	mrb_define_const(mrb,c,"KEY_SCROLL",mrb_fixnum_value(KEY_SCROLL));
	mrb_define_const(mrb,c,"KEY_NUMPAD7",mrb_fixnum_value(KEY_NUMPAD7));
	mrb_define_const(mrb,c,"KEY_NUMPAD8",mrb_fixnum_value(KEY_NUMPAD8));
	mrb_define_const(mrb,c,"KEY_NUMPAD9",mrb_fixnum_value(KEY_NUMPAD9));
	mrb_define_const(mrb,c,"KEY_SUBTRACT",mrb_fixnum_value(KEY_SUBTRACT));
	mrb_define_const(mrb,c,"KEY_NUMPAD4",mrb_fixnum_value(KEY_NUMPAD4));
	mrb_define_const(mrb,c,"KEY_NUMPAD5",mrb_fixnum_value(KEY_NUMPAD5));
	mrb_define_const(mrb,c,"KEY_NUMPAD6",mrb_fixnum_value(KEY_NUMPAD6));
	mrb_define_const(mrb,c,"KEY_ADD",mrb_fixnum_value(KEY_ADD));
	mrb_define_const(mrb,c,"KEY_NUMPAD1",mrb_fixnum_value(KEY_NUMPAD1));
	mrb_define_const(mrb,c,"KEY_NUMPAD2",mrb_fixnum_value(KEY_NUMPAD2));
	mrb_define_const(mrb,c,"KEY_NUMPAD3",mrb_fixnum_value(KEY_NUMPAD3));
	mrb_define_const(mrb,c,"KEY_NUMPAD0",mrb_fixnum_value(KEY_NUMPAD0));
	mrb_define_const(mrb,c,"KEY_DECIMAL",mrb_fixnum_value(KEY_DECIMAL));
	mrb_define_const(mrb,c,"KEY_TILD",mrb_fixnum_value(KEY_TILD));
	mrb_define_const(mrb,c,"KEY_F11",mrb_fixnum_value(KEY_F11));
	mrb_define_const(mrb,c,"KEY_F12",mrb_fixnum_value(KEY_F12));
	mrb_define_const(mrb,c,"KEY_NUMPADENTER",mrb_fixnum_value(KEY_NUMPADENTER));
	mrb_define_const(mrb,c,"KEY_RMENU",mrb_fixnum_value(KEY_RMENU));
	mrb_define_const(mrb,c,"KEY_PAUSE",mrb_fixnum_value(KEY_PAUSE));
	mrb_define_const(mrb,c,"KEY_HOME",mrb_fixnum_value(KEY_HOME));
	mrb_define_const(mrb,c,"KEY_UP",mrb_fixnum_value(KEY_UP));
	mrb_define_const(mrb,c,"KEY_PRIOR",mrb_fixnum_value(KEY_PRIOR));
	mrb_define_const(mrb,c,"KEY_LEFT",mrb_fixnum_value(KEY_LEFT));
	mrb_define_const(mrb,c,"KEY_RIGHT",mrb_fixnum_value(KEY_RIGHT));
	mrb_define_const(mrb,c,"KEY_END",mrb_fixnum_value(KEY_END));
	mrb_define_const(mrb,c,"KEY_DOWN",mrb_fixnum_value(KEY_DOWN));
	mrb_define_const(mrb,c,"KEY_NEXT",mrb_fixnum_value(KEY_NEXT));
	mrb_define_const(mrb,c,"KEY_INSERT",mrb_fixnum_value(KEY_INSERT));
	mrb_define_const(mrb,c,"KEY_DELETE",mrb_fixnum_value(KEY_DELETE));
	mrb_define_const(mrb,c,"KEY_LWIN",mrb_fixnum_value(KEY_LWIN));
	mrb_define_const(mrb,c,"KEY_RWIN",mrb_fixnum_value(KEY_RWIN));
	mrb_define_const(mrb,c,"KEY_BACKSPACE",mrb_fixnum_value(KEY_BACKSPACE));
	mrb_define_const(mrb,c,"KEY_NUMPADSTAR",mrb_fixnum_value(KEY_NUMPADSTAR));
	mrb_define_const(mrb,c,"KEY_CAPSLOCK",mrb_fixnum_value(KEY_CAPSLOCK));
	mrb_define_const(mrb,c,"KEY_NUMPADMINUS",mrb_fixnum_value(KEY_NUMPADMINUS));
	mrb_define_const(mrb,c,"KEY_NUMPADPLUS",mrb_fixnum_value(KEY_NUMPADPLUS));
	mrb_define_const(mrb,c,"KEY_NUMPADPERIOD",mrb_fixnum_value(KEY_NUMPADPERIOD));
	mrb_define_const(mrb,c,"KEY_DIVIDE",mrb_fixnum_value(KEY_DIVIDE));
	mrb_define_const(mrb,c,"KEY_NUMPADSLASH",mrb_fixnum_value(KEY_NUMPADSLASH));
	mrb_define_const(mrb,c,"KEY_LALT",mrb_fixnum_value(KEY_LALT));
	mrb_define_const(mrb,c,"KEY_RALT",mrb_fixnum_value(KEY_RALT));
	mrb_define_const(mrb,c,"KEY_UPARROW",mrb_fixnum_value(KEY_UPARROW));
	mrb_define_const(mrb,c,"KEY_PGUP",mrb_fixnum_value(KEY_PGUP));
	mrb_define_const(mrb,c,"KEY_LEFTARROW",mrb_fixnum_value(KEY_LEFTARROW));
	mrb_define_const(mrb,c,"KEY_RIGHTARROW",mrb_fixnum_value(KEY_RIGHTARROW));
	mrb_define_const(mrb,c,"KEY_DOWNARROW",mrb_fixnum_value(KEY_DOWNARROW));
	mrb_define_const(mrb,c,"KEY_PGDN",mrb_fixnum_value(KEY_PGDN));
	mrb_define_const(mrb,c,"xKEY_ESCAPE",mrb_fixnum_value(xKEY_ESCAPE));
	mrb_define_const(mrb,c,"xKEY_1",mrb_fixnum_value(xKEY_1));
	mrb_define_const(mrb,c,"xKEY_2",mrb_fixnum_value(xKEY_2));
	mrb_define_const(mrb,c,"xKEY_3",mrb_fixnum_value(xKEY_3));
	mrb_define_const(mrb,c,"xKEY_4",mrb_fixnum_value(xKEY_4));
	mrb_define_const(mrb,c,"xKEY_5",mrb_fixnum_value(xKEY_5));
	mrb_define_const(mrb,c,"xKEY_6",mrb_fixnum_value(xKEY_6));
	mrb_define_const(mrb,c,"xKEY_7",mrb_fixnum_value(xKEY_7));
	mrb_define_const(mrb,c,"xKEY_8",mrb_fixnum_value(xKEY_8));
	mrb_define_const(mrb,c,"xKEY_9",mrb_fixnum_value(xKEY_9));
	mrb_define_const(mrb,c,"xKEY_0",mrb_fixnum_value(xKEY_0));
	mrb_define_const(mrb,c,"xKEY_MINUS",mrb_fixnum_value(xKEY_MINUS));
	mrb_define_const(mrb,c,"xKEY_EQUALS",mrb_fixnum_value(xKEY_EQUALS));
	mrb_define_const(mrb,c,"xKEY_BACK",mrb_fixnum_value(xKEY_BACK));
	mrb_define_const(mrb,c,"xKEY_TAB",mrb_fixnum_value(xKEY_TAB));
	mrb_define_const(mrb,c,"xKEY_Q",mrb_fixnum_value(xKEY_Q));
	mrb_define_const(mrb,c,"xKEY_W",mrb_fixnum_value(xKEY_W));
	mrb_define_const(mrb,c,"xKEY_E",mrb_fixnum_value(xKEY_E));
	mrb_define_const(mrb,c,"xKEY_R",mrb_fixnum_value(xKEY_R));
	mrb_define_const(mrb,c,"xKEY_T",mrb_fixnum_value(xKEY_T));
	mrb_define_const(mrb,c,"xKEY_Y",mrb_fixnum_value(xKEY_Y));
	mrb_define_const(mrb,c,"xKEY_U",mrb_fixnum_value(xKEY_U));
	mrb_define_const(mrb,c,"xKEY_I",mrb_fixnum_value(xKEY_I));
	mrb_define_const(mrb,c,"xKEY_O",mrb_fixnum_value(xKEY_O));
	mrb_define_const(mrb,c,"xKEY_P",mrb_fixnum_value(xKEY_P));
	mrb_define_const(mrb,c,"xKEY_LBRACKET",mrb_fixnum_value(xKEY_LBRACKET));
	mrb_define_const(mrb,c,"xKEY_RBRACKET",mrb_fixnum_value(xKEY_RBRACKET));
	mrb_define_const(mrb,c,"xKEY_RETURN",mrb_fixnum_value(xKEY_RETURN));
	mrb_define_const(mrb,c,"xKEY_ENTER",mrb_fixnum_value(xKEY_ENTER));
	mrb_define_const(mrb,c,"xKEY_LCONTROL",mrb_fixnum_value(xKEY_LCONTROL));
	mrb_define_const(mrb,c,"xKEY_RCONTROL",mrb_fixnum_value(xKEY_RCONTROL));
	mrb_define_const(mrb,c,"xKEY_A",mrb_fixnum_value(xKEY_A));
	mrb_define_const(mrb,c,"xKEY_S",mrb_fixnum_value(xKEY_S));
	mrb_define_const(mrb,c,"xKEY_D",mrb_fixnum_value(xKEY_D));
	mrb_define_const(mrb,c,"xKEY_F",mrb_fixnum_value(xKEY_F));
	mrb_define_const(mrb,c,"xKEY_G",mrb_fixnum_value(xKEY_G));
	mrb_define_const(mrb,c,"xKEY_H",mrb_fixnum_value(xKEY_H));
	mrb_define_const(mrb,c,"xKEY_J",mrb_fixnum_value(xKEY_J));
	mrb_define_const(mrb,c,"xKEY_K",mrb_fixnum_value(xKEY_K));
	mrb_define_const(mrb,c,"xKEY_L",mrb_fixnum_value(xKEY_L));
	mrb_define_const(mrb,c,"xKEY_SEMICOLON",mrb_fixnum_value(xKEY_SEMICOLON));
	mrb_define_const(mrb,c,"xKEY_APOSTROPHE",mrb_fixnum_value(xKEY_APOSTROPHE));
	mrb_define_const(mrb,c,"xKEY_GRAVE",mrb_fixnum_value(xKEY_GRAVE));
	mrb_define_const(mrb,c,"xKEY_LSHIFT",mrb_fixnum_value(xKEY_LSHIFT));
	mrb_define_const(mrb,c,"xKEY_BACKSLASH",mrb_fixnum_value(xKEY_BACKSLASH));
	mrb_define_const(mrb,c,"xKEY_Z",mrb_fixnum_value(xKEY_Z));
	mrb_define_const(mrb,c,"xKEY_X",mrb_fixnum_value(xKEY_X));
	mrb_define_const(mrb,c,"xKEY_C",mrb_fixnum_value(xKEY_C));
	mrb_define_const(mrb,c,"xKEY_V",mrb_fixnum_value(xKEY_V));
	mrb_define_const(mrb,c,"xKEY_B",mrb_fixnum_value(xKEY_B));
	mrb_define_const(mrb,c,"xKEY_N",mrb_fixnum_value(xKEY_N));
	mrb_define_const(mrb,c,"xKEY_M",mrb_fixnum_value(xKEY_M));
	mrb_define_const(mrb,c,"xKEY_COMMA",mrb_fixnum_value(xKEY_COMMA));
	mrb_define_const(mrb,c,"xKEY_PERIOD",mrb_fixnum_value(xKEY_PERIOD));
	mrb_define_const(mrb,c,"xKEY_SLASH",mrb_fixnum_value(xKEY_SLASH));
	mrb_define_const(mrb,c,"xKEY_RSHIFT",mrb_fixnum_value(xKEY_RSHIFT));
	mrb_define_const(mrb,c,"xKEY_MULTIPLY",mrb_fixnum_value(xKEY_MULTIPLY));
	mrb_define_const(mrb,c,"xKEY_MENU",mrb_fixnum_value(xKEY_MENU));
	mrb_define_const(mrb,c,"xKEY_SPACE",mrb_fixnum_value(xKEY_SPACE));
	mrb_define_const(mrb,c,"xKEY_F1",mrb_fixnum_value(xKEY_F1));
	mrb_define_const(mrb,c,"xKEY_F2",mrb_fixnum_value(xKEY_F2));
	mrb_define_const(mrb,c,"xKEY_F3",mrb_fixnum_value(xKEY_F3));
	mrb_define_const(mrb,c,"xKEY_F4",mrb_fixnum_value(xKEY_F4));
	mrb_define_const(mrb,c,"xKEY_F5",mrb_fixnum_value(xKEY_F5));
	mrb_define_const(mrb,c,"xKEY_F6",mrb_fixnum_value(xKEY_F6));
	mrb_define_const(mrb,c,"xKEY_F7",mrb_fixnum_value(xKEY_F7));
	mrb_define_const(mrb,c,"xKEY_F8",mrb_fixnum_value(xKEY_F8));
	mrb_define_const(mrb,c,"xKEY_F9",mrb_fixnum_value(xKEY_F9));
	mrb_define_const(mrb,c,"xKEY_F10",mrb_fixnum_value(xKEY_F10));
	mrb_define_const(mrb,c,"xKEY_NUMLOCK",mrb_fixnum_value(xKEY_NUMLOCK));
	mrb_define_const(mrb,c,"xKEY_SCROLL",mrb_fixnum_value(xKEY_SCROLL));
	mrb_define_const(mrb,c,"xKEY_NUMPAD7",mrb_fixnum_value(xKEY_NUMPAD7));
	mrb_define_const(mrb,c,"xKEY_NUMPAD8",mrb_fixnum_value(xKEY_NUMPAD8));
	mrb_define_const(mrb,c,"xKEY_NUMPAD9",mrb_fixnum_value(xKEY_NUMPAD9));
	mrb_define_const(mrb,c,"xKEY_SUBTRACT",mrb_fixnum_value(xKEY_SUBTRACT));
	mrb_define_const(mrb,c,"xKEY_NUMPAD4",mrb_fixnum_value(xKEY_NUMPAD4));
	mrb_define_const(mrb,c,"xKEY_NUMPAD5",mrb_fixnum_value(xKEY_NUMPAD5));
	mrb_define_const(mrb,c,"xKEY_NUMPAD6",mrb_fixnum_value(xKEY_NUMPAD6));
	mrb_define_const(mrb,c,"xKEY_ADD",mrb_fixnum_value(xKEY_ADD));
	mrb_define_const(mrb,c,"xKEY_NUMPAD1",mrb_fixnum_value(xKEY_NUMPAD1));
	mrb_define_const(mrb,c,"xKEY_NUMPAD2",mrb_fixnum_value(xKEY_NUMPAD2));
	mrb_define_const(mrb,c,"xKEY_NUMPAD3",mrb_fixnum_value(xKEY_NUMPAD3));
	mrb_define_const(mrb,c,"xKEY_NUMPAD0",mrb_fixnum_value(xKEY_NUMPAD0));
	mrb_define_const(mrb,c,"xKEY_DECIMAL",mrb_fixnum_value(xKEY_DECIMAL));
	mrb_define_const(mrb,c,"xKEY_TILD",mrb_fixnum_value(xKEY_TILD));
	mrb_define_const(mrb,c,"xKEY_F11",mrb_fixnum_value(xKEY_F11));
	mrb_define_const(mrb,c,"xKEY_F12",mrb_fixnum_value(xKEY_F12));
	mrb_define_const(mrb,c,"xKEY_NUMPADENTER",mrb_fixnum_value(xKEY_NUMPADENTER));
	mrb_define_const(mrb,c,"xKEY_RMENU",mrb_fixnum_value(xKEY_RMENU));
	mrb_define_const(mrb,c,"xKEY_PAUSE",mrb_fixnum_value(xKEY_PAUSE));
	mrb_define_const(mrb,c,"xKEY_HOME",mrb_fixnum_value(xKEY_HOME));
	mrb_define_const(mrb,c,"xKEY_UP",mrb_fixnum_value(xKEY_UP));
	mrb_define_const(mrb,c,"xKEY_PRIOR",mrb_fixnum_value(xKEY_PRIOR));
	mrb_define_const(mrb,c,"xKEY_LEFT",mrb_fixnum_value(xKEY_LEFT));
	mrb_define_const(mrb,c,"xKEY_RIGHT",mrb_fixnum_value(xKEY_RIGHT));
	mrb_define_const(mrb,c,"xKEY_END",mrb_fixnum_value(xKEY_END));
	mrb_define_const(mrb,c,"xKEY_DOWN",mrb_fixnum_value(xKEY_DOWN));
	mrb_define_const(mrb,c,"xKEY_NEXT",mrb_fixnum_value(xKEY_NEXT));
	mrb_define_const(mrb,c,"xKEY_INSERT",mrb_fixnum_value(xKEY_INSERT));
	mrb_define_const(mrb,c,"xKEY_DELETE",mrb_fixnum_value(xKEY_DELETE));
	mrb_define_const(mrb,c,"xKEY_LWIN",mrb_fixnum_value(xKEY_LWIN));
	mrb_define_const(mrb,c,"xKEY_RWIN",mrb_fixnum_value(xKEY_RWIN));
	mrb_define_const(mrb,c,"xKEY_BACKSPACE",mrb_fixnum_value(xKEY_BACKSPACE));
	mrb_define_const(mrb,c,"xKEY_NUMPADSTAR",mrb_fixnum_value(xKEY_NUMPADSTAR));
	mrb_define_const(mrb,c,"xKEY_CAPSLOCK",mrb_fixnum_value(xKEY_CAPSLOCK));
	mrb_define_const(mrb,c,"xKEY_NUMPADMINUS",mrb_fixnum_value(xKEY_NUMPADMINUS));
	mrb_define_const(mrb,c,"xKEY_NUMPADPLUS",mrb_fixnum_value(xKEY_NUMPADPLUS));
	mrb_define_const(mrb,c,"xKEY_NUMPADPERIOD",mrb_fixnum_value(xKEY_NUMPADPERIOD));
	mrb_define_const(mrb,c,"xKEY_DIVIDE",mrb_fixnum_value(xKEY_DIVIDE));
	mrb_define_const(mrb,c,"xKEY_NUMPADSLASH",mrb_fixnum_value(xKEY_NUMPADSLASH));
	mrb_define_const(mrb,c,"xKEY_LALT",mrb_fixnum_value(xKEY_LALT));
	mrb_define_const(mrb,c,"xKEY_RALT",mrb_fixnum_value(xKEY_RALT));
	mrb_define_const(mrb,c,"xKEY_UPARROW",mrb_fixnum_value(xKEY_UPARROW));
	mrb_define_const(mrb,c,"xKEY_PGUP",mrb_fixnum_value(xKEY_PGUP));
	mrb_define_const(mrb,c,"xKEY_LEFTARROW",mrb_fixnum_value(xKEY_LEFTARROW));
	mrb_define_const(mrb,c,"xKEY_RIGHTARROW",mrb_fixnum_value(xKEY_RIGHTARROW));
	mrb_define_const(mrb,c,"xKEY_DOWNARROW",mrb_fixnum_value(xKEY_DOWNARROW));
	mrb_define_const(mrb,c,"xKEY_PGDN",mrb_fixnum_value(xKEY_PGDN));

	mrb_define_module_function(mrb,c,"CreateLine3D",mrb_xors3d_xCreateLine3D,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DOrigin",mrb_xors3d_xLine3DOrigin,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DAddNode",mrb_xors3d_xLine3DAddNode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DColor",mrb_xors3d_xLine3DColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DUseZBuffer",mrb_xors3d_xLine3DUseZBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DOriginX",mrb_xors3d_xLine3DOriginX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DOriginY",mrb_xors3d_xLine3DOriginY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DOriginZ",mrb_xors3d_xLine3DOriginZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DNodesCount",mrb_xors3d_xLine3DNodesCount,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DNodePosition",mrb_xors3d_xLine3DNodePosition,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DNodeX",mrb_xors3d_xLine3DNodeX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DNodeY",mrb_xors3d_xLine3DNodeY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DNodeZ",mrb_xors3d_xLine3DNodeZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DRed",mrb_xors3d_xLine3DRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DGreen",mrb_xors3d_xLine3DGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DBlue",mrb_xors3d_xLine3DBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line3DAlpha",mrb_xors3d_xLine3DAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetLine3DUseZBuffer",mrb_xors3d_xGetLine3DUseZBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteLine3DNode",mrb_xors3d_xDeleteLine3DNode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearLine3D",mrb_xors3d_xClearLine3D,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadBrush",mrb_xors3d_xLoadBrush,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateBrush",mrb_xors3d_xCreateBrush,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeBrush",mrb_xors3d_xFreeBrush,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushTexture",mrb_xors3d_xGetBrushTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BrushColor",mrb_xors3d_xBrushColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BrushAlpha",mrb_xors3d_xBrushAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BrushShininess",mrb_xors3d_xBrushShininess,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BrushBlend",mrb_xors3d_xBrushBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BrushFX",mrb_xors3d_xBrushFX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BrushTexture",mrb_xors3d_xBrushTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushName",mrb_xors3d_xGetBrushName,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BrushName",mrb_xors3d_xBrushName,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushAlpha",mrb_xors3d_xGetBrushAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushBlend",mrb_xors3d_xGetBrushBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushRed",mrb_xors3d_xGetBrushRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushGreen",mrb_xors3d_xGetBrushGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushBlue",mrb_xors3d_xGetBrushBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushFX",mrb_xors3d_xGetBrushFX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetBrushShininess",mrb_xors3d_xGetBrushShininess,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraFogMode",mrb_xors3d_xCameraFogMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraFogColor",mrb_xors3d_xCameraFogColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraFogRange",mrb_xors3d_xCameraFogRange,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraClsColor",mrb_xors3d_xCameraClsColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraProjMode",mrb_xors3d_xCameraProjMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraClsMode",mrb_xors3d_xCameraClsMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SphereInFrustum",mrb_xors3d_xSphereInFrustum,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraClipPlane",mrb_xors3d_xCameraClipPlane,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraRange",mrb_xors3d_xCameraRange,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraViewport",mrb_xors3d_xCameraViewport,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraCropViewport",mrb_xors3d_xCameraCropViewport,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateCamera",mrb_xors3d_xCreateCamera,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraProject",mrb_xors3d_xCameraProject,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraProject2D",mrb_xors3d_xCameraProject2D,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ProjectedX",mrb_xors3d_xProjectedX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ProjectedY",mrb_xors3d_xProjectedY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ProjectedZ",mrb_xors3d_xProjectedZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetViewMatrix",mrb_xors3d_xGetViewMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetProjectionMatrix",mrb_xors3d_xGetProjectionMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraZoom",mrb_xors3d_xCameraZoom,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetViewProjMatrix",mrb_xors3d_xGetViewProjMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Collisions",mrb_xors3d_xCollisions,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearCollisions",mrb_xors3d_xClearCollisions,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ResetEntity",mrb_xors3d_xResetEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityRadius",mrb_xors3d_xEntityRadius,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityBox",mrb_xors3d_xEntityBox,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityType",mrb_xors3d_xEntityType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCollided",mrb_xors3d_xEntityCollided,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CountCollisions",mrb_xors3d_xCountCollisions,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionX",mrb_xors3d_xCollisionX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionY",mrb_xors3d_xCollisionY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionZ",mrb_xors3d_xCollisionZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionNX",mrb_xors3d_xCollisionNX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionNY",mrb_xors3d_xCollisionNY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionNZ",mrb_xors3d_xCollisionNZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionTime",mrb_xors3d_xCollisionTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionEntity",mrb_xors3d_xCollisionEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionSurface",mrb_xors3d_xCollisionSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CollisionTriangle",mrb_xors3d_xCollisionTriangle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityType",mrb_xors3d_xGetEntityType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RenderPostEffect",mrb_xors3d_xRenderPostEffect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreatePostEffectPoly",mrb_xors3d_xCreatePostEffectPoly,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetFunctionAddress",mrb_xors3d_xGetFunctionAddress,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadFXFile",mrb_xors3d_xLoadFXFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeEffect",mrb_xors3d_xFreeEffect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEntityEffect",mrb_xors3d_xSetEntityEffect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetSurfaceEffect",mrb_xors3d_xSetSurfaceEffect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetBonesArrayName",mrb_xors3d_xSetBonesArrayName,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceBonesArrayName",mrb_xors3d_xSurfaceBonesArrayName,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectInt",mrb_xors3d_xSetEffectInt,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectInt",mrb_xors3d_xSurfaceEffectInt,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectFloat",mrb_xors3d_xSetEffectFloat,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectFloat",mrb_xors3d_xSurfaceEffectFloat,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectBool",mrb_xors3d_xSetEffectBool,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectBool",mrb_xors3d_xSurfaceEffectBool,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectVector",mrb_xors3d_xSetEffectVector,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectVector",mrb_xors3d_xSurfaceEffectVector,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectVectorArray",mrb_xors3d_xSetEffectVectorArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectVectorArray",mrb_xors3d_xSurfaceEffectVectorArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectMatrixArray",mrb_xors3d_xSurfaceEffectMatrixArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectFloatArray",mrb_xors3d_xSurfaceEffectFloatArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectIntArray",mrb_xors3d_xSurfaceEffectIntArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectMatrixArray",mrb_xors3d_xSetEffectMatrixArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectFloatArray",mrb_xors3d_xSetEffectFloatArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectIntArray",mrb_xors3d_xSetEffectIntArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateBufferVectors",mrb_xors3d_xCreateBufferVectors,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferVectorsSetElement",mrb_xors3d_xBufferVectorsSetElement,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateBufferMatrix",mrb_xors3d_xCreateBufferMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferMatrixSetElement",mrb_xors3d_xBufferMatrixSetElement,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferMatrixGetElement",mrb_xors3d_xBufferMatrixGetElement,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateBufferFloats",mrb_xors3d_xCreateBufferFloats,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferFloatsSetElement",mrb_xors3d_xBufferFloatsSetElement,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferFloatsGetElement",mrb_xors3d_xBufferFloatsGetElement,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferDelete",mrb_xors3d_xBufferDelete,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectMatrixWithElements",mrb_xors3d_xSetEffectMatrixWithElements,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectMatrix",mrb_xors3d_xSetEffectMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectMatrix",mrb_xors3d_xSurfaceEffectMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectMatrixWithElements",mrb_xors3d_xSurfaceEffectMatrixWithElements,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectEntityTexture",mrb_xors3d_xSetEffectEntityTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectTexture",mrb_xors3d_xSetEffectTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectTexture",mrb_xors3d_xSurfaceEffectTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceEffectMatrixSemantic",mrb_xors3d_xSurfaceEffectMatrixSemantic,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectMatrixSemantic",mrb_xors3d_xSetEffectMatrixSemantic,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteSurfaceConstant",mrb_xors3d_xDeleteSurfaceConstant,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteEffectConstant",mrb_xors3d_xDeleteEffectConstant,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearSurfaceConstants",mrb_xors3d_xClearSurfaceConstants,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearEffectConstants",mrb_xors3d_xClearEffectConstants,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEffectTechnique",mrb_xors3d_xSetEffectTechnique,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceTechnique",mrb_xors3d_xSurfaceTechnique,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ValidateEffectTechnique",mrb_xors3d_xValidateEffectTechnique,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEntityShaderLayer",mrb_xors3d_xSetEntityShaderLayer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityShaderLayer",mrb_xors3d_xGetEntityShaderLayer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetSurfaceShaderLayer",mrb_xors3d_xSetSurfaceShaderLayer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetSurfaceShaderLayer",mrb_xors3d_xGetSurfaceShaderLayer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXInt",mrb_xors3d_xSetFXInt,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXFloat",mrb_xors3d_xSetFXFloat,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXBool",mrb_xors3d_xSetFXBool,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXVector",mrb_xors3d_xSetFXVector,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXVectorArray",mrb_xors3d_xSetFXVectorArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXMatrixArray",mrb_xors3d_xSetFXMatrixArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXFloatArray",mrb_xors3d_xSetFXFloatArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXIntArray",mrb_xors3d_xSetFXIntArray,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXEntityMatrix",mrb_xors3d_xSetFXEntityMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXTexture",mrb_xors3d_xSetFXTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXMatrixSemantic",mrb_xors3d_xSetFXMatrixSemantic,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteFXConstant",mrb_xors3d_xDeleteFXConstant,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearFXConstants",mrb_xors3d_xClearFXConstants,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFXTechnique",mrb_xors3d_xSetFXTechnique,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateEmitter",mrb_xors3d_xCreateEmitter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterEnable",mrb_xors3d_xEmitterEnable,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterEnabled",mrb_xors3d_xEmitterEnabled,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterGetPSystem",mrb_xors3d_xEmitterGetPSystem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterAddParticle",mrb_xors3d_xEmitterAddParticle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterFreeParticle",mrb_xors3d_xEmitterFreeParticle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterValidateParticle",mrb_xors3d_xEmitterValidateParticle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterCountParticles",mrb_xors3d_xEmitterCountParticles,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterGetParticle",mrb_xors3d_xEmitterGetParticle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitterAlive",mrb_xors3d_xEmitterAlive,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ExtractAnimSeq",mrb_xors3d_xExtractAnimSeq,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadAnimSeq",mrb_xors3d_xLoadAnimSeq,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetAnimSpeed",mrb_xors3d_xSetAnimSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AnimSpeed",mrb_xors3d_xAnimSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Animating",mrb_xors3d_xAnimating,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AnimTime",mrb_xors3d_xAnimTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Animate",mrb_xors3d_xAnimate,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AnimSeq",mrb_xors3d_xAnimSeq,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AnimLength",mrb_xors3d_xAnimLength,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetAnimTime",mrb_xors3d_xSetAnimTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetAnimFrame",mrb_xors3d_xSetAnimFrame,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAutoFade",mrb_xors3d_xEntityAutoFade,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityOrder",mrb_xors3d_xEntityOrder,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeEntity",mrb_xors3d_xFreeEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CopyEntity",mrb_xors3d_xCopyEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PaintEntity",mrb_xors3d_xPaintEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityShininess",mrb_xors3d_xEntityShininess,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityPickMode",mrb_xors3d_xEntityPickMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityTexture",mrb_xors3d_xEntityTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityFX",mrb_xors3d_xEntityFX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetParent",mrb_xors3d_xGetParent,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFrustumSphere",mrb_xors3d_xSetFrustumSphere,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CalculateFrustumVolume",mrb_xors3d_xCalculateFrustumVolume,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityParent",mrb_xors3d_xEntityParent,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ShowEntity",mrb_xors3d_xShowEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"HideEntity",mrb_xors3d_xHideEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"NameEntity",mrb_xors3d_xNameEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEntityQuaternion",mrb_xors3d_xSetEntityQuaternion,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEntityMatrix",mrb_xors3d_xSetEntityMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAlpha",mrb_xors3d_xEntityAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityColor",mrb_xors3d_xEntityColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySpecularColor",mrb_xors3d_xEntitySpecularColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAmbientColor",mrb_xors3d_xEntityAmbientColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityEmissiveColor",mrb_xors3d_xEntityEmissiveColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityBlend",mrb_xors3d_xEntityBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAlphaRef",mrb_xors3d_xEntityAlphaRef,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAlphaFunc",mrb_xors3d_xEntityAlphaFunc,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateInstance",mrb_xors3d_xCreateInstance,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreezeInstances",mrb_xors3d_xFreezeInstances,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"InstancingAvaliable",mrb_xors3d_xInstancingAvaliable,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityWorld",mrb_xors3d_xGetEntityWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEntityWorld",mrb_xors3d_xSetEntityWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ScaleEntity",mrb_xors3d_xScaleEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PositionEntity",mrb_xors3d_xPositionEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MoveEntity",mrb_xors3d_xMoveEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TranslateEntity",mrb_xors3d_xTranslateEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RotateEntity",mrb_xors3d_xRotateEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TurnEntity",mrb_xors3d_xTurnEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PointEntity",mrb_xors3d_xPointEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AlignToVector",mrb_xors3d_xAlignToVector,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityDistance",mrb_xors3d_xEntityDistance,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMatElement",mrb_xors3d_xGetMatElement,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityClass",mrb_xors3d_xEntityClass,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityBrush",mrb_xors3d_xGetEntityBrush,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityX",mrb_xors3d_xEntityX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityY",mrb_xors3d_xEntityY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityZ",mrb_xors3d_xEntityZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityVisible",mrb_xors3d_xEntityVisible,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityScaleX",mrb_xors3d_xEntityScaleX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityScaleY",mrb_xors3d_xEntityScaleY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityScaleZ",mrb_xors3d_xEntityScaleZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityRoll",mrb_xors3d_xEntityRoll,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityYaw",mrb_xors3d_xEntityYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityPitch",mrb_xors3d_xEntityPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityName",mrb_xors3d_xEntityName,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CountChildren",mrb_xors3d_xCountChildren,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetChild",mrb_xors3d_xGetChild,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityInView",mrb_xors3d_xEntityInView,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FindChild",mrb_xors3d_xFindChild,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityMatrix",mrb_xors3d_xGetEntityMatrix,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityAlpha",mrb_xors3d_xGetEntityAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetAlphaRef",mrb_xors3d_xGetAlphaRef,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetAlphaFunc",mrb_xors3d_xGetAlphaFunc,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityRed",mrb_xors3d_xEntityRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGreen",mrb_xors3d_xEntityGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityBlue",mrb_xors3d_xEntityBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityShininess",mrb_xors3d_xGetEntityShininess,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityBlend",mrb_xors3d_xGetEntityBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEntityFX",mrb_xors3d_xGetEntityFX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityHidden",mrb_xors3d_xEntityHidden,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitiesBBIntersect",mrb_xors3d_xEntitiesBBIntersect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MountPackFile",mrb_xors3d_xMountPackFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"UnmountPackFile",mrb_xors3d_xUnmountPackFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"OpenFile",mrb_xors3d_xOpenFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadFile",mrb_xors3d_xReadFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WriteFile",mrb_xors3d_xWriteFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CloseFile",mrb_xors3d_xCloseFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FilePos",mrb_xors3d_xFilePos,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SeekFile",mrb_xors3d_xSeekFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FileType",mrb_xors3d_xFileType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FileSize",mrb_xors3d_xFileSize,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FileCreationTime",mrb_xors3d_xFileCreationTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FileCreationTimeStr",mrb_xors3d_xFileCreationTimeStr,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FileModificationTime",mrb_xors3d_xFileModificationTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FileModificationTimeStr",mrb_xors3d_xFileModificationTimeStr,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadDir",mrb_xors3d_xReadDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CloseDir",mrb_xors3d_xCloseDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"NextFile",mrb_xors3d_xNextFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CurrentDir",mrb_xors3d_xCurrentDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ChangeDir",mrb_xors3d_xChangeDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateDir",mrb_xors3d_xCreateDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteDir",mrb_xors3d_xDeleteDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CopyFile",mrb_xors3d_xCopyFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteFile",mrb_xors3d_xDeleteFile,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Eof",mrb_xors3d_xEof,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadByte",mrb_xors3d_xReadByte,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadShort",mrb_xors3d_xReadShort,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadInt",mrb_xors3d_xReadInt,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadFloat",mrb_xors3d_xReadFloat,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadString",mrb_xors3d_xReadString,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadLine",mrb_xors3d_xReadLine,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WriteByte",mrb_xors3d_xWriteByte,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WriteShort",mrb_xors3d_xWriteShort,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WriteInt",mrb_xors3d_xWriteInt,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WriteFloat",mrb_xors3d_xWriteFloat,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WriteString",mrb_xors3d_xWriteString,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WriteLine",mrb_xors3d_xWriteLine,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadFont",mrb_xors3d_xLoadFont,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Text",mrb_xors3d_xText,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetFont",mrb_xors3d_xSetFont,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeFont",mrb_xors3d_xFreeFont,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FontWidth",mrb_xors3d_xFontWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FontHeight",mrb_xors3d_xFontHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"StringWidth",mrb_xors3d_xStringWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"StringHeight",mrb_xors3d_xStringHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WinMessage",mrb_xors3d_xWinMessage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMaxPixelShaderVersion",mrb_xors3d_xGetMaxPixelShaderVersion,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Line",mrb_xors3d_xLine,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Rect",mrb_xors3d_xRect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RectsOverlap",mrb_xors3d_xRectsOverlap,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Viewport",mrb_xors3d_xViewport,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Oval",mrb_xors3d_xOval,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Origin",mrb_xors3d_xOrigin,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMaxVertexShaderVersion",mrb_xors3d_xGetMaxVertexShaderVersion,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMaxAntiAlias",mrb_xors3d_xGetMaxAntiAlias,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMaxTextureFiltering",mrb_xors3d_xGetMaxTextureFiltering,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetAntiAliasType",mrb_xors3d_xSetAntiAliasType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AppTitle",mrb_xors3d_xAppTitle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetWND",mrb_xors3d_xSetWND,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetRenderWindow",mrb_xors3d_xSetRenderWindow,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetTopWindow",mrb_xors3d_xSetTopWindow,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DestroyRenderWindow",mrb_xors3d_xDestroyRenderWindow,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Flip",mrb_xors3d_xFlip,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BackBuffer",mrb_xors3d_xBackBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LockBuffer",mrb_xors3d_xLockBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"UnlockBuffer",mrb_xors3d_xUnlockBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WritePixelFast",mrb_xors3d_xWritePixelFast,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadPixelFast",mrb_xors3d_xReadPixelFast,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetPixels",mrb_xors3d_xGetPixels,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SaveBuffer",mrb_xors3d_xSaveBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetCurrentBuffer",mrb_xors3d_xGetCurrentBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferWidth",mrb_xors3d_xBufferWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"BufferHeight",mrb_xors3d_xBufferHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CatchTimestamp",mrb_xors3d_xCatchTimestamp,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetElapsedTime",mrb_xors3d_xGetElapsedTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetBuffer",mrb_xors3d_xSetBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetMRT",mrb_xors3d_xSetMRT,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"UnSetMRT",mrb_xors3d_xUnSetMRT,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetNumberRT",mrb_xors3d_xGetNumberRT,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureBuffer",mrb_xors3d_xTextureBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadBuffer",mrb_xors3d_xLoadBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WritePixel",mrb_xors3d_xWritePixel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CopyPixel",mrb_xors3d_xCopyPixel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CopyPixelFast",mrb_xors3d_xCopyPixelFast,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CopyRect",mrb_xors3d_xCopyRect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GraphicsBuffer",mrb_xors3d_xGraphicsBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetColor",mrb_xors3d_xGetColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReadPixel",mrb_xors3d_xReadPixel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GraphicsWidth",mrb_xors3d_xGraphicsWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GraphicsHeight",mrb_xors3d_xGraphicsHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GraphicsDepth",mrb_xors3d_xGraphicsDepth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ColorAlpha",mrb_xors3d_xColorAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ColorRed",mrb_xors3d_xColorRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ColorGreen",mrb_xors3d_xColorGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ColorBlue",mrb_xors3d_xColorBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClsColor",mrb_xors3d_xClsColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearWorld",mrb_xors3d_xClearWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Color",mrb_xors3d_xColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Cls",mrb_xors3d_xCls,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"UpdateWorld",mrb_xors3d_xUpdateWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RenderEntity",mrb_xors3d_xRenderEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RenderWorld",mrb_xors3d_xRenderWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetAutoTB",mrb_xors3d_xSetAutoTB,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MaxClipPlanes",mrb_xors3d_xMaxClipPlanes,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Wireframe",mrb_xors3d_xWireframe,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Dither",mrb_xors3d_xDither,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetSkinningMethod",mrb_xors3d_xSetSkinningMethod,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TrisRendered",mrb_xors3d_xTrisRendered,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DIPCounter",mrb_xors3d_xDIPCounter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfRendered",mrb_xors3d_xSurfRendered,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityRendered",mrb_xors3d_xEntityRendered,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AmbientLight",mrb_xors3d_xAmbientLight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetFPS",mrb_xors3d_xGetFPS,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AntiAlias",mrb_xors3d_xAntiAlias,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetTextureFiltering",mrb_xors3d_xSetTextureFiltering,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"StretchRect",mrb_xors3d_xStretchRect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"StretchBackBuffer",mrb_xors3d_xStretchBackBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetDevice",mrb_xors3d_xGetDevice,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ReleaseGraphics",mrb_xors3d_xReleaseGraphics,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ShowPointer",mrb_xors3d_xShowPointer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"HidePointer",mrb_xors3d_xHidePointer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateDSS",mrb_xors3d_xCreateDSS,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteDSS",mrb_xors3d_xDeleteDSS,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GridColor",mrb_xors3d_xGridColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawGrid",mrb_xors3d_xDrawGrid,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawBBox",mrb_xors3d_xDrawBBox,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Graphics3D",mrb_xors3d_xGraphics3D,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GraphicsAspectRatio",mrb_xors3d_xGraphicsAspectRatio,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GraphicsBorderColor",mrb_xors3d_xGraphicsBorderColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetRenderWindow",mrb_xors3d_xGetRenderWindow,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Key",mrb_xors3d_xKey,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetEngineSetting",mrb_xors3d_xSetEngineSetting,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetEngineSetting",mrb_xors3d_xGetEngineSetting,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"HWInstancingAvailable",mrb_xors3d_xHWInstancingAvailable,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ShaderInstancingAvailable",mrb_xors3d_xShaderInstancingAvailable,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetShaderLayer",mrb_xors3d_xSetShaderLayer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetShaderLayer",mrb_xors3d_xGetShaderLayer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawMovementGizmo",mrb_xors3d_xDrawMovementGizmo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawScaleGizmo",mrb_xors3d_xDrawScaleGizmo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawRotationGizmo",mrb_xors3d_xDrawRotationGizmo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CheckMovementGizmo",mrb_xors3d_xCheckMovementGizmo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CheckScaleGizmo",mrb_xors3d_xCheckScaleGizmo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CheckRotationGizmo",mrb_xors3d_xCheckRotationGizmo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CaptureWorld",mrb_xors3d_xCaptureWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CountGfxModes",mrb_xors3d_xCountGfxModes,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GfxModeWidth",mrb_xors3d_xGfxModeWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GfxModeHeight",mrb_xors3d_xGfxModeHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GfxModeDepth",mrb_xors3d_xGfxModeDepth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GfxModeExists",mrb_xors3d_xGfxModeExists,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AppWindowFrame",mrb_xors3d_xAppWindowFrame,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Millisecs",mrb_xors3d_xMillisecs,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeltaTime",mrb_xors3d_xDeltaTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeltaValue",mrb_xors3d_xDeltaValue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AddDeviceLostCallback",mrb_xors3d_xAddDeviceLostCallback,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteDeviceLostCallback",mrb_xors3d_xDeleteDeviceLostCallback,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Deinit",mrb_xors3d_xDeinit,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageColor",mrb_xors3d_xImageColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageAlpha",mrb_xors3d_xImageAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageBuffer",mrb_xors3d_xImageBuffer,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateImage",mrb_xors3d_xCreateImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GrabImage",mrb_xors3d_xGrabImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeImage",mrb_xors3d_xFreeImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadImage",mrb_xors3d_xLoadImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadAnimImage",mrb_xors3d_xLoadAnimImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SaveImage",mrb_xors3d_xSaveImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawImage",mrb_xors3d_xDrawImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawImageRect",mrb_xors3d_xDrawImageRect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ScaleImage",mrb_xors3d_xScaleImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ResizeImage",mrb_xors3d_xResizeImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RotateImage",mrb_xors3d_xRotateImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageAngle",mrb_xors3d_xImageAngle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageWidth",mrb_xors3d_xImageWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageHeight",mrb_xors3d_xImageHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImagesCollide",mrb_xors3d_xImagesCollide,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageRectCollide",mrb_xors3d_xImageRectCollide,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageRectOverlap",mrb_xors3d_xImageRectOverlap,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageXHandle",mrb_xors3d_xImageXHandle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageYHandle",mrb_xors3d_xImageYHandle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"HandleImage",mrb_xors3d_xHandleImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MidHandle",mrb_xors3d_xMidHandle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AutoMidHandle",mrb_xors3d_xAutoMidHandle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TileImage",mrb_xors3d_xTileImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImagesOverlap",mrb_xors3d_xImagesOverlap,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MaskImage",mrb_xors3d_xMaskImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CopyImage",mrb_xors3d_xCopyImage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawBlock",mrb_xors3d_xDrawBlock,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawBlockRect",mrb_xors3d_xDrawBlockRect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageActualWidth",mrb_xors3d_xImageActualWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ImageActualHeight",mrb_xors3d_xImageActualHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FlushKeys",mrb_xors3d_xFlushKeys,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FlushMouse",mrb_xors3d_xFlushMouse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"KeyHit",mrb_xors3d_xKeyHit,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"KeyUp",mrb_xors3d_xKeyUp,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WaitKey",mrb_xors3d_xWaitKey,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseHit",mrb_xors3d_xMouseHit,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"KeyDown",mrb_xors3d_xKeyDown,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetKey",mrb_xors3d_xGetKey,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseDown",mrb_xors3d_xMouseDown,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseUp",mrb_xors3d_xMouseUp,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMouse",mrb_xors3d_xGetMouse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseX",mrb_xors3d_xMouseX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseY",mrb_xors3d_xMouseY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseZ",mrb_xors3d_xMouseZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseXSpeed",mrb_xors3d_xMouseXSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseYSpeed",mrb_xors3d_xMouseYSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseZSpeed",mrb_xors3d_xMouseZSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MouseSpeed",mrb_xors3d_xMouseSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MoveMouse",mrb_xors3d_xMoveMouse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyType",mrb_xors3d_xJoyType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyDown",mrb_xors3d_xJoyDown,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyHit",mrb_xors3d_xJoyHit,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetJoy",mrb_xors3d_xGetJoy,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FlushJoy",mrb_xors3d_xFlushJoy,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WaitJoy",mrb_xors3d_xWaitJoy,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyX",mrb_xors3d_xJoyX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyY",mrb_xors3d_xJoyY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyZ",mrb_xors3d_xJoyZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyU",mrb_xors3d_xJoyU,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyV",mrb_xors3d_xJoyV,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyPitch",mrb_xors3d_xJoyPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyYaw",mrb_xors3d_xJoyYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyRoll",mrb_xors3d_xJoyRoll,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyHat",mrb_xors3d_xJoyHat,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyXDir",mrb_xors3d_xJoyXDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyYDir",mrb_xors3d_xJoyYDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyZDir",mrb_xors3d_xJoyZDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyUDir",mrb_xors3d_xJoyUDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JoyVDir",mrb_xors3d_xJoyVDir,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CountJoys",mrb_xors3d_xCountJoys,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateLight",mrb_xors3d_xCreateLight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LightShadowEpsilons",mrb_xors3d_xLightShadowEpsilons,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LightEnableShadows",mrb_xors3d_xLightEnableShadows,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LightShadowsEnabled",mrb_xors3d_xLightShadowsEnabled,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LightRange",mrb_xors3d_xLightRange,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LightColor",mrb_xors3d_xLightColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LightConeAngles",mrb_xors3d_xLightConeAngles,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateLog",mrb_xors3d_xCreateLog,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CloseLog",mrb_xors3d_xCloseLog,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetLogString",mrb_xors3d_xGetLogString,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearLogString",mrb_xors3d_xClearLogString,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetLogLevel",mrb_xors3d_xSetLogLevel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetLogTarget",mrb_xors3d_xSetLogTarget,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetLogLevel",mrb_xors3d_xGetLogLevel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetLogTarget",mrb_xors3d_xGetLogTarget,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LogInfo",mrb_xors3d_xLogInfo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LogMessage",mrb_xors3d_xLogMessage,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LogWarning",mrb_xors3d_xLogWarning,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LogError",mrb_xors3d_xLogError,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LogFatal",mrb_xors3d_xLogFatal,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateMesh",mrb_xors3d_xCreateMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadMesh",mrb_xors3d_xLoadMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadMeshWithChild",mrb_xors3d_xLoadMeshWithChild,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadAnimMesh",mrb_xors3d_xLoadAnimMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateCube",mrb_xors3d_xCreateCube,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateSphere",mrb_xors3d_xCreateSphere,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateCylinder",mrb_xors3d_xCreateCylinder,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateTorus",mrb_xors3d_xCreateTorus,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateCone",mrb_xors3d_xCreateCone,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CopyMesh",mrb_xors3d_xCopyMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AddMesh",mrb_xors3d_xAddMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FlipMesh",mrb_xors3d_xFlipMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PaintMesh",mrb_xors3d_xPaintMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FitMesh",mrb_xors3d_xFitMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MeshWidth",mrb_xors3d_xMeshWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MeshHeight",mrb_xors3d_xMeshHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MeshDepth",mrb_xors3d_xMeshDepth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ScaleMesh",mrb_xors3d_xScaleMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RotateMesh",mrb_xors3d_xRotateMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PositionMesh",mrb_xors3d_xPositionMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"UpdateNormals",mrb_xors3d_xUpdateNormals,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"UpdateN",mrb_xors3d_xUpdateN,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"UpdateTB",mrb_xors3d_xUpdateTB,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MeshesBBIntersect",mrb_xors3d_xMeshesBBIntersect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MeshesIntersect",mrb_xors3d_xMeshesIntersect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMeshVB",mrb_xors3d_xGetMeshVB,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMeshIB",mrb_xors3d_xGetMeshIB,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMeshVBSize",mrb_xors3d_xGetMeshVBSize,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetMeshIBSize",mrb_xors3d_xGetMeshIBSize,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteMeshVB",mrb_xors3d_xDeleteMeshVB,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteMeshIB",mrb_xors3d_xDeleteMeshIB,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CountSurfaces",mrb_xors3d_xCountSurfaces,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetSurface",mrb_xors3d_xGetSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreatePivot",mrb_xors3d_xCreatePivot,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FindSurface",mrb_xors3d_xFindSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreatePoly",mrb_xors3d_xCreatePoly,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MeshSingleSurface",mrb_xors3d_xMeshSingleSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SaveMesh",mrb_xors3d_xSaveMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LightMesh",mrb_xors3d_xLightMesh,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MeshPrimitiveType",mrb_xors3d_xMeshPrimitiveType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticlePosition",mrb_xors3d_xParticlePosition,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleX",mrb_xors3d_xParticleX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleY",mrb_xors3d_xParticleY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleZ",mrb_xors3d_xParticleZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleVeclocity",mrb_xors3d_xParticleVeclocity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleVX",mrb_xors3d_xParticleVX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleVY",mrb_xors3d_xParticleVY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleVZ",mrb_xors3d_xParticleVZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleRotation",mrb_xors3d_xParticleRotation,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticlePitch",mrb_xors3d_xParticlePitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleYaw",mrb_xors3d_xParticleYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleRoll",mrb_xors3d_xParticleRoll,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleTorque",mrb_xors3d_xParticleTorque,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleTPitch",mrb_xors3d_xParticleTPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleTYaw",mrb_xors3d_xParticleTYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleTRoll",mrb_xors3d_xParticleTRoll,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleSetAlpha",mrb_xors3d_xParticleSetAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleGetAlpha",mrb_xors3d_xParticleGetAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleColor",mrb_xors3d_xParticleColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleRed",mrb_xors3d_xParticleRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleGreen",mrb_xors3d_xParticleGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleBlue",mrb_xors3d_xParticleBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleScale",mrb_xors3d_xParticleScale,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleSX",mrb_xors3d_xParticleSX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleSY",mrb_xors3d_xParticleSY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleScaleSpeed",mrb_xors3d_xParticleScaleSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleScaleSpeedX",mrb_xors3d_xParticleScaleSpeedX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ParticleScaleSpeedY",mrb_xors3d_xParticleScaleSpeedY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddDummyShape",mrb_xors3d_xEntityAddDummyShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddBoxShape",mrb_xors3d_xEntityAddBoxShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddSphereShape",mrb_xors3d_xEntityAddSphereShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddCapsuleShape",mrb_xors3d_xEntityAddCapsuleShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddConeShape",mrb_xors3d_xEntityAddConeShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddCylinderShape",mrb_xors3d_xEntityAddCylinderShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddTriMeshShape",mrb_xors3d_xEntityAddTriMeshShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddTriMeshShapeProxy",mrb_xors3d_xEntityAddTriMeshShapeProxy,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddConvexShape",mrb_xors3d_xEntityAddConvexShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddConvexShapeProxy",mrb_xors3d_xEntityAddConvexShapeProxy,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddConcaveShape",mrb_xors3d_xEntityAddConcaveShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddConcaveShapeProxy",mrb_xors3d_xEntityAddConcaveShapeProxy,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddTerrainShape",mrb_xors3d_xEntityAddTerrainShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAttachBody",mrb_xors3d_xEntityAttachBody,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityDetachBody",mrb_xors3d_xEntityDetachBody,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeEntityBody",mrb_xors3d_xFreeEntityBody,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddCompoundShape",mrb_xors3d_xEntityAddCompoundShape,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundAddBox",mrb_xors3d_xEntityCompoundAddBox,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundAddSphere",mrb_xors3d_xEntityCompoundAddSphere,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundAddCapsule",mrb_xors3d_xEntityCompoundAddCapsule,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundAddCone",mrb_xors3d_xEntityCompoundAddCone,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundAddCylinder",mrb_xors3d_xEntityCompoundAddCylinder,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundCountChildren",mrb_xors3d_xEntityCompoundCountChildren,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundRemoveChild",mrb_xors3d_xEntityCompoundRemoveChild,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildSetPosition",mrb_xors3d_xEntityCompoundChildSetPosition,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildGetX",mrb_xors3d_xEntityCompoundChildGetX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildGetY",mrb_xors3d_xEntityCompoundChildGetY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildGetZ",mrb_xors3d_xEntityCompoundChildGetZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildSetRotation",mrb_xors3d_xEntityCompoundChildSetRotation,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildGetPitch",mrb_xors3d_xEntityCompoundChildGetPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildGetYaw",mrb_xors3d_xEntityCompoundChildGetYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCompoundChildGetRoll",mrb_xors3d_xEntityCompoundChildGetRoll,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateHingeJoint",mrb_xors3d_xCreateHingeJoint,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateBallJoint",mrb_xors3d_xCreateBallJoint,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateD6Joint",mrb_xors3d_xCreateD6Joint,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateD6SpringJoint",mrb_xors3d_xCreateD6SpringJoint,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointHingeGetAngle",mrb_xors3d_xJointHingeGetAngle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetPitchAngle",mrb_xors3d_xJointD6GetPitchAngle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetYawAngle",mrb_xors3d_xJointD6GetYawAngle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetRollAngle",mrb_xors3d_xJointD6GetRollAngle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetAngle",mrb_xors3d_xJointD6GetAngle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointDisableCollisions",mrb_xors3d_xJointDisableCollisions,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointEnable",mrb_xors3d_xJointEnable,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointIsEnabled",mrb_xors3d_xJointIsEnabled,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointGetImpulse",mrb_xors3d_xJointGetImpulse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeJoint",mrb_xors3d_xFreeJoint,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointBallSetPivot",mrb_xors3d_xJointBallSetPivot,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointBallGetPivotX",mrb_xors3d_xJointBallGetPivotX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointBallGetPivotY",mrb_xors3d_xJointBallGetPivotY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointBallGetPivotZ",mrb_xors3d_xJointBallGetPivotZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SetLimits",mrb_xors3d_xJointD6SetLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SetLowerLinearLimits",mrb_xors3d_xJointD6SetLowerLinearLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SetUpperLinearLimits",mrb_xors3d_xJointD6SetUpperLinearLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SetLowerAngularLimits",mrb_xors3d_xJointD6SetLowerAngularLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SetUpperAngularLimits",mrb_xors3d_xJointD6SetUpperAngularLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SetLinearLimits",mrb_xors3d_xJointD6SetLinearLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SetAngularLimits",mrb_xors3d_xJointD6SetAngularLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetLinearLowerX",mrb_xors3d_xJointD6GetLinearLowerX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetLinearLowerY",mrb_xors3d_xJointD6GetLinearLowerY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetLinearLowerZ",mrb_xors3d_xJointD6GetLinearLowerZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetLinearUpperX",mrb_xors3d_xJointD6GetLinearUpperX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetLinearUpperY",mrb_xors3d_xJointD6GetLinearUpperY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetLinearUpperZ",mrb_xors3d_xJointD6GetLinearUpperZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetAngularLowerX",mrb_xors3d_xJointD6GetAngularLowerX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetAngularLowerY",mrb_xors3d_xJointD6GetAngularLowerY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetAngularLowerZ",mrb_xors3d_xJointD6GetAngularLowerZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetAngularUpperX",mrb_xors3d_xJointD6GetAngularUpperX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetAngularUpperY",mrb_xors3d_xJointD6GetAngularUpperY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6GetAngularUpperZ",mrb_xors3d_xJointD6GetAngularUpperZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointD6SpringSetParam",mrb_xors3d_xJointD6SpringSetParam,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointHingeSetAxis",mrb_xors3d_xJointHingeSetAxis,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointHingeSetLimits",mrb_xors3d_xJointHingeSetLimits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointHingeGetLowerLimit",mrb_xors3d_xJointHingeGetLowerLimit,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointHingeGetUpperLimit",mrb_xors3d_xJointHingeGetUpperLimit,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointEnableMotor",mrb_xors3d_xJointEnableMotor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointHingeSetMotorTarget",mrb_xors3d_xJointHingeSetMotorTarget,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointGetEntityA",mrb_xors3d_xJointGetEntityA,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"JointGetEntityB",mrb_xors3d_xJointGetEntityB,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityApplyCentralForce",mrb_xors3d_xEntityApplyCentralForce,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityApplyCentralImpulse",mrb_xors3d_xEntityApplyCentralImpulse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityApplyTorque",mrb_xors3d_xEntityApplyTorque,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityApplyTorqueImpulse",mrb_xors3d_xEntityApplyTorqueImpulse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityApplyForce",mrb_xors3d_xEntityApplyForce,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityApplyImpulse",mrb_xors3d_xEntityApplyImpulse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityReleaseForces",mrb_xors3d_xEntityReleaseForces,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WorldSetGravity",mrb_xors3d_xWorldSetGravity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WorldGetGravityX",mrb_xors3d_xWorldGetGravityX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WorldGetGravityY",mrb_xors3d_xWorldGetGravityY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WorldGetGravityZ",mrb_xors3d_xWorldGetGravityZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetGravity",mrb_xors3d_xEntitySetGravity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetGravityX",mrb_xors3d_xEntityGetGravityX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetGravityY",mrb_xors3d_xEntityGetGravityY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetGravityZ",mrb_xors3d_xEntityGetGravityZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetLinearVelocity",mrb_xors3d_xEntitySetLinearVelocity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearVelocityX",mrb_xors3d_xEntityGetLinearVelocityX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearVelocityY",mrb_xors3d_xEntityGetLinearVelocityY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearVelocityZ",mrb_xors3d_xEntityGetLinearVelocityZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetAngularVelocity",mrb_xors3d_xEntitySetAngularVelocity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularVelocityX",mrb_xors3d_xEntityGetAngularVelocityX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularVelocityY",mrb_xors3d_xEntityGetAngularVelocityY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularVelocityZ",mrb_xors3d_xEntityGetAngularVelocityZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetDamping",mrb_xors3d_xEntitySetDamping,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearDamping",mrb_xors3d_xEntityGetLinearDamping,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularDamping",mrb_xors3d_xEntityGetAngularDamping,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetFriction",mrb_xors3d_xEntitySetFriction,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetFriction",mrb_xors3d_xEntityGetFriction,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetAnisotropicFriction",mrb_xors3d_xEntitySetAnisotropicFriction,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAnisotropicFrictionX",mrb_xors3d_xEntityGetAnisotropicFrictionX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAnisotropicFrictionY",mrb_xors3d_xEntityGetAnisotropicFrictionY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAnisotropicFrictionZ",mrb_xors3d_xEntityGetAnisotropicFrictionZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetLinearFactor",mrb_xors3d_xEntitySetLinearFactor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearFactorX",mrb_xors3d_xEntityGetLinearFactorX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearFactorY",mrb_xors3d_xEntityGetLinearFactorY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearFactorZ",mrb_xors3d_xEntityGetLinearFactorZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetAngularFactor",mrb_xors3d_xEntitySetAngularFactor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularFactorX",mrb_xors3d_xEntityGetAngularFactorX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularFactorY",mrb_xors3d_xEntityGetAngularFactorY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularFactorZ",mrb_xors3d_xEntityGetAngularFactorZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetRestitution",mrb_xors3d_xEntitySetRestitution,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetRestitution",mrb_xors3d_xEntityGetRestitution,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetMass",mrb_xors3d_xEntitySetMass,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetMass",mrb_xors3d_xEntityGetMass,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCountContacts",mrb_xors3d_xEntityCountContacts,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactX",mrb_xors3d_xEntityGetContactX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactY",mrb_xors3d_xEntityGetContactY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactZ",mrb_xors3d_xEntityGetContactZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactNX",mrb_xors3d_xEntityGetContactNX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactNY",mrb_xors3d_xEntityGetContactNY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactNZ",mrb_xors3d_xEntityGetContactNZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactDistance",mrb_xors3d_xEntityGetContactDistance,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContact",mrb_xors3d_xEntityGetContact,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactImpulse",mrb_xors3d_xEntityGetContactImpulse,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetCollisionGroup",mrb_xors3d_xEntitySetCollisionGroup,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetCollisionGroup",mrb_xors3d_xEntityGetCollisionGroup,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetContactGroup",mrb_xors3d_xEntitySetContactGroup,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetContactGroup",mrb_xors3d_xEntityGetContactGroup,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetRaycastGroup",mrb_xors3d_xEntitySetRaycastGroup,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetRaycastGroup",mrb_xors3d_xEntityGetRaycastGroup,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsSetCollisionFilter",mrb_xors3d_xPhysicsSetCollisionFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetCollisionFilter",mrb_xors3d_xPhysicsGetCollisionFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsSetContactFilter",mrb_xors3d_xPhysicsSetContactFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetContactFilter",mrb_xors3d_xPhysicsGetContactFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsSetRaycastFilter",mrb_xors3d_xPhysicsSetRaycastFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetRaycastFilter",mrb_xors3d_xPhysicsGetRaycastFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityIsSleeping",mrb_xors3d_xEntityIsSleeping,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityDisableSleeping",mrb_xors3d_xEntityDisableSleeping,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWakeUp",mrb_xors3d_xEntityWakeUp,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySleep",mrb_xors3d_xEntitySleep,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntitySetSleepingThresholds",mrb_xors3d_xEntitySetSleepingThresholds,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetLinearSleepingThreshold",mrb_xors3d_xEntityGetLinearSleepingThreshold,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityGetAngularSleepingThreshold",mrb_xors3d_xEntityGetAngularSleepingThreshold,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsRayCast",mrb_xors3d_xPhysicsRayCast,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitEntity",mrb_xors3d_xPhysicsGetHitEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitPointX",mrb_xors3d_xPhysicsGetHitPointX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitPointY",mrb_xors3d_xPhysicsGetHitPointY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitPointZ",mrb_xors3d_xPhysicsGetHitPointZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitNormalX",mrb_xors3d_xPhysicsGetHitNormalX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitNormalY",mrb_xors3d_xPhysicsGetHitNormalY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitNormalZ",mrb_xors3d_xPhysicsGetHitNormalZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsGetHitDistance",mrb_xors3d_xPhysicsGetHitDistance,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsCountHits",mrb_xors3d_xPhysicsCountHits,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityBodyLocalPosition",mrb_xors3d_xEntityBodyLocalPosition,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityBodyLocalRotation",mrb_xors3d_xEntityBodyLocalRotation,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityBodyLocalScale",mrb_xors3d_xEntityBodyLocalScale,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"WorldSetFrequency",mrb_xors3d_xWorldSetFrequency,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityMakeKinematic",mrb_xors3d_xEntityMakeKinematic,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityIsKinematic",mrb_xors3d_xEntityIsKinematic,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PhysicsDebugRender",mrb_xors3d_xPhysicsDebugRender,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityDisableSimulation",mrb_xors3d_xEntityDisableSimulation,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityHasBody",mrb_xors3d_xEntityHasBody,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCreateVehicle",mrb_xors3d_xEntityCreateVehicle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityFreeVehicle",mrb_xors3d_xEntityFreeVehicle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCountWheels",mrb_xors3d_xEntityCountWheels,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityAddWheel",mrb_xors3d_xEntityAddWheel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetRadius",mrb_xors3d_xEntityWheelSetRadius,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetAxle",mrb_xors3d_xEntityWheelSetAxle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetRay",mrb_xors3d_xEntityWheelSetRay,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetSuspensionLength",mrb_xors3d_xEntityWheelSetSuspensionLength,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetBrake",mrb_xors3d_xEntityWheelSetBrake,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetMaxSuspensionForce",mrb_xors3d_xEntityWheelSetMaxSuspensionForce,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetMaxSuspensionTravel",mrb_xors3d_xEntityWheelSetMaxSuspensionTravel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetSuspensionStiffness",mrb_xors3d_xEntityWheelSetSuspensionStiffness,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetSuspensionDamping",mrb_xors3d_xEntityWheelSetSuspensionDamping,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetSuspensionCompression",mrb_xors3d_xEntityWheelSetSuspensionCompression,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetFriction",mrb_xors3d_xEntityWheelSetFriction,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetEngineForce",mrb_xors3d_xEntityWheelSetEngineForce,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetRollInfluence",mrb_xors3d_xEntityWheelSetRollInfluence,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetRotation",mrb_xors3d_xEntityWheelSetRotation,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetSteering",mrb_xors3d_xEntityWheelSetSteering,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelSetConnectionPoint",mrb_xors3d_xEntityWheelSetConnectionPoint,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelGetSuspensionLength",mrb_xors3d_xEntityWheelGetSuspensionLength,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelGetPitch",mrb_xors3d_xEntityWheelGetPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelGetYaw",mrb_xors3d_xEntityWheelGetYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelGetRoll",mrb_xors3d_xEntityWheelGetRoll,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityWheelGetContactEntity",mrb_xors3d_xEntityWheelGetContactEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadPostEffect",mrb_xors3d_xLoadPostEffect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreePostEffect",mrb_xors3d_xFreePostEffect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetPostEffect",mrb_xors3d_xSetPostEffect,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RenderPostEffects",mrb_xors3d_xRenderPostEffects,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetPostEffectInt",mrb_xors3d_xSetPostEffectInt,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetPostEffectFloat",mrb_xors3d_xSetPostEffectFloat,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetPostEffectBool",mrb_xors3d_xSetPostEffectBool,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetPostEffectVector",mrb_xors3d_xSetPostEffectVector,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetPostEffectTexture",mrb_xors3d_xSetPostEffectTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeletePostEffectConstant",mrb_xors3d_xDeletePostEffectConstant,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearPostEffectConstants",mrb_xors3d_xClearPostEffectConstants,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreatePSystem",mrb_xors3d_xCreatePSystem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemType",mrb_xors3d_xPSystemType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetBlend",mrb_xors3d_xPSystemSetBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetBlend",mrb_xors3d_xPSystemGetBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetMaxParticles",mrb_xors3d_xPSystemSetMaxParticles,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetMaxParticles",mrb_xors3d_xPSystemGetMaxParticles,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetEmitterLifetime",mrb_xors3d_xPSystemSetEmitterLifetime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetEmitterLifetime",mrb_xors3d_xPSystemGetEmitterLifetime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetParticleLifetime",mrb_xors3d_xPSystemSetParticleLifetime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetParticleLifetime",mrb_xors3d_xPSystemGetParticleLifetime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetCreationInterval",mrb_xors3d_xPSystemSetCreationInterval,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetCreationInterval",mrb_xors3d_xPSystemGetCreationInterval,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetCreationFrequency",mrb_xors3d_xPSystemSetCreationFrequency,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetCreationFrequency",mrb_xors3d_xPSystemGetCreationFrequency,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetTexture",mrb_xors3d_xPSystemSetTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTexture",mrb_xors3d_xPSystemGetTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTextureFrames",mrb_xors3d_xPSystemGetTextureFrames,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTextureAnimationSpeed",mrb_xors3d_xPSystemGetTextureAnimationSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetOffset",mrb_xors3d_xPSystemSetOffset,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetOffsetMinX",mrb_xors3d_xPSystemGetOffsetMinX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetOffsetMinY",mrb_xors3d_xPSystemGetOffsetMinY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetOffsetMinZ",mrb_xors3d_xPSystemGetOffsetMinZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetOffsetMaxX",mrb_xors3d_xPSystemGetOffsetMaxX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetOffsetMaxY",mrb_xors3d_xPSystemGetOffsetMaxY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetOffsetMaxZ",mrb_xors3d_xPSystemGetOffsetMaxZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetVelocity",mrb_xors3d_xPSystemSetVelocity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetVelocityMinX",mrb_xors3d_xPSystemGetVelocityMinX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetVelocityMinY",mrb_xors3d_xPSystemGetVelocityMinY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetVelocityMinZ",mrb_xors3d_xPSystemGetVelocityMinZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetVelocityMaxX",mrb_xors3d_xPSystemGetVelocityMaxX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetVelocityMaxY",mrb_xors3d_xPSystemGetVelocityMaxY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetVelocityMaxZ",mrb_xors3d_xPSystemGetVelocityMaxZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemEnableFixedQuads",mrb_xors3d_xPSystemEnableFixedQuads,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemFixedQuadsUsed",mrb_xors3d_xPSystemFixedQuadsUsed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetTorque",mrb_xors3d_xPSystemSetTorque,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTorqueMinX",mrb_xors3d_xPSystemGetTorqueMinX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTorqueMinY",mrb_xors3d_xPSystemGetTorqueMinY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTorqueMinZ",mrb_xors3d_xPSystemGetTorqueMinZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTorqueMaxX",mrb_xors3d_xPSystemGetTorqueMaxX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTorqueMaxY",mrb_xors3d_xPSystemGetTorqueMaxY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetTorqueMaxZ",mrb_xors3d_xPSystemGetTorqueMaxZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetGravity",mrb_xors3d_xPSystemSetGravity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetGravity",mrb_xors3d_xPSystemGetGravity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetAlpha",mrb_xors3d_xPSystemSetAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetAlpha",mrb_xors3d_xPSystemGetAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetFadeSpeed",mrb_xors3d_xPSystemSetFadeSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetFadeSpeed",mrb_xors3d_xPSystemGetFadeSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetParticleSize",mrb_xors3d_xPSystemSetParticleSize,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetSizeMinX",mrb_xors3d_xPSystemGetSizeMinX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetSizeMinY",mrb_xors3d_xPSystemGetSizeMinY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetSizeMaxX",mrb_xors3d_xPSystemGetSizeMaxX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetSizeMaxY",mrb_xors3d_xPSystemGetSizeMaxY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetScaleSpeed",mrb_xors3d_xPSystemSetScaleSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetScaleSpeedMinX",mrb_xors3d_xPSystemGetScaleSpeedMinX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetScaleSpeedMinY",mrb_xors3d_xPSystemGetScaleSpeedMinY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetScaleSpeedMaxX",mrb_xors3d_xPSystemGetScaleSpeedMaxX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetScaleSpeedMaxY",mrb_xors3d_xPSystemGetScaleSpeedMaxY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetAngles",mrb_xors3d_xPSystemSetAngles,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetAnglesMinX",mrb_xors3d_xPSystemGetAnglesMinX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetAnglesMinY",mrb_xors3d_xPSystemGetAnglesMinY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetAnglesMinZ",mrb_xors3d_xPSystemGetAnglesMinZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetAnglesMaxX",mrb_xors3d_xPSystemGetAnglesMaxX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetAnglesMaxY",mrb_xors3d_xPSystemGetAnglesMaxY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetAnglesMaxZ",mrb_xors3d_xPSystemGetAnglesMaxZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetColorMode",mrb_xors3d_xPSystemSetColorMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetColorMode",mrb_xors3d_xPSystemGetColorMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetColors",mrb_xors3d_xPSystemSetColors,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetBeginColorRed",mrb_xors3d_xPSystemGetBeginColorRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetBeginColorGreen",mrb_xors3d_xPSystemGetBeginColorGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetBeginColorBlue",mrb_xors3d_xPSystemGetBeginColorBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetEndColorRed",mrb_xors3d_xPSystemGetEndColorRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetEndColorGreen",mrb_xors3d_xPSystemGetEndColorGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetEndColorBlue",mrb_xors3d_xPSystemGetEndColorBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreePSystem",mrb_xors3d_xFreePSystem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemSetParticleParenting",mrb_xors3d_xPSystemSetParticleParenting,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PSystemGetParticleParenting",mrb_xors3d_xPSystemGetParticleParenting,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LinePick",mrb_xors3d_xLinePick,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityPick",mrb_xors3d_xEntityPick,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraPick",mrb_xors3d_xCameraPick,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedNX",mrb_xors3d_xPickedNX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedNY",mrb_xors3d_xPickedNY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedNZ",mrb_xors3d_xPickedNZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedX",mrb_xors3d_xPickedX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedY",mrb_xors3d_xPickedY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedZ",mrb_xors3d_xPickedZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedEntity",mrb_xors3d_xPickedEntity,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedSurface",mrb_xors3d_xPickedSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedTriangle",mrb_xors3d_xPickedTriangle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PickedTime",mrb_xors3d_xPickedTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetShadowsBlur",mrb_xors3d_xSetShadowsBlur,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetShadowShader",mrb_xors3d_xSetShadowShader,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"InitShadows",mrb_xors3d_xInitShadows,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetShadowParams",mrb_xors3d_xSetShadowParams,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RenderShadows",mrb_xors3d_xRenderShadows,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ShadowPriority",mrb_xors3d_xShadowPriority,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraDisableShadows",mrb_xors3d_xCameraDisableShadows,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CameraEnableShadows",mrb_xors3d_xCameraEnableShadows,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityCastShadows",mrb_xors3d_xEntityCastShadows,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityReceiveShadows",mrb_xors3d_xEntityReceiveShadows,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityIsCaster",mrb_xors3d_xEntityIsCaster,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EntityIsReceiver",mrb_xors3d_xEntityIsReceiver,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadSound",mrb_xors3d_xLoadSound,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"Load3DSound",mrb_xors3d_xLoad3DSound,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeSound",mrb_xors3d_xFreeSound,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoopSound",mrb_xors3d_xLoopSound,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SoundPitch",mrb_xors3d_xSoundPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SoundVolume",mrb_xors3d_xSoundVolume,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SoundPan",mrb_xors3d_xSoundPan,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PlaySound",mrb_xors3d_xPlaySound,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"StopChannel",mrb_xors3d_xStopChannel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PauseChannel",mrb_xors3d_xPauseChannel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ResumeChannel",mrb_xors3d_xResumeChannel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PlayMusic",mrb_xors3d_xPlayMusic,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ChannelPitch",mrb_xors3d_xChannelPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ChannelVolume",mrb_xors3d_xChannelVolume,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ChannelPan",mrb_xors3d_xChannelPan,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ChannelPlaying",mrb_xors3d_xChannelPlaying,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"EmitSound",mrb_xors3d_xEmitSound,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateListener",mrb_xors3d_xCreateListener,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetListener",mrb_xors3d_xGetListener,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"InitalizeSound",mrb_xors3d_xInitalizeSound,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateSprite",mrb_xors3d_xCreateSprite,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SpriteViewMode",mrb_xors3d_xSpriteViewMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"HandleSprite",mrb_xors3d_xHandleSprite,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadSprite",mrb_xors3d_xLoadSprite,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RotateSprite",mrb_xors3d_xRotateSprite,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ScaleSprite",mrb_xors3d_xScaleSprite,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateSurface",mrb_xors3d_xCreateSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetSurfaceBrush",mrb_xors3d_xGetSurfaceBrush,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AddVertex",mrb_xors3d_xAddVertex,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"AddTriangle",mrb_xors3d_xAddTriangle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetSurfaceFrustumSphere",mrb_xors3d_xSetSurfaceFrustumSphere,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexCoords",mrb_xors3d_xVertexCoords,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexNormal",mrb_xors3d_xVertexNormal,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexTangent",mrb_xors3d_xVertexTangent,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexBinormal",mrb_xors3d_xVertexBinormal,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexColor",mrb_xors3d_xVertexColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexTexCoords",mrb_xors3d_xVertexTexCoords,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CountVertices",mrb_xors3d_xCountVertices,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexX",mrb_xors3d_xVertexX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexY",mrb_xors3d_xVertexY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexZ",mrb_xors3d_xVertexZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexNX",mrb_xors3d_xVertexNX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexNY",mrb_xors3d_xVertexNY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexNZ",mrb_xors3d_xVertexNZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexTX",mrb_xors3d_xVertexTX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexTY",mrb_xors3d_xVertexTY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexTZ",mrb_xors3d_xVertexTZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexBX",mrb_xors3d_xVertexBX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexBY",mrb_xors3d_xVertexBY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexBZ",mrb_xors3d_xVertexBZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexU",mrb_xors3d_xVertexU,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexV",mrb_xors3d_xVertexV,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexW",mrb_xors3d_xVertexW,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexRed",mrb_xors3d_xVertexRed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexGreen",mrb_xors3d_xVertexGreen,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexBlue",mrb_xors3d_xVertexBlue,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VertexAlpha",mrb_xors3d_xVertexAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TriangleVertex",mrb_xors3d_xTriangleVertex,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CountTriangles",mrb_xors3d_xCountTriangles,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PaintSurface",mrb_xors3d_xPaintSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearSurface",mrb_xors3d_xClearSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetSurfaceTexture",mrb_xors3d_xGetSurfaceTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeSurface",mrb_xors3d_xFreeSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfacePrimitiveType",mrb_xors3d_xSurfacePrimitiveType,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceTexture",mrb_xors3d_xSurfaceTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceColor",mrb_xors3d_xSurfaceColor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceAlpha",mrb_xors3d_xSurfaceAlpha,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceShininess",mrb_xors3d_xSurfaceShininess,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceBlend",mrb_xors3d_xSurfaceBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceFX",mrb_xors3d_xSurfaceFX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceAlphaRef",mrb_xors3d_xSurfaceAlphaRef,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SurfaceAlphaFunc",mrb_xors3d_xSurfaceAlphaFunc,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CPUName",mrb_xors3d_xCPUName,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CPUVendor",mrb_xors3d_xCPUVendor,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CPUFamily",mrb_xors3d_xCPUFamily,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CPUModel",mrb_xors3d_xCPUModel,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CPUStepping",mrb_xors3d_xCPUStepping,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CPUSpeed",mrb_xors3d_xCPUSpeed,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VideoInfo",mrb_xors3d_xVideoInfo,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VideoAspectRatio",mrb_xors3d_xVideoAspectRatio,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VideoAspectRatioStr",mrb_xors3d_xVideoAspectRatioStr,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTotalPhysMem",mrb_xors3d_xGetTotalPhysMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetAvailPhysMem",mrb_xors3d_xGetAvailPhysMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTotalPageMem",mrb_xors3d_xGetTotalPageMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetAvailPageMem",mrb_xors3d_xGetAvailPageMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTotalVidMem",mrb_xors3d_xGetTotalVidMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetAvailVidMem",mrb_xors3d_xGetAvailVidMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTotalVidLocalMem",mrb_xors3d_xGetTotalVidLocalMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetAvailVidLocalMem",mrb_xors3d_xGetAvailVidLocalMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTotalVidNonlocalMem",mrb_xors3d_xGetTotalVidNonlocalMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetAvailVidNonlocalMem",mrb_xors3d_xGetAvailVidNonlocalMem,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetXors3dVersion",mrb_xors3d_xGetXors3dVersion,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetXors3dMajorVersion",mrb_xors3d_xGetXors3dMajorVersion,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetXors3dMinorVersion",mrb_xors3d_xGetXors3dMinorVersion,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetXors3dRevision",mrb_xors3d_xGetXors3dRevision,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadTerrain",mrb_xors3d_xLoadTerrain,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateTerrain",mrb_xors3d_xCreateTerrain,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainShading",mrb_xors3d_xTerrainShading,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainHeight",mrb_xors3d_xTerrainHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainSize",mrb_xors3d_xTerrainSize,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainX",mrb_xors3d_xTerrainX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainY",mrb_xors3d_xTerrainY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainZ",mrb_xors3d_xTerrainZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ModifyTerrain",mrb_xors3d_xModifyTerrain,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainDetail",mrb_xors3d_xTerrainDetail,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainSplatting",mrb_xors3d_xTerrainSplatting,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadTerrainTexture",mrb_xors3d_xLoadTerrainTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeTerrainTexture",mrb_xors3d_xFreeTerrainTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainTextureLightmap",mrb_xors3d_xTerrainTextureLightmap,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainTexture",mrb_xors3d_xTerrainTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainViewZone",mrb_xors3d_xTerrainViewZone,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TerrainLODs",mrb_xors3d_xTerrainLODs,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureWidth",mrb_xors3d_xTextureWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureHeight",mrb_xors3d_xTextureHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateTexture",mrb_xors3d_xCreateTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"FreeTexture",mrb_xors3d_xFreeTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetTextureFilter",mrb_xors3d_xSetTextureFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureBlend",mrb_xors3d_xTextureBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureCoords",mrb_xors3d_xTextureCoords,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureFilter",mrb_xors3d_xTextureFilter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ClearTextureFilters",mrb_xors3d_xClearTextureFilters,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadTexture",mrb_xors3d_xLoadTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureName",mrb_xors3d_xTextureName,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"PositionTexture",mrb_xors3d_xPositionTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"ScaleTexture",mrb_xors3d_xScaleTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"RotateTexture",mrb_xors3d_xRotateTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"LoadAnimTexture",mrb_xors3d_xLoadAnimTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateTextureFromData",mrb_xors3d_xCreateTextureFromData,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureData",mrb_xors3d_xGetTextureData,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureDataPitch",mrb_xors3d_xGetTextureDataPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureSurface",mrb_xors3d_xGetTextureSurface,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureFrames",mrb_xors3d_xGetTextureFrames,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetCubeFace",mrb_xors3d_xSetCubeFace,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetCubeMode",mrb_xors3d_xSetCubeMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureBlend",mrb_xors3d_xGetTextureBlend,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureX",mrb_xors3d_xGetTextureX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureY",mrb_xors3d_xGetTextureY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureScaleX",mrb_xors3d_xGetTextureScaleX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureScaleY",mrb_xors3d_xGetTextureScaleY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureAngle",mrb_xors3d_xGetTextureAngle,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureCoords",mrb_xors3d_xGetTextureCoords,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetCubeFace",mrb_xors3d_xGetCubeFace,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetCubeMode",mrb_xors3d_xGetCubeMode,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetTextureFlags",mrb_xors3d_xGetTextureFlags,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetTextureFlags",mrb_xors3d_xSetTextureFlags,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TextureCounter",mrb_xors3d_xTextureCounter,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VectorPitch",mrb_xors3d_xVectorPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"VectorYaw",mrb_xors3d_xVectorYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeltaPitch",mrb_xors3d_xDeltaPitch,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeltaYaw",mrb_xors3d_xDeltaYaw,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TFormedX",mrb_xors3d_xTFormedX,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TFormedY",mrb_xors3d_xTFormedY,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TFormedZ",mrb_xors3d_xTFormedZ,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TFormPoint",mrb_xors3d_xTFormPoint,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TFormVector",mrb_xors3d_xTFormVector,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"TFormNormal",mrb_xors3d_xTFormNormal,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"OpenMovie",mrb_xors3d_xOpenMovie,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CloseMovie",mrb_xors3d_xCloseMovie,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DrawMovie",mrb_xors3d_xDrawMovie,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MovieWidth",mrb_xors3d_xMovieWidth,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MovieHeight",mrb_xors3d_xMovieHeight,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MoviePlaying",mrb_xors3d_xMoviePlaying,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MovieSeek",mrb_xors3d_xMovieSeek,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MovieLength",mrb_xors3d_xMovieLength,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MovieCurrentTime",mrb_xors3d_xMovieCurrentTime,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MoviePause",mrb_xors3d_xMoviePause,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MovieResume",mrb_xors3d_xMovieResume,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"MovieTexture",mrb_xors3d_xMovieTexture,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"CreateWorld",mrb_xors3d_xCreateWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"SetActiveWorld",mrb_xors3d_xSetActiveWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetActiveWorld",mrb_xors3d_xGetActiveWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"GetDefaultWorld",mrb_xors3d_xGetDefaultWorld,MRB_ARGS_ANY());
	mrb_define_module_function(mrb,c,"DeleteWorld",mrb_xors3d_xDeleteWorld,MRB_ARGS_ANY());
}

