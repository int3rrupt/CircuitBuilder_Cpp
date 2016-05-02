// Voltage Implementation
// Voltage.cpp

#include "StdAfx.h"
#include "Voltage.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

Voltage::Voltage()
: Components()
{
}

Voltage::Voltage(double VOLTAGEVALUE, int X, int Y, String^ NAME, int TYPE, int ORIENTATION)
: Components(VOLTAGEVALUE,X,Y,NAME,TYPE,ORIENTATION)
{
	InitializeComponents();
	ComponentTopNode = false;
	ComponentBottomNode = false;
	ComponentLeftNode = true;
	ComponentRightNode = true;
	ComponentNodeConnections = 0;
}

void Voltage::InitializeComponents()
{
	ComponentDiagram = gcnew PictureBox();
	ComponentValueLabel = gcnew Label();
	ComponentNameLabel = gcnew Label();
	ComponentConnectedArray = gcnew array<Components^>(2);
	ComponentConnectedNodeArray = gcnew array<int,2>(2,2);

	ComponentDiagram->BackColor = System::Drawing::Color::Transparent;
	ComponentDiagram->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
	ComponentDiagram->Image = Image::FromFile("C:\\Users\\Adrian\\Documents\\School\\Cal Poly\\ECE 256\\Circuit\\Circuit4\\Pictures\\Parts\\VoltageSource.png");
	ComponentDiagram->Location = System::Drawing::Point(ComponentLocationX-18,ComponentLocationY-3);
	ComponentDiagram->Name = L"pictureBox";
	ComponentDiagram->Size = System::Drawing::Size(35, 85);
	ComponentDiagram->TabIndex = 0;
	ComponentDiagram->TabStop = false;

	ComponentValueLabel->BackColor = Color::White;
	ComponentValueLabel->AutoSize = true;
	ComponentValueLabel->Location = System::Drawing::Point(ComponentLocationX-50,ComponentLocationY+29);
	ComponentValueLabel->Name = L"componentValueLabel";
	ComponentValueLabel->Size = System::Drawing::Size(15, 6);
	ComponentValueLabel->TabIndex = 1;
	ComponentValueLabel->Text = String::Concat(ComponentValue.ToString(),L"v");

	ComponentNameLabel->BackColor = Color::White;
	ComponentNameLabel->AutoSize = true;
	ComponentNameLabel->Location = System::Drawing::Point(ComponentLocationX-35,ComponentLocationY+45);
	ComponentNameLabel->Name = L"componentNameLabel";
	ComponentNameLabel->Size = System::Drawing::Size(8, 6);
	ComponentNameLabel->TabIndex = 1;
	ComponentNameLabel->Text = String::Concat(ComponentName);
}

String^ Voltage::ToString()
{
	return String::Concat(L"Voltage Source\n\n",Components::ToString());
}