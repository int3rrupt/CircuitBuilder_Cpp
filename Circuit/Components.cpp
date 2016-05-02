// Component Implementation
// Component.cpp

#include "StdAfx.h"
#include "Components.h"

Components::Components()
{
}

Components::Components(double COMPONENTVALUE, int COMPONENTLOCATIONX, int COMPONENTLOCATIONY, String^ COMPONENTNAME, int TYPE, int ORIENTATION)
{
	ComponentValue = COMPONENTVALUE;
	ComponentLocationX = COMPONENTLOCATIONX;
	ComponentLocationY = COMPONENTLOCATIONY;
	ComponentName = COMPONENTNAME;
	ComponentType = TYPE;
	ComponentOrientation = ORIENTATION;
	ComponentNodeConnections = 0;
}

String^ Components::ToString()
{
	String^ Unit;
	if(ComponentType==0) // Voltage Source
	{
		Unit = "V";
	}
	if(ComponentType==2) // Resistor
	{
		Unit = " Ohm";
	}
	if(ComponentType==4) // Ground Node
	{
		Unit = "V";
	}
	return String::Concat(L"Name: ",ComponentName,L"\nValue: ",ComponentValue,Unit,
		L"\nLocation: [",ComponentLocationX,L",",ComponentLocationY,L"]\n\n\n");
}