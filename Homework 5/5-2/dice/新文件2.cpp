#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int rec[36000];
	int a = 0, b = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j = 0, k = 0, l = 0;
	float c = 0;
	float p;
	
	srand(time(0));
	
	for (int i = 0; i < 36000; i++)
	{
		int dice1 = rand() % 6 + 1;
		int dice2 = rand() % 6 + 1;
		int p = dice1 + dice2;
		rec[i] = p;
	}
	
	for (int i = 0; i < 36000; i++)
	{
		if (rec[i] == 2)
		{
			a += 1;
		}
		if (rec[i] == 3)
		{
			b += 1;
		}
		if (rec[i] == 4)
		{
			d += 1;
		}
		if (rec[i] == 5)
		{
			e += 1;
		}
		if (rec[i] == 6)
		{
			f += 1;
		}
		if (rec[i] == 7)
		{
			c += 1;
		}
		if (rec[i] == 8)
		{
			g += 1;
		}
		if (rec[i] == 9)
		{
			h += 1;
		}
		if (rec[i] == 10)
		{
			j += 1;
		}
		if (rec[i] == 11)
		{
			k += 1;
		}
		if (rec[i] == 12)
		{
			l += 1;
		}
	}
	
	p = c / 36000.0;
	printf("2瞷Ω计\t: %d", a);
	printf("\n3瞷Ω计\t: %d", b);
	printf("\n4瞷Ω计\t: %d", d);
	printf("\n5瞷Ω计\t: %d", e);
	printf("\n6瞷Ω计\t: %d", f);
	printf("\n7瞷Ω计\t: %.1f", c);
	printf("\n8瞷Ω计\t: %d", g);
	printf("\n9瞷Ω计\t: %d", h);
	printf("\n10瞷Ω计\t: %d", j);
	printf("\n11瞷Ω计 \t: %d", k);
	printf("\n12瞷Ω计\t: %d", l);
	printf("\n7瞷诀瞯\t: %.5f\n", p);
	
	if (p < 0.17 && p > 0.15)
	{
		printf("\n磅︽挡狦瞶\n\n");
	} 
	
	system("pause");
	return 0;
}


