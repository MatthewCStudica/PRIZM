/*
	Library for using Futaba T6J
  	Written by: James Taylor
  	08/30/2016  
*/

#include <inttypes.h>
#include "Arduino.h"
#include "T6J.h"

int T6J::getChannel(int ch)
{
	pinMode(ch, INPUT);
	ch = pulseIn(ch, HIGH, 280000);
	return ch;
}

boolean T6J::getChannel5(int ch5)
{
	pinMode(ch5, INPUT);
	ch5 = pulseIn(ch5, HIGH, 280000);
	if (ch5 < 1300)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int T6J::getScaledJoy(int ch)
{
	pinMode(ch, INPUT);
	ch = pulseIn(ch, HIGH, 280000);
	ch = map(ch,1100,1910,-100,100);
	ch = ch*-1;
	if ((ch <= 20)&&(ch >= -20))
	{
		ch = 0;
	}
	return ch;
}


