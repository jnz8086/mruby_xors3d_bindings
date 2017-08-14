# xors_mrb_bind.h

This is a Xors3d engine binding for [MRuby](https://github.com/mruby/mruby)

# Usage example

```cpp
#include <mruby.h>
#include <mruby/compile.h>
#include <xors3d.h>
#include "xors_mrb_bind.h"

int main(){
	
	mrb_state* ruby_s = mrb_open();
	
	struct RClass* xors3d_module = mrb_define_module(ruby_s,"X");
	mrb_xors3d_bind(ruby_s, xors3d_module);
	
	mrb_load_file(ruby_s, fopen("demo.rb", "r") );
	
  return 0;
}
```

```ruby
X.Key("DHf0J-0UbxC-t6wAf-6y2cT-1K7U5");
X.SetEngineSetting("Splash::TilingTime","0");
X.SetEngineSetting("Splash::AfterTilingTime","0");

X.AppTitle "Hello World"
X.Graphics3D(800, 600, 0, 0, 1)

cam = X.CreateCamera()
light = X.CreateLight()
cube = X.CreateCube()
X.PositionEntity(cube, 0, 0, 10)

while (X.KeyDown(1) == 0)
	X.TurnEntity(cube, 0.4, 0.5, 0.6)
	X.RenderWorld
	X.Flip
end
```