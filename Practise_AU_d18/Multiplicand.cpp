#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, m;
	printf("Input Multiplicand : ");
	scanf("%d", &m);
	for (i = 1; i <= 12; i++)
	{
		printf("%d x %d = %d\n",m,i,m*i);
	}

}