// Solution Header
// Solution.h

#pragma once

#include "Components.h"

using namespace System;
using namespace System::Windows::Forms;


ref class Solution
{
public:
	Solution();
	Solution(int,int,int,array<Components^>^);
	property int ComponentCount
	{
		int get(){return componentCount;}
		void set(int value){componentCount = value;}
	}
	property int NodeCount
	{
		int get(){return nodeCount;}
		void set(int value){nodeCount = value;}
	}
	property int TrueNodeCount
	{
		int get(){return trueNodeCount;}
		void set(int value){trueNodeCount = value;}
	}
	property int OriginalNodeCount
	{
		int get(){return originalNodeCount;}
		void set(int value){originalNodeCount = value;}
	}
	property int VoltageCount
	{
		int get(){return voltageCount;}
		void set(int value){voltageCount = value;}
	}
	property array<Components^>^ AllComponentsUsed
	{
		array<Components^>^ get(){return allComponentsUsed;}
		void set(array<Components^>^ value){allComponentsUsed = value;}
	}
	property array<String^,2>^ Netlist
	{
		array<String^,2>^ get(){return netlist;}
		void set(array<String^,2>^ value){netlist = value;}
	}
	property array<double,2>^ G
	{
		array<double,2>^ get(){return g;}
		void set(array<double,2>^ value){g = value;}
	}
	property array<double,2>^ B
	{
		array<double,2>^ get(){return b;}
		void set(array<double,2>^ value){b = value;}
	}
	property array<double,2>^ C
	{
		array<double,2>^ get(){return c;}
		void set(array<double,2>^ value){c = value;}
	}
	property array<double,2>^ D
	{
		array<double,2>^ get(){return d;}
		void set(array<double,2>^ value){d = value;}
	}
	property array<double,2>^ Ay
	{
		array<double,2>^ get(){return ay;}
		void set(array<double,2>^ value){ay = value;}
	}
	property array<String^>^ V
	{
		array<String^>^ get(){return v;}
		void set(array<String^>^ value){v = value;}
	}
	property array<String^>^ J
	{
		array<String^>^ get(){return j;}
		void set(array<String^>^ value){j = value;}
	}
	property array<String^>^ X
	{
		array<String^>^ get(){return x;}
		void set(array<String^>^ value){x = value;}
	}
	property array<double,2>^ Z
	{
		array<double,2>^ get(){return z;}
		void set(array<double,2>^ value){z = value;}
	}
	property array<double,2>^ InverseResult
	{
		array<double,2>^ get(){return inverseResult;}
		void set(array<double,2>^ value){inverseResult = value;}
	}
	property array<double,2>^ AnswerMatrix
	{
		array<double,2>^ get(){return answerMatrix;}
		void set(array<double,2>^ value){answerMatrix = value;}
	}
	void SolutionFunction();
	void CreateNetlist();
	void CreateMatrix();
	void MatrixInversion(array<double,2>^,int,array<double,2>^);
	int GetMinor(array<double,2>^,array<double,2>^,int,int,int);
	double CalcDeterminant(array<double,2>^,int);
	void MatrixMultiplication(array<double,2>^,int,int,array<double,2>^,int,int,array<double,2>^);

private:
	int componentCount;
	int nodeCount;
	int trueNodeCount;
	int originalNodeCount;
	int voltageCount;
	array<Components^>^ allComponentsUsed;
	array<String^,2>^ netlist;
	array<double,2>^ g;
	array<double,2>^ b;
	array<double,2>^ c;
	array<double,2>^ d;
	array<double,2>^ ay;
	array<String^>^ v;
	array<String^>^ j;
	array<String^>^ x;
	array<double,2>^ z;
	array<double,2>^ inverseResult;
	array<double,2>^ answerMatrix;

};
