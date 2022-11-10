#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main() {
	int i, j, tmp,time,f=1;
	int a[SIZE] = { 26,5,81,7,63,88,51,1,30,93 };
	for (i = 1; i < SIZE; i++) {
		time = 0;
		for (j = 0; j < SIZE-1 - i; j++) {
			if (a[j] > a[j + 1]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				f = 1;
			}
			time++;
		}
		if (f == 0)	break;
		printf("Loop %d:", i);
		for (j = 0; j < SIZE; j++)
			printf("%4d", a[j]);
		printf("\ttime:%d\n",time);
		f = 0;
	}

	system("pause");
	return 0;
}
