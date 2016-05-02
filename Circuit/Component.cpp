// Component Implementation
// Component.cpp

#include "StdAfx.h"
#include "Component.h"

Component::Component()
{
}

Component::Component(double COMPONENTVALUE, int COMPONENTLOCATIONX, int COMPONENTLOCATIONY, String^ COMPONENTNAME)
{
	ComponentValue = COMPONENTVALUE;
	ComponentLocationX = COMPONENTLOCATIONX;
	ComponentLocationY = COMPONENTLOCATIONY;
	ComponentName = COMPONENTNAME;
	ComponentTopNode = false;
	ComponentBottomNode = false;
}

String^ Component::ToString()
{
	return String::Concat(L"Name: ",ComponentName,L"\nValue: ",ComponentValue,L" V",
		L"\nLocation: [",ComponentLocationX,L",",ComponentLocationY,L"]\n\n\n");
}