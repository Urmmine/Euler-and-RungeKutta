#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"



int main()
{	
	//����ŷ�����Ʒ�
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	double ret = Euler(0, 1, 0);
	printf("����ŷ�����Ʒ����Ϊ��%lf\n", ret);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	//����-������
	double x[11], y[11];
	printf("���Ľ�����-��������\n");
	RungeKutta(0, 0, 1, 10, x, y, func);
	for (int i = 0; i < 11; i++)
	{
		printf("x[%d]=%f,y[%d]=%f\n", i, x[i], i, y[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	return 0;
}