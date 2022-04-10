#pragma once
#include <stdio.h>
#include <math.h>

//函数的声明

//微分函数

double func(double t, double y);


//二级欧拉近似法

double Euler(double x0, double xn, double y0);


//龙格-库塔法

int RungeKutta(double y0, double a, double b, int n, double* x, double* y, double (*func)(double, double));
