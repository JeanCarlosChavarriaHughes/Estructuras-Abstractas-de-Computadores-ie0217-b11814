bioviewer (c) 2002-2003 Lucas Walter

This software comes with ABSOLUTELY NO WARRANTY
This is free software, and you are welcome to 
redistribute it under the conditions specified 
by the GPL.

http://bioviewer.sourceforge.net
http://icculus.org/~lucasw

lucasw@u.washington.edu


Summary:

./bioviewer [bvhfile]  

Load Biovisions .bvh files commonly derived from motion capture data and display 
animations.  Sample bvh files are included in bvh/, and one of them will display 
by default with no files specified on command line.  Requires Unix style forward 
slashes, even in Windows.

Options:

-saveBMP

save each frame of screen output to temp directory



Compilation:

Make

SDL development libraries and OpenGL required


Controls: 

0,5,2,8,4, and 6 on numpad translate in all directions.

Left Mouse Button + Mouse Motion - rotates left/right and up/down (yaw and pitch)
Right Mouse Button + Mouse Motion - left/right motion rotates sideways (roll)

Up Arrow - Toggle display modes:
	Lines - Line between each connected joint and endpoint - hard to distuinguish joints
	Obloids - (is that a word?) Oblong spheres for each joint-joint/endpoint - best generic modes
	Obj - Load specific modelled .obj files for certain limbs - specific to Filmbox's bvh format
			(limbs will appear in odd places or not at all for other sources of bvh files)	

Space - Pause

Left Arrow - Move to earlier frame of animation while paused
Right Arrow - Move to next frame while paused
