#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"


//����ŷ������

double func(double t, double y)
{
	return (1 + exp(-t) * sin(y));
}

double Euler(double x0, double xn, double y0)
{
	double x, y, yp, yc, h;
	int i;
	x = x0;
	y = y0;
	h = 0.1;
	for (i = 1; i < 11; i++)
	{
		yp = y + h * func(x, y);
		x = x0 + i * h;
		yc = y + h * func(x, yp);
		y = (yp + yc) / 2;

	}
	return y;
}




//���������

int RungeKutta(double y0, double a, double b, int n, double* x, double* y, double (*func)(double, double))//x��y������
{
	double h = (b - a) / n, k1, k2, k3, k4;//hΪ����
	int i;
	x[0] = a;
	y[0] = y0;
	for (i = 0; i < n; i++)
	{
		x[i + 1] = x[i] + h;//�Ȳ���
		k1 = func(x[i], y[i]);
		k2 = func(x[i] + h / 2, y[i] + h * k1 / 2);
		k3 = func(x[i] + h / 2, y[i] + h * k2 / 2);
		k4 = func(x[i] + h, y[i] + h * k3);
		y[i + 1] = y[i] + h * (k1 + 2 * k2 + 2 * k3 + k4) / 6;
	}
	return 1;
}




