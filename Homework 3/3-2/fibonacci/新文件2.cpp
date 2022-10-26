#include <stdio.h>

int main()
{
    unsigned int i;
    unsigned long long int j;
    float a[200];
    
	a[0] = 0;
    a[1] = 1;
    
	//輸入要輸出的數量 
	printf("請輸入數字0~186: ");
    scanf("%d", &i);
	
	//下一項的數值為前面2項的和
	//然後一個一個存進a[j]裡面 
    for(j = 2; j <= i; j++)
    	a[j] = a[j - 1] + a[j - 2];
	
	//將陣列中的每一項印出來	 
    for(j = 0; j <= i; j++)
	    printf("%.0f\n", a[j]);

    return 0;
}
