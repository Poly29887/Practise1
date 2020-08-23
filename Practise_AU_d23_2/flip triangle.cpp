#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,j,row,keep=1;
	printf("Input number of rows: ");
	scanf("%d",&row);
	printf("\n");
	i = row;
	keep = 1+((row-1)*2);
	while(i>=0)
	{
		for (j = 1; j <= row-i; j++)
		{
			printf(" ");
		}
		for (j=keep; j >=1; j--)
		{
			printf("*");
		}
		printf("\n");
		keep -= 2;
		i--;
    }
}