#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int r;
	scanf("%d %d", &num1, &num2);
	r = num1 % num2;
	if (r == 0)
	{
		printf("%d is the mutiples of %d", num1, num2);
	}
	else
	{
		printf("%d is not the mutiples of %d", num1, num2);
	}
	system("pause");
	return 0;
}
