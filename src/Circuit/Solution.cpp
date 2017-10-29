// Solution Implementation
// Solution.cpp

#include "StdAfx.h"
#include "Solution.h"
#include <math.h>

Solution::Solution()
{
}

Solution::Solution(int TOTAL, int NODECOUNT, int VOLTAGECOUNT, array<Components^>^ ALLCOMPONENTSUSED)
{
	ComponentCount = TOTAL;
	NodeCount = NODECOUNT;
	OriginalNodeCount = NODECOUNT;
	VoltageCount = VOLTAGECOUNT;
	AllComponentsUsed = gcnew array<Components^>(ComponentCount);
	AllComponentsUsed = ALLCOMPONENTSUSED;
}
void Solution::SolutionFunction()
{
	CreateNetlist();
	CreateMatrix();
	InverseResult = gcnew array<double,2>(TrueNodeCount+VoltageCount,TrueNodeCount+VoltageCount);
	AnswerMatrix = gcnew array<double,2>(TrueNodeCount+VoltageCount,1);
	MatrixInversion(Ay,TrueNodeCount+VoltageCount,InverseResult);
	MatrixMultiplication(InverseResult,TrueNodeCount+VoltageCount,TrueNodeCount+VoltageCount,Z,TrueNodeCount+VoltageCount,1,AnswerMatrix);
}

// [from,to]
void Solution::CreateNetlist()
{
	Netlist = gcnew array<String^,2>(ComponentCount-OriginalNodeCount-1,4);
	array<String^,2>^ nodeConversion = gcnew array<String^,2>(NodeCount,2);
	array<String^,2>^ programNodesArray = gcnew array<String^,2>(11,3);
	String^ nodeconvertedname;
	String^ usenode = "";
	int i = 0, k = 0, p = 0;
	int rowCount = 0;
	int ProgramNodeCount = 0;
	
	for(i=0;i<ComponentCount;i++)
	{
		// Convert Node Names to numbers
		if(AllComponentsUsed[i]->ComponentType==3)
		{
			nodeConversion[k,0] = AllComponentsUsed[i]->ComponentName;\
				nodeConversion[k,1] = (k+1).ToString();
			k++;
		}
	}
	for(i=0;i<(ComponentCount-1);i++)
	{
		usenode = "";
			if((AllComponentsUsed[i]->ComponentType)==0) // if type Voltage
			{
				Netlist[rowCount,0] = AllComponentsUsed[i]->ComponentName;
				Netlist[rowCount,3] = (AllComponentsUsed[i]->ComponentValue).ToString();
				if(AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentType==4) // if connected to type Ground
				{
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==1) // if Voltage *from* to connectedcomponent1 is top (pos)
					{
						Netlist[rowCount,1] = "0";
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==2) // if Voltage *from* to connectedcomponent1 is bottom (neg)
					{
						Netlist[rowCount,2] = "0";
					}
				}
				if(AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentType==4) // if connected to type Ground
				{
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==1) // if Voltage *from* to connectedcomponent2 is top (pos)
					{
						Netlist[rowCount,1] = "0";
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==2) // if Voltage *from* to connectedcomponent2 is bottom (neg)
					{
						Netlist[rowCount,2] = "0";
					}
				}
				if(AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentType==2) // if connected to type Resistor
				{
					// Create node between sources and passive elements, name it NodeCount + 1 and add it to programNodesArray
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==1) // if Voltage *from* to connectedcomponent1 is top (pos)
					{
						Netlist[rowCount,1] = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
						
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==2) // if Voltage *from* to connectedcomponent1 is bottom (neg)
					{
						Netlist[rowCount,2] = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
				}
				if(AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentType==2) // if connected to type Resistor
				{
					// Create node between sources and passive elements, name it NodeCount + 1 and add it to programNodesArray
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==1) // if Voltage *from* to connectedcomponent2 is top (pos)
					{
						Netlist[rowCount,1] = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==2) // if Voltage *from* to connectedcomponent2 is bottom (neg)
					{
						Netlist[rowCount,2] = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
				}
				if(AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentType==3) // if connected to type Node
				{
					for(int nodesearch=0;nodesearch<OriginalNodeCount;nodesearch++) // Search for the node conversion
					{
						if(nodeConversion[nodesearch,0]==AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName)
							nodeconvertedname = nodeConversion[nodesearch,1];
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==1) // if Voltage *from* to connectedcomponent1 is top (pos)
					{
						Netlist[rowCount,1] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==2) // if Voltage *from* to connectedcomponent1 is bottom (neg)
					{
						Netlist[rowCount,2] = nodeconvertedname;
					}
				}
				if(AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentType==3) // if connected to type Node
				{
					for(int nodesearch=0;nodesearch<OriginalNodeCount;nodesearch++) // Search for the node conversion
					{
						if(nodeConversion[nodesearch,0]==AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName)
							nodeconvertedname = nodeConversion[nodesearch,1];
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==1) // if Voltage *from* to connectedcomponent1 is top (pos)
					{
						Netlist[rowCount,1] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==2) // if Voltage *from* to connectedcomponent1 is bottom (neg)
					{
						Netlist[rowCount,2] = nodeconvertedname;
					}
				}
			} // End if type Voltage


		if((AllComponentsUsed[i]->ComponentType)==2) // if type Resistor
		{
			Netlist[rowCount,0] = AllComponentsUsed[i]->ComponentName;
			Netlist[rowCount,3] = (AllComponentsUsed[i]->ComponentValue).ToString();
			if(AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentType==4) // if connected to type Ground
			{
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==1) // if Resistor *from* to connectedcomponent1 is top (pos)
					Netlist[rowCount,1] = "0";
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==2) // if Resistor *from* to connectedcomponent1 is bottom (neg)
					Netlist[rowCount,2] = "0";
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==3) // if Resistor *from* to connectedcomponent1 is left (pos)
					Netlist[rowCount,1] = "0";
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==4) // if Resistor *from* to connectedcomponent1 is right (neg)
					Netlist[rowCount,2] = "0";
			}
			if(AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentType==4) // if connected to type Ground
			{
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==1) // if Resistor *from* to connectedcomponent2 is top (pos)
					Netlist[rowCount,1] = "0";
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==2) // if Resistor *from* to connectedcomponent2 is bottom (neg)
					Netlist[rowCount,2] = "0";
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==3) // if Resistor *from* to connectedcomponent2 is left (pos)
					Netlist[rowCount,1] = "0";
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==4) // if Resistor *from* to connectedcomponent2 is right (neg)
					Netlist[rowCount,2] = "0";
			}
			if(AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentType==2) // if connected to type Resistor
			{
				usenode = "";
				// Check to see if node has already been created
				for(p=0;p<11;p++)
				{
					if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
					if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
				}
				// Create node between sources and passive elements, name it NodeCount + 1 and add it to programNodesArray
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==1) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==2) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==3) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==4) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
			}
			if(AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentType==2) // if connected to type Resistor
			{
				usenode = "";
				// Check to see if node has already been created
				for(p=0;p<11;p++)
				{
					if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
					if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
				}
				// Create node between sources and passive elements, name it NodeCount + 1 and add it to programNodesArray
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==1) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==2) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==3) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==4) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
			}
			if(AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentType==0) // if connected to type Voltage
			{
				usenode = "";
				// Check to see if node has already been created
				for(p=0;p<11;p++)
				{
					if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
					if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
				}
				// Create node between sources and passive elements, name it NodeCount + 1 and add it to programNodesArray
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==1) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==2) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==3) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==4) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
			}
			if(AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentType==0) // if connected to type Voltage
			{
				usenode = "";
				// Check to see if node has already been created
				for(p=0;p<11;p++)
				{
					if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
					if(programNodesArray[p,1]==AllComponentsUsed[i]->ComponentName)
					{
						if(programNodesArray[p,0]==AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName)
						{
							usenode = (OriginalNodeCount+int::Parse(programNodesArray[p,2])).ToString();
						}
					}
				}
				// Create node between sources and passive elements, name it NodeCount + 1 and add it to programNodesArray
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==1) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==2) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==3) // if Resistor *from* to connectedcomponent2 is top (pos)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,1] = usenode;
				}
				if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==4) // if Resistor *from* to connectedcomponent2 is bottom (neg)
				{
					if(usenode=="")
					{
						usenode = (NodeCount+1).ToString();
						programNodesArray[ProgramNodeCount,0] = AllComponentsUsed[i]->ComponentName;
						programNodesArray[ProgramNodeCount,1] = AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName;
						programNodesArray[ProgramNodeCount,2] = (ProgramNodeCount+1).ToString();
						ProgramNodeCount++;
						NodeCount++;
					}
					Netlist[rowCount,2] = usenode;
				}
			}
			if(AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentType==3) // if connected to type Node
				{
					for(int nodesearch=0;nodesearch<OriginalNodeCount;nodesearch++) // Search for the node conversion
					{
						if(nodeConversion[nodesearch,0]==AllComponentsUsed[i]->ComponentConnectedArray[0]->ComponentName)
							nodeconvertedname = nodeConversion[nodesearch,1];
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==1) // if Voltage *from* to connectedcomponent1 is top (pos)
					{
						Netlist[rowCount,1] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==2) // if Voltage *from* to connectedcomponent1 is bottom (neg)
					{
						Netlist[rowCount,2] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==3) // if Voltage *from* to connectedcomponent1 is left (pos)
					{
						Netlist[rowCount,1] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[0,0]==4) // if Voltage *from* to connectedcomponent1 is right (neg)
					{
						Netlist[rowCount,2] = nodeconvertedname;
					}
				}
			if(AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentType==3) // if connected to type Node
				{
					for(int nodesearch=0;nodesearch<OriginalNodeCount;nodesearch++) // Search for the node conversion
					{
						if(nodeConversion[nodesearch,0]==AllComponentsUsed[i]->ComponentConnectedArray[1]->ComponentName)
							nodeconvertedname = nodeConversion[nodesearch,1];
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==1) // if Voltage *from* to connectedcomponent1 is top (pos)
					{
						Netlist[rowCount,1] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==2) // if Voltage *from* to connectedcomponent1 is bottom (neg)
					{
						Netlist[rowCount,2] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==3) // if Voltage *from* to connectedcomponent1 is left (pos)
					{
						Netlist[rowCount,1] = nodeconvertedname;
					}
					if(AllComponentsUsed[i]->ComponentConnectedNodeArray[1,0]==4) // if Voltage *from* to connectedcomponent1 is right (neg)
					{
						Netlist[rowCount,2] = nodeconvertedname;
					}
				}
		} // End if type Resistor
		rowCount++;
	}
	TrueNodeCount = NodeCount;
} // End Create Netlist

void Solution::CreateMatrix()
{
	G = gcnew array<double,2>(TrueNodeCount,TrueNodeCount);
	B = gcnew array<double,2>(TrueNodeCount,VoltageCount);
	C = gcnew array<double,2>(VoltageCount,TrueNodeCount);
	D = gcnew array<double,2>(VoltageCount,VoltageCount);
	Ay = gcnew array<double,2>(TrueNodeCount+VoltageCount,TrueNodeCount+VoltageCount);

	V = gcnew array<String^>(TrueNodeCount);
	J = gcnew array<String^>(VoltageCount);
	X = gcnew array<String^>(TrueNodeCount+VoltageCount);
	Z = gcnew array<double,2>(TrueNodeCount+VoltageCount,1);

	array<String^>^ voltage = gcnew array<String^>(VoltageCount);

	int node = 1;
	
	// Create G diagonal
	for(int i=0;i<(TrueNodeCount);i++)
	{
		for(int k=0;k<(ComponentCount-OriginalNodeCount-1);k++)
		{
			if(Netlist[k,1]==(node).ToString())
			{
				if(Netlist[k,0]->StartsWith("R"))
					G[i,i] += 1/double::Parse(Netlist[k,3]);
			}
		}
		for(int k=0;k<(ComponentCount-OriginalNodeCount-1);k++)
		{
			if(Netlist[k,2]==(node).ToString())
			{
				if(Netlist[k,0]->StartsWith("R"))
					G[i,i] += 1/double::Parse(Netlist[k,3]);
			}
		}
		node++;
	}

	// Create the rest of G
//	for(int i=1,j=2;i<(TrueNodeCount),j<(TrueNodeCount+1);i++,j++)
//	{
//		for(int k=0;k<(ComponentCount-OriginalNodeCount-1);k++)
//		{
//			if(((Netlist[k,1]==(i).ToString())|(Netlist[k,1]==(j).ToString()))&&((Netlist[k,2]==(i).ToString())|(Netlist[k,2]==(j).ToString()))&&(Netlist[k,0]->StartsWith("R")))
//			{
//				G[(i-1),(j-1)] = -1/double::Parse(Netlist[k,3]);
//				G[(j-1),(i-1)] = -1/double::Parse(Netlist[k,3]);
//			}
//		}
//	}


	// Create the rest of G
	int firstnode;
	int	secondnode;
	for(int k=0;k<(ComponentCount-OriginalNodeCount-1);k++)
	{
		if(Netlist[k,0]->StartsWith("R"))
		{
			firstnode = int::Parse(Netlist[k,1]);
			secondnode = int::Parse(Netlist[k,2]);
			if(firstnode!=0&&secondnode!=0)
			{
				G[(firstnode-1),(secondnode-1)] = -1/double::Parse(Netlist[k,3]);
				G[(secondnode-1),(firstnode-1)] = -1/double::Parse(Netlist[k,3]);
			}
		}
	}

	// Create B
	int k=0,i=0;
	int positivenode=0, negativenode=0;
	for(i=0;i<(ComponentCount-OriginalNodeCount-1);i++)
	{
		if(Netlist[i,0]->StartsWith("V"))
		{
			positivenode = int::Parse(Netlist[i,1])-1;
			negativenode = int::Parse(Netlist[i,2])-1;
			if(positivenode!=-1)
				B[positivenode,k] = 1;
			if(negativenode!=-1)
				B[negativenode,k] = -1;
			voltage[k] = Netlist[i,0];
			k++;
		}
	}

	// Create C
	k=0,i=0;
	positivenode=0, negativenode=0;
	for(i=0;i<(ComponentCount-OriginalNodeCount-1);i++)
	{
		if(Netlist[i,0]->StartsWith("V"))
		{
			positivenode = int::Parse(Netlist[i,1])-1;
			negativenode = int::Parse(Netlist[i,2])-1;
			if(positivenode!=-1)
				C[k,positivenode] = 1;
			if(negativenode!=-1)
				C[k,negativenode] = -1;
			voltage[k] = Netlist[i,0];
			k++;
		}
	}

	// Create A from G
	for(i=0;i<TrueNodeCount;i++)
	{
		for(k=0;k<TrueNodeCount;k++)
		{
			Ay[i,k] = G[i,k];
		}
	}
	// Create A from B
	int l=0;
	int p = k;
	for(i=0;i<TrueNodeCount;i++)
	{
		k=p;
		for(l=0;l<VoltageCount;l++)
		{
			Ay[i,k] = B[i,l];
			k++;
		}
	}
	// Create A from C
	l=0;
	k = TrueNodeCount;
	for(i=0;i<VoltageCount;i++)
	{
		for(l=0;l<TrueNodeCount;l++)
		{
			Ay[k,l] = C[i,l];
		}
		k++;
	}

	// Create V
	for(i=0;i<TrueNodeCount;i++)
	{
		V[i] = String::Concat(L"v_",(i+1).ToString());
	}

	// Create J
	int j=0;
	for(i=0;i<(ComponentCount-OriginalNodeCount-1);i++)
	{
		if(Netlist[i,0]->StartsWith("V"))
		{
			J[j] = String::Concat(L"i_",Netlist[i,0]);
			j++;
		}
	}

	// Create X [v j]
	j=0;
	for(i=0;i<TrueNodeCount;i++)
	{
		X[j] = V[i];
		j++;
	}
	for(i=0;i<VoltageCount;i++)
	{
		X[j] = J[i];
		j++;
	}

	// Create Z
	i = TrueNodeCount;
	for(k=0;k<(ComponentCount-OriginalNodeCount-1);k++)
	{
		if(Netlist[k,0]->StartsWith("V"))
		{
			Z[i,0] = double::Parse(Netlist[k,3]);
			i++;
		}
	}
}

// Matrix Inversion
void Solution::MatrixInversion(array<double,2>^ A, int order, array<double,2>^ Y)
{
    // get the determinant of A
    double det = 1.0/CalcDeterminant(A,order);

    // memory allocation
    array<double,2>^ temp = gcnew array<double,2>((order-1),(order-1));
    array<double,2>^ minor = gcnew array<double,2>(order-1,order-1);
//    for(int i=0;i<order-1;i++)
  //      minor[i,0] = temp[i*(order-1)];

    for(int j=0;j<order;j++)
    {
        for(int i=0;i<order;i++)
        {
            // get the co-factor (matrix) of A(j,i)
            GetMinor(A,minor,j,i,order);
            Y[i,j] = det*CalcDeterminant(minor,order-1);
            if( (i+j)%2 == 1)
                Y[i,j] = -Y[i,j];
        }
    }
}

// Get cofactor matrix
int Solution::GetMinor(array<double,2>^ src, array<double,2>^ dest, int row, int col, int order)
{
	// Indicate which col and row is being copied to dest
	int colCount=0, rowCount=0;
	
	for(int i=0;i<order;i++)
	{
		if(i!=row)
		{
			colCount = 0;
			for(int j=0;j<order;j++)
			{
				if(j!=col)
				{
					dest[rowCount,colCount] = src[i,j];
					colCount++;
				}
			}
			rowCount++;
		}
	}
	return 1;
}

// Calculate the determinant recursively.
double Solution::CalcDeterminant(array<double,2>^ mat, int order)
{
	// Stop when matrix is single element
	if(order==1)
		return mat[0,0];
	
	// Determinant value
	double det = 0;
	
	// Allocate the cofactor matrix
	array<double,2>^ minor = gcnew array<double,2>(order-1,order-1);

	for(int i=0;i<order;i++)
	{
		// Get minor of element (0,i)
		GetMinor(mat,minor,0,i,order);
		// Recursion
		det += pow(-1.0,i)*mat[0,i]*CalcDeterminant(minor,order-1);
	}
	return det;
}

void Solution::MatrixMultiplication(array<double,2>^ ONE, int m1, int n1, array<double,2>^ TWO, int m2, int n2, array<double,2>^ RESULT)
{
	bool process = true;
	int i = 0, k = 0, l = 0;
	
	if(n1!=m2)
		process = false;

	if(process==true)
	{
		for(l=0;l<n2;l++)
		{
			for(i=0;i<m1;i++)
			{
				for(k=0;k<n1;k++)
				{
					RESULT[i,l] += ONE[i,k]*TWO[k,l];
				}
			}
		}
	}
}