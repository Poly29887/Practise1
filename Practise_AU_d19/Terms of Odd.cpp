#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int term,i = 1, Onum = 0 , sum = 0;
	printf("Input number of terms : ");
	scanf("%d",&term);
	while (i <= term)
	{
		if (i == 1)
		{
			Onum = 1;
			printf("The odd numbers are %d", Onum);
		}
		else
		{
			Onum += 2;
			printf(" %d", Onum);
		}
		sum += Onum;
		i++;
	}
	printf("\nThe Sum of odd Natural Number upto %d terms : %d\n", term,sum);
}