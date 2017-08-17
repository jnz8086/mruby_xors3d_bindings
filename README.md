# xors_mrb_bind.h

This is a Xors3d engine binding for [MRuby](https://github.com/mruby/mruby)

Work in progress. (not really though)

# Usage example

```cpp
#include <mruby.h>
#include <mruby/compile.h>
#include <xors3d.h>
#include "xors_mrb_bind.h"

int main(){
	
	mrb_state* ruby_s = mrb_open();
	
	struct RClass* xors3d_module = ruby_s->kernel_module;
	
	//if you want Xors3d functions declared in a separate module (e.g. X.Graphics3D):
	//struct RClass* xors3d_module = mrb_define_module(ruby_s,"X");
	
	mrb_xors3d_bind(ruby_s, xors3d_module);
	
	mrb_load_file(ruby_s, fopen("demo.rb", "r") );
	
  return 0;
}
```

```ruby
Key("DHf0J-0UbxC-t6wAf-6y2cT-1K7U5")
SetEngineSetting("Splash::TilingTime","0")
SetEngineSetting("Splash::AfterTilingTime","0")

AppTitle "Hello World"
Graphics3D(800, 600, 0, 0, 1)

cam = CreateCamera()
light = CreateLight()
cube = CreateCube()
PositionEntity(cube, 0, 0, 10)

while KeyDown(1)
	TurnEntity(cube, 0.4, 0.5, 0.6)
	RenderWorld()
	Flip()
end
```

# License

Public domain.
As of Xors3d itself, its legal status is uncertain.