# xMRB 

A very basic Xors3d + MRuby launcher thingie.

## building

### mingw

Assuming you already have Ruby, MRuby and Xors3d installed.

Open "Rakefile" with a text editor and set the correct paths.

Run "rake" in the command line, and it should compile the launcher.

The resulting binaries will be around 8 MB, but they can be compressed to just 1.5 MB with [UPX](https://upx.github.io/).

### msvc

хз лол

## additional functions

```ruby
	require 'something.rb' # Includes an external script. The path is not relative to the running script!
	onFrame([stack = true]){ ... } # Executes a code block as the main game loop until it returns true.
								   # If stack is true, the loops will stack up, and return to one another.
								   # Of course it's optional and you can just make an infinite loop.
```

## config.ini

```ini
[xmrb]
basemodule=
 ; module to put Xors3d functions in. (blank for Kernel)
defaultpkg=
defaultpkg_mp=
 ; Xors3d package (zip archive) to be mounted before executing the main script, and its mountpoint. (optional)
entrypoint=data\scripts\main.rb
 ; path to the main script.
```

## todo list

- add actual debugging functionality
- add require_relative()
- .mrb compiled script support
- I haven't really tested out 'xors_mrb_bind.h' much, so there might be things like usage of integer values instead of bools, and such
- would've been nice to add some syntax sugar, like, wrapping entities into classes with transformation functions as methods
- DLL plugins support?
- ditch Xors3d for good and finally make a compatible opengl alternative