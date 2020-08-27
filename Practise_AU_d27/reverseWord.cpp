#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char word[100];
	int i,n;
	printf("Input a string to reverse : ");
	scanf("%[^\n]s", &word);
	n = strlen(word);
	for (i = n - 1; i >= 0; i--)
	{
		printf("%c",word[i]);
	}
	printf("\n");


}