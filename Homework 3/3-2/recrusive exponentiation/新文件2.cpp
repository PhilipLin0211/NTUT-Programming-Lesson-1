#include <stdio.h>
#include <math.h>

double intpower(double x, int n)
{
    double result;
    
	if(n > 1 && n % 2 != 0)
	{
		result = x * intpower(x, (n - 1) / 2) * intpower(x, (n - 1) / 2);
	}
	
    if(n > 1 && n % 2 == 0)
	{
		result = intpower(x, n / 2) * intpower(x, n / 2);
	}
    
	if(n == 1) return x;
    else return result;
}


int main()
{
    int n;
    double x,result;
    
	printf("x\n");
    scanf("%lf", &x);
    printf("n\n");
    scanf("%d", &n);
    printf("result = %.2f\n", intpower(x,n));

    return 0;
}
