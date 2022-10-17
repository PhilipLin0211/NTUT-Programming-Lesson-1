#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int num3;
	
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			if (num2 > num3)
			{
				printf("The largest  integer: %d \n", num1);
				printf("The smallest integer: %d \n", num3);
			}
		}
		
	}
	if (num1 > num2)
	{
		if (num1 > num3)
		{
			if (num3 > num2)
			{
				printf("The largest  integer: %d \n", num1);
				printf("The smallest integer: %d \n", num2);
			}
		}
		
	}
	if (num2 > num1)
	{
		if (num2 > num3)
		{
			if (num1 > num3)
			{
				printf("The largest  integer: %d \n", num2);
				printf("The smallest integer: %d \n", num3);
			}
		}
		
	}
	if (num2 > num1)
	{
		if (num2 > num3)
		{
			if (num3 > num1)
			{
				printf("The largest  integer: %d \n", num2);
				printf("The smallest integer: %d \n", num1);
			}
		}
		
	}
	if (num3 > num1)
	{
		if (num3 > num2)
		{
			if (num1 > num2)
			{
				printf("The largest  integer: %d \n", num3);
				printf("The smallest integer: %d \n", num2);
			}
		}
		
	}
	if (num3 > num1)
	{
		if (num3 > num2)
		{
			if (num2 > num1)
			{
				printf("The largest  integer: %d \n", num3);
				printf("The smallest integer: %d \n", num1);
			}
		}
		
	}
	system("pause");
	return 0;
}
