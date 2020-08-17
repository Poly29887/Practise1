#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, n;
	scanf("%d",&n);
	i = 1;
	while (i <= n)
	{
		printf("Number is : %d and cube of the %d is : %d\n",i,i,i*i*i);
		i++;
	}
}