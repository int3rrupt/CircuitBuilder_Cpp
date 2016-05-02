// Source Header
// Source.h

#pragma once

using namespace System;
using namespace System::Windows::Forms;


ref class Source
{
public:
	Source();
	Source(double,int,int,String^);
	property double SourceValue
	{
		double get(){return sourceValue;}
		void set(double value){sourceValue = value;}
	}
	property int SourceLocationX
	{
		int get(){return sourceLocationX;}
		void set(int value)
		{
			if(value>0)
				sourceLocationX = value;
			else
				sourceLocationX = -1;
		}
	}
	property int SourceLocationY
	{
		int get(){return sourceLocationY;}
		void set(int value)
		{
			if(value>0)
				sourceLocationY = value;
			else
				sourceLocationY = -1;
		}
	}
	property String^ SourceName
	{
		String^ get(){return sourceName;}
		void set(String^ value){sourceName = value;}
	}
	property bool SourceTopNode
	{
		bool get(){return sourceTopNode;}
		void set(bool value){sourceTopNode = value;}
	}
	property bool SourceBottomNode
	{
		bool get(){return sourceBottomNode;}
		void set(bool value){sourceBottomNode = value;}
	}
	property PictureBox^ SourceDiagram
	{
		PictureBox^ get(){return sourceDiagram;}
		void set(PictureBox^ value){sourceDiagram = value;}
	}
	property Label^ SourceValueLabel
	{
		Label^ get(){return sourceValueLabel;}
		void set(Label^ value){sourceValueLabel = value;}
	}
	property Label^ SourceNameLabel
	{
		Label^ get(){return sourceNameLabel;}
		void set(Label^ value){sourceNameLabel = value;}
	}
	virtual String^ ToString() override;

private:
	double sourceValue;
	int sourceLocationX;
	int sourceLocationY;
	String^ sourceName;
	bool sourceTopNode;
	bool sourceBottomNode;
	PictureBox^  sourceDiagram;
	Label^  sourceValueLabel;
	Label^	sourceNameLabel;
};
