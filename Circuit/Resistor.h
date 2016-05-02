// Resistor Header
// Resistor.h

#pragma once
#include "Components.h"


ref class Resistor :
public Components
{
public:
	Resistor();
	Resistor(double,int,int,String^,int,int);
	void InitializeComponents();
	virtual String^ ToString() override;
};
