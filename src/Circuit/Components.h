// Components Header
// Components.h

#pragma once

using namespace System;
using namespace System::Windows::Forms;


ref class Components
{
public:
	Components();
	Components(double,int,int,String^,int,int);
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
	property int ComponentType
	{
		int get(){return componentType;}
		void set(int value){componentType = value;}
	}
	property int ComponentOrientation
	{
		int get(){return componentOrientation;}
		void set(int value){componentOrientation = value;}
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
	property bool ComponentLeftNode
	{
		bool get(){return componentLeftNode;}
		void set(bool value){componentLeftNode = value;}
	}
	property bool ComponentRightNode
	{
		bool get(){return componentRightNode;}
		void set(bool value){componentRightNode = value;}
	}
	property int ComponentNodeConnections
	{
		int get(){return componentNodeConnections;}
		void set(int value){componentNodeConnections = value;}
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
	property array<Components^>^ ComponentConnectedArray
	{
		array<Components^>^ get() {return componentConnectedArray;}
		void  set(array<Components^>^ value){componentConnectedArray = value;}
	}
	property array<int,2>^ ComponentConnectedNodeArray
	{
		array<int,2>^ get() {return componentConnectedNodeArray;}
		void  set(array<int,2>^ value){componentConnectedNodeArray = value;}
	}
	virtual String^ ToString() override;

private:
	double componentValue;
	int componentLocationX;
	int componentLocationY;
	String^ componentName;
	int componentType;
	int componentOrientation;
	bool componentTopNode;
	bool componentBottomNode;
	bool componentLeftNode;
	bool componentRightNode;
	int componentNodeConnections;
	PictureBox^  componentDiagram;
	Label^  componentValueLabel;
	Label^	componentNameLabel;
	array<Components^>^ componentConnectedArray;
	array<int,2>^ componentConnectedNodeArray;
};
