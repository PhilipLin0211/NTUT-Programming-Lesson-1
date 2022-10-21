#include <stdio.h>
#include <stdlib.h>

double Power(double,int);
void main(int)
{
	int k;
	double Ans;
	printf("計算3.5的k次方?請輸入k=");
	scanf("%d", &k);
	Ans = Power(3.5,k);
	system("pause");
	return 0;
}

double Power(double X,int n)
{
	int i;
	double PowerXn = 1;
	for(i = 1; i <= n; i++)
	{
		PowerXn = PowerXn*X;
	}
	return PowerXn;
}
