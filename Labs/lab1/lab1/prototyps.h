#pragma once

void maininterface();

//seminar 1
void seminar1();
double* ArrayIn(int size);
int* Minimal(double* array, int size, int &minimal_quantity);
double sum(int size, double* array, int& k, bool& error);
double* sort(int size, double* array);
void ArrayOut(int size, double* array);

//seminar 2
void seminar2();
int** ArrayIn(int size, int sizec);
int sum(int size, int sizec, int** array);
int** changec(int size, int** array, int k, int j);
int character(int size, int sizec, int** array, int j);
int** sort(int size, int sizec, int** array, bool& k);
void ArrayOut(int size, int sizec, int** array);

//seminar 3
void seminar3();
char** in(bool &a);
void out(char **text);
char* search(char text[1000], bool &q, int &c);