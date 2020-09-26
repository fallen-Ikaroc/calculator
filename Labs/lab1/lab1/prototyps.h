#pragma once

void interface();

void seminar1();
void seminar2();
void seminar3();

double* ArrayIn(int size);
int** ArrayIn(int size, int sizec);
void ArrayOut(int size, double* array);
void ArrayOut(int size, int sizec, int** array);

int Minimal(double* array, int size);
double sum(int size, double* array);
int sum(int size, int sizec, int** array);

int** changec(int size, int** array, int k, int j);
int character(int size, int sizec, int** array, int j);
int** sort(int size, int sizec, int** array);