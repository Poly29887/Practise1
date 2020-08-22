#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int input,i = 1, fac = 1;
	printf("Input the number : ");
	scanf("%d",&input);
	while (i <= input)
	{
		fac *= i;
		i++;
	}
	printf("The Factorial of %d is: %d",input,fac);
}