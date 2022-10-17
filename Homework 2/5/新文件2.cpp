#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int l;
	int b;
	
	printf("Enter length: ");
	scanf("%d", &l);
	printf("Enter breadth: ");
	scanf("%d", &b);
	for(int i = 0; i < b; i++)
	{
		for(int j = 0; j < l; j++)
		{
			if(i == 0 || i == b -1 || j == 0 || j == l-1)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

