/*
  Header file for using Futaba T6J
  Written by: James Taylor
  08/30/2016
*/

#ifndef T6J_h
#define T6J_h

#include <inttypes.h>
#include "Arduino.h"

class T6J
{
  // user-accessible "public" interface
  public:
	int getChannel(int ch);
	boolean getChannel5(int ch5);
	int getScaledJoy(int ch);	
	    
  private:
};

#endif

