#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void solo(int );
void multiplayer(int,int);

int main(void)
{
	int a,b,i;
	printf("請輸入遊玩模式，(單人模式=1,多人模式=2):");
	scanf("%d", &i);
	switch (i)
	{
		case 1:
			printf("請輸入0~a，a=");
			scanf("%d", &a);
			solo(a);
			break;
		case 2:
			printf("請輸入遊玩人數，b=");
			scanf("%d", &b);
			printf("請輸入0~a，a=");
			scanf("%d", &a);
			multiplayer(a,b);
			break;
	}
	system("pause");
	return 0;
}
void solo(int x)
{
	srand(time(NULL));
	int n, count = 0,i;
	int min = 1, max = x;
	int key = rand() % x + 1;
	char c[2] = "y";

	do 
	{
		while (count%2==0)
		{
			printf("\n數字範圍為 %d 到 %d.\n", min, max);
			printf("請玩家輸入你的猜測: ");
			scanf("%d", &n);
			if (n >= min && n <= max) {
				if (n > key)
					max = n - 1;
				else if (n < key)
					min = n + 1;
				else {
					printf("碰!! 你輸了!\n\n是否再來一局 (Y/N)? ");
					count = -1;
					min = 1;
					max = x;
					scanf("%s", &c);
				}
				count++;
			}
			else
				printf("輸入數值錯誤.\n");
		}

		while (count % 2 == 1)
		{
			printf("\n數字範圍為 %d 到 %d.\n", min, max);
			i = rand()%(max - min+1) + min;
			printf("電腦猜 %d\n",i);
			if (i >= min && i <= max) {
				if (i > key)
					max = i - 1;
				else if (i < key)
					min = i + 1;
				else {
					printf("碰!! 電腦輸了!\n\n是否再來一局 (Y/N)? ");
					count = -1;
					min = 1;
					max = x;
					scanf("%s", &c);
				}
				count++;
			}
			else
				printf("輸入數值錯誤.\n");
		}


	} while (c[0] == 'y' || c[0] == 'Y');
}
void multiplayer(int x,int y)
{
	srand(time(NULL));
	int n, count = 0;
	int min = 1, max = x;
	int key = rand() % x + 1;
	int player[100];
	for (int i = 0; i < y; i++)
	{
		player[i] = i + 1;
	}
	char c[2] = "y";
	do {
		printf("\n數字範圍為 %d 到 %d.\n", min, max);
		printf("請玩家 %d 輸入你的猜測: ", player[count % y]);
		scanf("%d", &n);
		if (n >= min && n <= max) 
		{
			if (n > key)
				max = n - 1;
			else if (n < key)
				min = n + 1;
			else 
			{
				printf("碰!! 玩家 %d輸了!\n\n是否再來一局 (Y/N)? ", player[count % y]);
				count = -1;
				min = 1;
				max = x;
				scanf("%s", &c);
			}
			count++;
		}
		else
			printf("輸入數值錯誤.\n");
	} while (c[0] == 'y' || c[0] == 'Y');
}

