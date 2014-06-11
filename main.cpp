/*******************************************************************************
*                                                                              *
*   PrimeSense NiTE 2.0 - Simple Skeleton Sample                               *
*   Copyright (C) 2012 PrimeSense Ltd.                                         *
*                                                                              *
*******************************************************************************/


#include "iostream"
#include <X11/Xlib.h>
#include <X11/keysym.h>
#include  <X11/extensions/XTest.h>
int main(int argc, char** argv)
{
	Display *display;
    unsigned int keycode[2];
    display = XOpenDisplay(NULL);
    //getting Alt and F4 key codes
    keycode[0] = XKeysymToKeycode(display, XK_Alt_L);
    keycode[1] = XKeysymToKeycode(display, XK_F4);
    //Pressing Alt
    XTestFakeKeyEvent(display, keycode[0], True, 0);
    //Pressing F4
    XTestFakeKeyEvent(display, keycode[1], True, 0);
    //Releasing F4
    XTestFakeKeyEvent(display, keycode[1], False, 0);
    //Releasing Alt
    XTestFakeKeyEvent(display, keycode[0], False, 0);
    XFlush(display);
	
	return 0;
}
