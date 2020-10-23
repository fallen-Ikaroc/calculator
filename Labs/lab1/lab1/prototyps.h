#pragma once

void interface();

void seminar1();
void seminar2();
void seminar3();

double* ArrayIn(int &size);
int** ArrayIn(int &size, int &sizec);
int ArrayOut(int size, double* array);
int ArrayOut(int size, int sizec, int** array);

double Minimal(double* array, int size);
double sum(int size, double* array);
int sum(int size, int sizec, int** array);
double* sort(int size, double* array);

int** changec(int size, int** array, int k, int j);
int character(int size, int sizec, int** array, int j);
int** sort(int size, int sizec, int** array);

void in(char (&text)[10][100]);
void out(char text[10][100]);
char* search(char text[1000]);