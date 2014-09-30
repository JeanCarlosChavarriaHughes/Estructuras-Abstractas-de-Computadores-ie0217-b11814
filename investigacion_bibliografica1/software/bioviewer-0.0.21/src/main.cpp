/*****************************************************************************

	bioviewer
		
    Copyright (C) 2002  Lucas Walter

  	lucasw@u.washington.edu
	http://students.washington.edu/lucasw

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

******************************************************************************/

#include <iostream>
#include <SDL/SDL.h>
#include <GL/gl.h>
#include <GL/glu.h>

#include "main.hpp"
#include "body.hpp"
#include "misc.hpp"
#include "objloader.hpp"
#include "camera.hpp"
#include "light.hpp"

#include <iostream>
#include <sstream>

#ifdef PARA_GUI_USED
#include "para.hpp"
#endif

using namespace std;

namespace m 
{
	float x,y,z;
	int roll,pitch,turn,relMouseX,relMouseY;
	bool rightButton;
	bool leftButton;
	
	bool play;	
	
	int frameTimeMs;
	int updateTimeMs;
	
	int frameOldCount;
	int frameNewCount; 
	
	int updateOldCount;
	int updateNewCount;
	
	camera *theCamera;
	body *some;
	//objloader *ship;
	light *light1;
	light *light2;
	
	bool saveBMP;
	#ifdef PARA_GUI_USED
	para *paraGUI;
	#endif
	
	unsigned width;
	unsigned height;
	
}

int main(int argc, char* argv[])
{
	cout << "\
bioviewer (c) 2002 Lucas Walter\n\
This software comes with ABSOLUTELY NO WARRANTY\n\
This is free software, and you are welcome to redistribute\n\
it under the conditions specified by the GPL\n\n\
http://bioviewer.sourceforge.net\n\
http://students.washington.edu/lucasw\n\
lucasw@u.washington.edu\n\n\n\
	"; 
	
	string proper = "\
Proper usage:\n\
./bioviewer path/file.bvh\n\
./bioviewer -saveBMP\n\
./biovewer path/file.bvh -saveBMP\n\
";
	
	string bvhFile;
	
	using namespace m;
	
	if (argc > 1)
		bvhFile = argv[1];
	else 
		bvhFile ="bvh/Take 006.bvh";
	
	saveBMP = false;
	if (bvhFile=="-saveBMP") {
		saveBMP = true;
		bvhFile ="bvh/Take 006.bvh";
	} else if (argc > 2) {
		string temp = argv[2];
		if (temp=="-saveBMP") 
			saveBMP = true;
	}
	
	width = 800;
	height = 600;
	
	theCamera = new camera("cam1",camera::FREEORIENTED);
	theCamera->move(0,0,0,10.0f,20.0f,-103.0f);
	//theCamera->move(0,0,0,0.0f,0.0f,0.0f);
	

	/// Main light source
	light1 = new light(theCamera,GL_LIGHT1); //,100.0f,1.0f);
	light1->setName("light 1");
	light1->move(0,0,0,100.0f,15.0f,70.3f);
//	light1->move(0,0,0,0.0f,5.0f,0.0f);

	
	light1->Kd[0] = 1.0f;
	light1->Kd[1] = 0.2f;
	light1->Kd[2] = 0.2f;
	
	light2 = new light(theCamera,GL_LIGHT2);
	light2->setName("light 1");
	light2->move(0,0,0,-150.0f,55.0f,20.3f);
	
	light2->Kd[0] = 1.0f;
	light2->Kd[1] = 1.0f;
	light2->Kd[2] = 0.3f;
	
	vector<light*> lights;
	lights.push_back(light1);
	lights.push_back(light2);
	
	try { some = new body(bvhFile); }
	catch (fileNotFound) { 
		cout << proper;
		return 1; 
	}
	
	some->lights = lights;
	
	/// play automatically if viewing normally
	/// if saving screenshots allow camera to be positioned
	play = !saveBMP;
	
//	ship = new objloader("ship2.obj",1.0f);
		
	x = y = z = 0;	
	initSDL(width,height);
	initGL(width,height);

	updateTimeMs = (1000/25);  /// 50 updates per second
	frameTimeMs = (int)(some->theBvh->frameTime*1000);
	/// temp for recording
	//frameTimeMs =1000;
	
	updateOldCount = 0;
	frameOldCount = 0;
	
	cout << "frameTimeMs " << frameTimeMs << "\n"; //>
	cout << "updateTimeMs " << updateTimeMs << "\n"; //>
	cout << "frames " << some->theBvh->framesNum << "\n";

	#ifdef PARA
	paraGUI = new para(&play);
	#endif
	
	mainLoop();

	return 0;
}

void initGL(int width, int height)	       
{	
//  glEnable(GL_TEXTURE_2D);              
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
	//glClearDepth(1.0);				         
	glDepthFunc(GL_LEQUAL);			    
	glEnable(GL_DEPTH_TEST);	
	glShadeModel(GL_SMOOTH);		

//	glEnable(GL_LIGHT0);	
	glDisable(GL_LIGHTING);
//	glEnable(GL_COLOR_MATERIAL);
	glLineWidth(1.0f);	
	glEnable (GL_LINE_SMOOTH);
	
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	
	glViewport(0, 0, width, height);
   	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();				

	gluPerspective(45.0f,(GLfloat)width/(GLfloat)height,0.1f,10000.0f);	

	glMatrixMode(GL_MODELVIEW);
}

void initSDL(int width, int height)
{	
	srand(time(NULL));

	if ( SDL_Init(SDL_INIT_VIDEO | SDL_INIT_TIMER ) < 0 ) {
		cerr << "Unable to initialize SDL: " << SDL_GetError() << "\n"; //>
      		exit(1);
	}

	atexit(SDL_Quit);

	// chceme doublebuffering s openGL
	  SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );

	unsigned int flags = SDL_OPENGL;// |SDL_RESIZABLE; // |SDL_RESIZABLE
	// flags |= SDL_FULLSCREEN;

   	if ( SDL_SetVideoMode(width, height, 32, flags) == NULL ) {
		cerr << "Unable to create OpenGL screen: " << SDL_GetError() << "\n"; 
		SDL_Quit();
		exit(2);
	}
	
	SDL_WM_SetCaption("bioviewer", NULL);

	//SDL_WM_GrabInput(SDL_GRAB_ON);
	
	//SDL_ShowCursor(SDL_DISABLE);
}

void update(Uint32 ms)					
{
	static bool hasDrawed = false;
	static bool hasAnimed = false;
	using namespace m;
	
	frameNewCount = updateNewCount = SDL_GetTicks();
	
	if ( (play) && ((frameNewCount - frameOldCount) > frameTimeMs) ) {
		//cout << "(frameNewCount - frameOldCount)  " << (frameNewCount - frameOldCount)  <<"\n";
		//cout << "frameTimeMs "<< frameTimeMs<< "\n";
		some->update();
		hasAnimed = true;
		hasDrawed = false;
		frameOldCount = frameNewCount;
	}
	
	if ( (updateNewCount - updateOldCount) > updateTimeMs ) {
		//cout << "(updateNewCount - updateOldCount) " <<(updateNewCount - updateOldCount) <<"\n";
		//cout << "updateTimeMs "<< updateTimeMs << "\n";
		theCamera->update();
	
		SDL_GetRelativeMouseState(&relMouseX,&relMouseY);
		
		pitch = 0;
		turn = 0;
		roll = 0;
	
		if (leftButton)
		{
			pitch = relMouseY;
			turn  = relMouseX;
			//fprintf(stderr,"%d %d %d\n", roll,pitch,turn);
		
		}
		else if (rightButton)
		{
			roll = relMouseX;
		}
			
		theCamera->move(pitch,turn,roll,m::x,m::y,z);
		
		draw();
		hasDrawed = true;
		
		updateOldCount = updateNewCount;
	}	

		/// Has the animation just been updated (and drawn)?
	if (hasAnimed && hasDrawed && saveBMP) {
		hasAnimed = false;
		hasDrawed = false;
		std::ostringstream name;
		string first = "temp/screenshot";
		string tle = ".bmp";
		name << first << some->counter << tle;
		cout << name.str() << "\n";
		
		/// from SDL docs:
		/**
		Taking a screenshot and saving it
		Since OpenGL uses "mathematically correct" screen coordinates (+y is top
		of the graph, -y is bottom), and SDL uses "memory-correct" screen 
		coordinates (+y is at the bottom of the frame buffer, hence the bottom 
		of the screen), we need to convert from one format to the other. One way 
		of doing so is presented here.
		*/
		SDL_Surface *image;
		SDL_Surface *temp;
		int idx;
		image = SDL_CreateRGBSurface(SDL_SWSURFACE, width, height, 24, 0x0000FF, 0x00FF00, 0xFF0000,0x000000);
		temp = SDL_CreateRGBSurface(SDL_SWSURFACE, width, height, 24, 0x0000FF, 0x00FF00, 0xFF0000,0x000000);
		
		glReadPixels(0, 0, width, height, GL_RGB, GL_UNSIGNED_BYTE, image->pixels);
		for (idx = 0; idx < height; idx++)
		{
			memcpy(	(char*)(temp->pixels) + 3 * width * idx,
					(char*)(image->pixels) + 3 * width * (height - idx), 
					3*width);
		}
		memcpy(image->pixels,temp->pixels,width * height * 3);
		SDL_SaveBMP(image, name.str().c_str());
		SDL_FreeSurface(image);
		
		//SDL_SaveBMP(SDL_GetVideoSurface(), name.str().c_str());
		
		// quit after 1 loop
		if (some->counter == some->theBvh->framesNum-1)
			exit(1);
	}
}

void draw()
{
	
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	
	
	m::theCamera->look();

	m::light1->draw();
	m::light2->draw();

	m::some->draw();
//	ship->draw();
	
	glFlush();

	SDL_GL_SwapBuffers();
	
	glPopMatrix();

}

void handleInput(SDL_Event *E)
{
	using namespace m;
	
	rightButton = false;
	float move_inc = 2.2f;
	//int deg_inc = 6;	

	switch(E->type) {
		case SDL_MOUSEBUTTONDOWN:

			switch( E->button.button) {
				case SDL_BUTTON_LEFT:
					leftButton= true;

						break;
						
				case SDL_BUTTON_RIGHT:
					rightButton= true;

						break;
					default:
						break;
			}
			break;
					
		case SDL_MOUSEBUTTONUP:
			switch(E->button.button)
			{
				case SDL_BUTTON_LEFT:
					leftButton=false;
		
					break;
				case SDL_BUTTON_RIGHT:
					rightButton=false;
		
					break;
				default:
					break;
			}
			break;
					
	case SDL_KEYDOWN:
		switch( E->key.keysym.sym ) {
			
		case SDLK_ESCAPE:
			terminateApp();
			break;

		case SDLK_F1:			
			//ToggleFullscreen();	 
			break;
		case SDLK_F2:			
		 
			break;
			
		case SDLK_KP8:
			y += move_inc;
			break;
		case SDLK_KP2:
			y -= move_inc;
			break;
			
		case SDLK_KP5:
			z += move_inc;
			break;
		case SDLK_KP0:
			z -= move_inc;
			break;
					
		case SDLK_KP6:
			x += move_inc;
			break;
		case SDLK_KP4:
			x -= move_inc;
			break;
			
		case SDLK_SPACE:
			play = !play;
			break;
		
		case SDLK_UP:
			some->switchDisplay();
		break;
				
		case SDLK_RIGHT:
			some->update();
		break;
		
		case SDLK_LEFT:
			some->update(-1);
		break;

/*		case SDLK_RIGHT:
			s1.Perturb();
			break;
		case SDLK_LEFT:
			break;

		case SDLK_1:
			s1.drawRestoreForce = !s1.drawRestoreForce;
			break;
		case SDLK_2:
			s1.drawDeltaV = !s1.drawDeltaV;
			break;
		case SDLK_3:
			s1.drawSprings = !s1.drawSprings;
			break;
		case SDLK_4:
			s1.drawSurfaces = !s1.drawSurfaces;

		case SDLK_5:
			s1.drawBB = !s1.drawBB;
*/
		default:
			break;
			
		}
		break;
		
	case SDL_KEYUP:	
			
		switch( E->key.keysym.sym ){
				
		case SDLK_KP8:
			y -= move_inc;
			break;
		case SDLK_KP2:
			y += move_inc;
			break;
						
		case SDLK_KP5:
			z -= move_inc;
			break;
		case SDLK_KP0:
			z += move_inc;
			break;
					
		case SDLK_KP6:
			x -= move_inc;
			break;
		case SDLK_KP4:
			x += move_inc;
			break;

		case SDLK_TAB:
			/*currentMovable++;
			if (currentMovable >= numMovable)
				currentMovable = 0;
*/
			break;
				
/*		case SDLK_RIGHT:
			xRot -= deg_inc;
			break;
		case SDLK_LEFT:
			xRot += deg_inc;
			break;
*/
				
		default:
			break;				
		}
			
		default:
			break;			
	}

	return;
}

void terminateApp(void)                                                 
{
        static SDL_Event Q;

        Q.type = SDL_QUIT;

        if(SDL_PushEvent(&Q) == -1)
        {
                cerr << "SDL_QUIT event can't be pushed: " << SDL_GetError() << "\n";         
                exit(1);
 
        }

        return;
 
}

int mainLoop()
{
	bool isProgramLooping = true;			
	SDL_Event E;

	while(isProgramLooping)
	{
		if(SDL_PollEvent(&E)) {
			switch(E.type) {
				
			case SDL_QUIT:
				isProgramLooping = false;
				break;				
			

			case SDL_VIDEORESIZE:
			//	reshapeGL(E.resize.w, E.resize.h);
				break;


			case SDL_ACTIVEEVENT:		
/*				if(E.active.state & SDL_APPACTIVE)
					{
						if(E.active.gain)
						{
							AppStatus.Visible = true;
						}
						else {
							AppStatus.Visible = false;				
						}
					}
					
					if(E.active.state & SDL_APPMOUSEFOCUS) {
						if(E.active.gain) {
							AppStatus.MouseFocus = true;	
						} else {
							AppStatus.MouseFocus = false;
						}
					
					if(E.active.state & SDL_APPINPUTFOCUS) {
						if(E.active.gain) {
							AppStatus.KeyboardFocus = true;	
						} else { 
							AppStatus.KeyboardFocus = false;
						}
*/	
					break;						
				
			case SDL_MOUSEBUTTONDOWN:
			case SDL_MOUSEBUTTONUP:
			case SDL_KEYDOWN:					
			case SDL_KEYUP:					
					handleInput(&E);
					break;	
			}
		} else {
			
			update(0);

		}
		
	}
				
	//exit(0);				
	return 0;		
}
