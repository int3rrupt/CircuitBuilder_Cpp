// Node Implementation
// Node.cpp

#include "StdAfx.h"
#include "Node.h"

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;

Node::Node()
: Components()
{
}

Node::Node(int X, int Y, String^ NAME)
: Components(0,X,Y,NAME,3,0)
{
	InitializeComponents();
	ComponentTopNode = false;
	ComponentBottomNode = true;
	ComponentLeftNode = true;
	ComponentRightNode = true;
}

void Node::InitializeComponents()
{
	ComponentDiagram = gcnew PictureBox();
	ComponentNameLabel = gcnew Label();
	ComponentConnectedArray = gcnew array<Components^>(10);
	ComponentConnectedNodeArray = gcnew array<int,2>(10,2);
	
	ComponentDiagram->BackColor = System::Drawing::Color::Transparent;
	ComponentDiagram->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
	ComponentDiagram->Image = Image::FromFile("C:\\Users\\Adrian\\Documents\\School\\Cal Poly\\ECE 256\\Circuit\\Circuit2\\Pictures\\Parts\\Node.png");
	ComponentDiagram->Location = System::Drawing::Point(ComponentLocationX-3,ComponentLocationY-3);
	ComponentDiagram->Name = L"pictureBox";
	ComponentDiagram->Size = System::Drawing::Size(5, 5);
	ComponentDiagram->TabIndex = 0;
	ComponentDiagram->TabStop = false;

	ComponentNameLabel->BackColor = Color::White;
	ComponentNameLabel->AutoSize = true;
	ComponentNameLabel->Location = System::Drawing::Point(ComponentLocationX-7,ComponentLocationY-20);
	ComponentNameLabel->Name = L"componentNameLabel";
	ComponentNameLabel->Size = System::Drawing::Size(8, 6);
	ComponentNameLabel->TabIndex = 1;
	ComponentNameLabel->Text = String::Concat(ComponentName);
}

String^ Node::ToString()
{
	return String::Concat(L"Node\n\n",Components::ToString());
}