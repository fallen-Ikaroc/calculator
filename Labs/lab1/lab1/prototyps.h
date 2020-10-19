#pragma once

void interface();

void seminar1();
void seminar2();
void seminar3();

double* ArrayIn(int &size);
int** ArrayIn(int &size, int &sizec);
void ArrayOut(int size, double* array);
void ArrayOut(int size, int sizec, int** array);

void Minimal(double* array, int size);
void sum(int size, double* array);
void sum(int size, int sizec, int** array);
void sort(int size, double* array);

int** changec(int size, int** array, int k, int j);
int character(int size, int sizec, int** array, int j);
void sort(int size, int sizec, int** array);

void in(char (&text)[10][100]);
void out(char text[10][100]);
void search(char text[1000]);