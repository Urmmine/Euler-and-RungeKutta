#pragma once
#include <stdio.h>
#include <math.h>

//����������

//΢�ֺ���

double func(double t, double y);


//����ŷ�����Ʒ�

double Euler(double x0, double xn, double y0);


//����-������

int RungeKutta(double y0, double a, double b, int n, double* x, double* y, double (*func)(double, double));
