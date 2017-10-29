// Ground Implementation
// Ground.cpp

#include "StdAfx.h"
#include "Ground.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

Ground::Ground()
: Components()
{
}

Ground::Ground(int X, int Y)
: Components(0,X,Y,"Ground",4,0)
{
	InitializeComponents();
	ComponentTopNode = false;
	ComponentBottomNode = true;
	ComponentLeftNode = true;
	ComponentRightNode = true;
}

void Ground::InitializeComponents()
{
	ComponentDiagram = gcnew PictureBox();
	ComponentConnectedArray = gcnew array<Components^>(15);
	ComponentConnectedNodeArray = gcnew array<int,2>(15,2);
	
	ComponentDiagram->BackColor = System::Drawing::Color::Transparent;
	ComponentDiagram->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
	ComponentDiagram->Image = Image::FromFile("C:\\Users\\Adrian\\Documents\\School\\Cal Poly\\ECE 256\\Circuit\\Circuit2\\Pictures\\Parts\\Ground.png");
	ComponentDiagram->Location = System::Drawing::Point(ComponentLocationX-12,ComponentLocationY-3);
	ComponentDiagram->Name = L"pictureBox";
	ComponentDiagram->Size = System::Drawing::Size(23, 22);
	ComponentDiagram->TabIndex = 0;
	ComponentDiagram->TabStop = false;
}

String^ Ground::ToString()
{
	return String::Concat(L"Ground Node\n\n",Components::ToString());
}