// Node Header
// Node.h

#pragma once
#include "Components.h"


ref class Node :
public Components
{
public:
	Node();
	Node(int,int,String^);
	void InitializeComponents();
	virtual String^ ToString() override;
};
