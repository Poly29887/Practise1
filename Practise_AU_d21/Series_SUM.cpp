#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i, n1, n2,count=0;
	printf("Input the number : ");
	scanf("%d", &n1);
	printf("Input the number : ");
	scanf("%d", &n2);
	if (n1 < n2)
	{
		for (i = n1; i <= n2; i++)
		{
			if (i%5==0)
			{
				printf("<%d> ",i);
				count++;
			}
			else
			{
				printf("%d ",i);
			}
			
		}
	}
	else
	{
		for (i = n2; i <= n1; i++)
		{
			if (i % 5 == 0)
			{
				printf("<%d> ", i);
				count++;
			}
			else
			{
				printf("%d ", i);
			}
			
		}
	}
	printf("\nResult : %d", count);
}