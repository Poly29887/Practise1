#include <stdio.h>
int main()
{
	int num1, num2, num3;
	scanf("%d %d %d",&num1,&num2,&num3);
	printf("1st number : %d ,",num1);
	printf("2nd number : %d ,", num2);
	printf("3rd number : %d\n", num3);
	if (num1 > num2 && num1 > num3) printf("The 1st Number is the greatest among three"); 
	else if (num2 > num1 && num2 > num3) printf("The 2nd Number is the greatest among three");
	else if (num3 > num1 && num3 > num2) printf("The 1rd Number is the greatest among three");
	else printf("There is not the greatest among three\n");
}