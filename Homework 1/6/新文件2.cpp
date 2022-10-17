#include <stdio.h>
#include <stdlib.h>
int l;

int main()
{
	for (int i = 6; i > 0; i--)
	{
		for (int j = 1; j <= 5-l; j++)
		{
			printf(" ");
		}
		for (int k = 0; k < 2*l-1; k++)
		{
			printf("*");
		}
		++l;
		printf("\n");
	}
	system("pause");
	return 0;
}
