#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) printf("This is an alphabet\n");
	else if (ch >= 48 && ch <= 57) printf("This is a digit.\n");
	else printf("This is a special character.\n");
}