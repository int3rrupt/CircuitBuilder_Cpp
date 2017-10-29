// Resistor Implementation
// Resistor.cpp

#include "StdAfx.h"
#include "Resistor.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

Resistor::Resistor()
: Components()
{
}

Resistor::Resistor(double RESISTORVALUE, int X, int Y, String^ NAME, int TYPE, int ORIENTATION)
: Components(RESISTORVALUE,X,Y,NAME,TYPE,ORIENTATION)
{
	ComponentOrientation = ORIENTATION;
	InitializeComponents();
	if(ORIENTATION==0)
	{
		ComponentTopNode = false;
		ComponentBottomNode = false;
		ComponentLeftNode = true;
		ComponentRightNode = true;
		
	}
	if(ORIENTATION==1)
	{
		ComponentTopNode = true;
		ComponentBottomNode = true;
		ComponentLeftNode = false;
		ComponentRightNode = false;
	}
	ComponentNodeConnections = 0;
}

void Resistor::InitializeComponents()
{
	ComponentDiagram = gcnew PictureBox();
	ComponentValueLabel = gcnew Label();
	ComponentNameLabel = gcnew Label();
	ComponentConnectedArray = gcnew array<Components^>(2);
	ComponentConnectedNodeArray = gcnew array<int,2>(2,2);
	
	if(ComponentOrientation==0) // Vertical
	{
		ComponentDiagram->BackColor = System::Drawing::Color::Transparent;
		ComponentDiagram->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
		ComponentDiagram->Image = Image::FromFile("C:\\Users\\Adrian\\Documents\\School\\Cal Poly\\ECE 256\\Circuit\\Circuit4\\Pictures\\Parts\\ResistorV.png");
		ComponentDiagram->Location = System::Drawing::Point(ComponentLocationX-6,ComponentLocationY-3);
		ComponentDiagram->Name = L"componentPictureBox";
		ComponentDiagram->Size = System::Drawing::Size(12, 85);
		ComponentDiagram->TabIndex = 0;
		ComponentDiagram->TabStop = false;

		ComponentValueLabel->BackColor = Color::White;
		ComponentValueLabel->AutoSize = true;
		ComponentValueLabel->Location = System::Drawing::Point(ComponentLocationX+10,ComponentLocationY+45);
		ComponentValueLabel->Name = L"componentValueLabel";
		ComponentValueLabel->Size = System::Drawing::Size(15, 6);
		ComponentValueLabel->TabIndex = 1;
		ComponentValueLabel->Text = String::Concat(ComponentValue.ToString());

		ComponentNameLabel->BackColor = Color::White;
		ComponentNameLabel->AutoSize = true;
		ComponentNameLabel->Location = System::Drawing::Point(ComponentLocationX+10,ComponentLocationY+30);
		ComponentNameLabel->Name = L"componentNameLabel";
		ComponentNameLabel->Size = System::Drawing::Size(8, 6);
		ComponentNameLabel->TabIndex = 1;
		ComponentNameLabel->Text = String::Concat(ComponentName);
	}
	if(ComponentOrientation==1) // Horizontal
	{
		ComponentDiagram->BackColor = System::Drawing::Color::Transparent;
		ComponentDiagram->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
		ComponentDiagram->Image = Image::FromFile("C:\\Users\\Adrian\\Documents\\School\\Cal Poly\\ECE 256\\Circuit\\Circuit4\\Pictures\\Parts\\ResistorH.png");
		ComponentDiagram->Location = System::Drawing::Point(ComponentLocationX-3,ComponentLocationY-7);
		ComponentDiagram->Name = L"componentPictureBox";
		ComponentDiagram->Size = System::Drawing::Size(85, 12);
		ComponentDiagram->TabIndex = 0;
		ComponentDiagram->TabStop = false;

		ComponentValueLabel->BackColor = Color::White;
		ComponentValueLabel->AutoSize = true;
		ComponentValueLabel->Location = System::Drawing::Point(ComponentLocationX+27,ComponentLocationY-25);
		ComponentValueLabel->Name = L"componentValueLabel";
		ComponentValueLabel->Size = System::Drawing::Size(15, 6);
		ComponentValueLabel->TabIndex = 1;
		ComponentValueLabel->Text = String::Concat(ComponentValue.ToString());

		ComponentNameLabel->BackColor = Color::White;
		ComponentNameLabel->AutoSize = true;
		ComponentNameLabel->Location = System::Drawing::Point(ComponentLocationX+27,ComponentLocationY+10);
		ComponentNameLabel->Name = L"componentNameLabel";
		ComponentNameLabel->Size = System::Drawing::Size(8, 6);
		ComponentNameLabel->TabIndex = 1;
		ComponentNameLabel->Text = String::Concat(ComponentName);
	}
}

String^ Resistor::ToString()
{
	return String::Concat(L"Resistor Component\n\n",Components::ToString());
}