#pragma once

//common
void maininterface();
int EnterSize();
char DataTypeIn();
#include "EnterElement.h"

//start seminar 1
#include "ArrayIn.h"
#include "ArrayOut.h"
#include "Minimal.h"
#include "sorta.h"
#include "sum.h"
#include "seminar1.h"
//end seminar 1

//start seminar 2
#include "ArrayInM.h"
#include "ArrayOutM.h"
#include "changec.h"
#include "character.h"
#include "sort.h"
#include "sumofdoublearray.h"
#include "seminar2.h"
//end seminar 2

//start seminar 3
void seminar3();
char** in(bool& error);
void out(char** text);
char* search(char text[1000], bool& ErrorQuotes, int& SizeOfText);
//end seminar 3