#include "pch.h"
#include "core.h"
using namespace System;

void MatrixOut(array<int>^ matrix)
{
	for each (int element in matrix)
		Console::Write("{0} ", element);
}