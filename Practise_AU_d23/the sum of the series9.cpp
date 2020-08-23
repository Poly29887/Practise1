#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long i,j,term,p=0,sum=0,keep = 1;
	printf("Input the number or terms : ");
	scanf("%ld", &term);
	for (i = 1; i <= term; i++)
	{
		keep = 1;
		for (j = 1; j < i; j++)
		{
			keep *= 10;
		}
		keep *= 9;
		p += keep;
		printf("%ld ",p);
		sum += p;
	}
	printf("\nThe sum of the saries = %ld\n",sum);
}