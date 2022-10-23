#include <stdio.h>

int main()
{
    unsigned int i;
    unsigned long long int j;
    float a[200];
    a[0] = 0;
    a[1] = 1;
    printf("½Ð¿é¤J¼Æ¦r0~186: ");
    scanf("%d", &i);

    for(j = 2; j <= i; j++)
    	a[j] = a[j - 1] + a[j - 2];
		 
    for(j = 0; j <= i; j++)
	    printf("%.0f\n", a[j]);

    return 0;
}
