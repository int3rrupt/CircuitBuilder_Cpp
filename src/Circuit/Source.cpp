// Source Implementation
// Source.cpp

#include "StdAfx.h"
#include "Source.h"

Source::Source()
{
	SourceValue = 0.0;
	SourceLocationX = 10;
	SourceLocationY = 10;
	SourceName = "no name";
	SourceTopNode = false;
	SourceBottomNode = false;
}

Source::Source(double SOURCEVALUE, int SOURCELOCATIONX, int SOURCELOCATIONY, String^ SOURCENAME)
{
	SourceValue = SOURCEVALUE;
	SourceLocationX = SOURCELOCATIONX;
	SourceLocationY = SOURCELOCATIONY;
	SourceName = SOURCENAME;
	SourceTopNode = false;
	SourceBottomNode = false;
}

String^ Source::ToString()
{
	return String::Concat(L"Name: ",SourceName,L"\nValue: ",SourceValue,L" V",
		L"\nLocation: [",SourceLocationX,L",",SourceLocationY,L"]\n\n\n");
}