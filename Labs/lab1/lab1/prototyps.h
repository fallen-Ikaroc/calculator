#pragma once


//common
void maininterface();
int EnterInt();
double EnterDouble();
int EnterSize();

//start seminar 1
void seminar1();
double* ArrayIn(int size);
int* Minimal(double* array, int size, int &minimal_quantity);
double sum(int size, double* array, int& k, bool& error);
double* sort(int size, double* array);
void ArrayOut(int size, double* array);
//end seminar 1

//start seminar 2
void seminar2();
int** ArrayIn(int size, int sizec);
int sum(int size, int sizec, int** array, bool& triger);
int** changec(int size, int** array, int k, int j);
int character(int size, int sizec, int** array, int j);
int** sort(int size, int sizec, int** array, bool& k);
void ArrayOut(int size, int sizec, int** array);
//end seminar 2

//start seminar 3
void seminar3();
char** in(bool &a);
void out(char **text);
char* search(char text[1000], bool &q, int &c);
//end seminar 3