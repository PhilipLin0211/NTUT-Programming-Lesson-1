#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *fptr;
	char str[MAX],ch;
	int i=0;
	fptr=fopen("output.txt","a");
	while ((ch=getche()) != ENTER && i<MAX)
		str[i++]=ch;
	putc('\n',fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");
	return 0;
}
