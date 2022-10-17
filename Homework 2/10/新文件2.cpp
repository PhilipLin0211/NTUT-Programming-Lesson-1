#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int l;//菱形的邊長
	
	while(1)
	{
		printf("輸入菱形的邊長： ");
		scanf("%d", &l);
		if(l <= 0)
		{
			break;
		}
		for (int i = 1; i <= l; i++)//遍歷菱形最長一行上方（包括最長的一行）所有行
		{
			printf(" ");//每行前面加空格，整齊好看
			for (int j = 1; j <= 2 * l - 1; j++)//遍歷菱形最長一行上方（包括最長的一行）每行的所有列	
			{
				if (j > l - i && j < 2 * l - (l - i))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
		for (int i = l + 1; i < 2 *  l + 1; i++)//遍歷菱形最長一行上方（包括最長的一行）所有行
		{
			printf(" ");//每行前面加空格，不和邊框擁擠，可去掉
			for (int j = 1; j <= 2 * l - 1; j++)//遍歷菱形最長一行下方（不包括最長的一行）每行的所有列
			{
				if (j > i - l && j < 2 * l - (i - l))
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	system("pause");
	return 0;
}
