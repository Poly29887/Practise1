#include<stdio.h>
int main()
{
	int a, b,ans;
	float ansF;
	printf("Input any two numbers separated by comma : ");
	scanf("%d,%d",& a,& b);
	printf("The sum of the given numbers : %d\n", a+b);
	printf("The difference of the given numbers : %d\n", a - b);
	printf("The product of the given numbers : %d\n", a * b);
	ansF = (float)a/b;
	if(b==0)printf("The quotient of the given numbers : don't have definition\n");
	else printf("The quotient of the given numbers : %f\n", ansF);


}