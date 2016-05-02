// Component Header
// Component.h

#pragma once

using namespace System;
using namespace System::Windows::Forms;


ref class Component
{
public:
	Component();
	Component(double,int,int,String^);
	property double ComponentValue
	{
		double get(){return componentValue;}
		void set(double value){componentValue = value;}
	}
	property int ComponentLocationX
	{
		int get(){return componentLocationX;}
		void set(int value)
		{
			if(value>0)
				componentLocationX = value;
			else
				componentLocationX = -1;
		}
	}
	property int ComponentLocationY
	{
		int get(){return componentLocationY;}
		void set(int value)
		{
			if(value>0)
				componentLocationY = value;
			else
				componentLocationY = -1;
		}
	}
	property String^ ComponentName
	{
		String^ get(){return componentName;}
		void set(String^ value){componentName = value;}
	}
	property bool ComponentTopNode
	{
		bool get(){return componentTopNode;}
		void set(bool value){componentTopNode = value;}
	}
	property bool ComponentBottomNode
	{
		bool get(){return componentBottomNode;}
		void set(bool value){componentBottomNode = value;}
	}
	property PictureBox^ ComponentDiagram
	{
		PictureBox^ get(){return componentDiagram;}
		void set(PictureBox^ value){componentDiagram = value;}
	}
	property Label^ ComponentValueLabel
	{
		Label^ get(){return componentValueLabel;}
		void set(Label^ value){componentValueLabel = value;}
	}
	property Label^ ComponentNameLabel
	{
		Label^ get(){return componentNameLabel;}
		void set(Label^ value){componentNameLabel = value;}
	}
	virtual String^ ToString() override;
//	property ContextMenuStrip^ ComponentContextMenuStrip
//	{
//		ContextMenuStrip^ get(){return componentContextMenuStrip;}
//		void set(ContextMenuStrip^ value){componentContextMenuStrip = value;}
//	}
//	property ToolStripMenuItem^ ComponentConnectToolStripMenuItem
//	{
//		ToolStripMenuItem^ get(){return componentConnectToolStripMenuItem;}
//		void set(ToolStripMenuItem^ value){componentConnectToolStripMenuItem = value;}
//	}

private:
	double componentValue;
	int componentLocationX;
	int componentLocationY;
	String^ componentName;
	bool componentTopNode;
	bool componentBottomNode;
	PictureBox^  componentDiagram;
	Label^  componentValueLabel;
	Label^	componentNameLabel;
//	ContextMenuStrip^ componentContextMenuStrip;
//	ToolStripMenuItem^ componentConnectToolStripMenuItem;
};
