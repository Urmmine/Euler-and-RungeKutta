#define _CRT_SECURE_NO_WARNINGS 1
#include "head.h"



int main()
{	
	//二级欧拉近似法
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	double ret = Euler(0, 1, 0);
	printf("二级欧拉近似法结果为：%lf\n", ret);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");

	//龙格-库塔法
	double x[11], y[11];
	printf("用四阶龙格-库塔法：\n");
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