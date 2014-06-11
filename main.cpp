/*******************************************************************************
*                                                                              *
*   PrimeSense NiTE 2.0 - Simple Skeleton Sample                               *
*   Copyright (C) 2012 PrimeSense Ltd.                                         *
*                                                                              *
*******************************************************************************/


#include <iostream>
#include <string>
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include  <X11/extensions/XTest.h>

using namespace std;

int main(int argc, char** argv)
{
	string str;
	Display *display;
    unsigned int keycode[2];
    display = XOpenDisplay(NULL);
		for(int i=0;argv[1][i]!=0;i++){
			if(argv[1][i]!=' '){
			keycode[0] = XKeysymToKeycode(display, XK_A+(argv[1][i]-'a'));
			XTestFakeKeyEvent(display, keycode[0], True, 0);
			XTestFakeKeyEvent(display, keycode[0], False, 0);
		}
			
		}
	XFlush(display);
	return 0;
}
