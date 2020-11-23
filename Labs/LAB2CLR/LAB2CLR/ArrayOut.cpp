#include "pch.h"
#include "core.h"
using namespace System;

void MatrixOut(array<int>^ matrix)
{
	Console::Write("\n");
	for each (int element in matrix)
		Console::Write("{0} ", element);
	Console::Write("\n\n");
}