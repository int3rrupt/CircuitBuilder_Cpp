// Voltage Header
// Voltage.h

#pragma once
#include "Components.h"


ref class Voltage :
public Components
{
public:
	Voltage();
	Voltage(double,int,int,String^,int,int);
	void InitializeComponents();
	virtual String^ ToString() override;
};
