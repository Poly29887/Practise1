#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num1,num2,i,M;
	printf("Input 1st number for LCM : ");
	scanf("%d",&num1); 
	printf("Input 2st number for LCM : ");
    scanf("%d",&num2);
	M = num1 * num2;
	for (i = 1; i <= M; i++)
	{
		if (i % num1 == 0 && i % num2 == 0)
		{
			printf("The LCM of %d and %d is : %d\n",num1,num2,i);
			break;
		}
	}

}