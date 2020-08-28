#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int term, i, N1=0, N2=1;
	printf("Input number of terms to display : "); 
	scanf("%d", &term);
	if(term>=0)
	{ 
	  printf("Here is the Fibonacci series upto to %d terms :\n",term);
	  for (i = 1; i <= term; i++)
	  {
		 if (i == 1)
		 {
			 printf("0 ");
		 }
		 else if (i % 2 != 0)
		 {
			 N1 = N1 + N2;
			 printf("%d ", N1);
		 }
		 else
		 {
			 N2 = N1 + N2;
			 printf("%d ", N2);
		 }
	  }
	}
	printf("\n");
}