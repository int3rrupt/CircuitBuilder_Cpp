// Ground Header
// Ground.h

#pragma once
#include "Components.h"


ref class Ground :
public Components
{
public:
	Ground();
	Ground(int,int);
	void InitializeComponents();
	virtual String^ ToString() override;
};
