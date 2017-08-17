
AppTitle "Hello World"

Graphics3D(800, 600, 0, 0, 1)

cam = CreateCamera()
light = CreateLight()
cube = CreateCube()
PositionEntity(cube, 0, 0, 10)

onFrame{
	
	TurnEntity(cube, 0.4, 0.5, 0.6)
	
	RenderWorld()
	Flip()
	
  next (KeyDown(1) or WinMessage("WM_CLOSE"))
}
