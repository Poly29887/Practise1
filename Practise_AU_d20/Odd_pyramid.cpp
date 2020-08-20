#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int row,i,j,num = 1;
	printf("Input number of rows : "); 
	scanf("%d", &row);
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row - i;j++)
		{
			printf(" ");
		}
		for (j = 1; j <= num;j++)
		{
			printf("*");
			
		}
		num += 2;
		printf("\n");
	}
}