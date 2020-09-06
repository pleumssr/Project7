#include<stdio.h>
int main()
{
	int x, i, j;
	scanf_s("%d", &x);
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < x - i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}