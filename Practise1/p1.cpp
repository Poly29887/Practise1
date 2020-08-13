#include<stdio.h>
int main()
{
	int m;
	printf("Input minutes: ");
	scanf("%d", &m);
	if (m >= 0)
	{
		if (m / 60 == 0 || m / 60 == 1) printf("%d hour ", m / 60);
		else printf("%d hours ", m / 60);
		if (m % 60 == 0 || m % 60 == 1) printf("%d minute", m % 60);
		else printf("%d minutes", m % 60);
	}
	else
	{
		printf("ERROR");
	}
}