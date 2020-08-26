#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, num[10];
	for (i = 0; i < 10; i++)
	{
		printf("element - %d : ",i);
		scanf("%d", &num[i]);
	}
	printf("Elements in array are: ");
	for (i = 0; i < 10; i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
}