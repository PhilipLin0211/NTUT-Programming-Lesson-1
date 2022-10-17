#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float hour;
	float rate;
	float salary;
	
	while(1) 
	{
		printf("Enter # of hours worked(-1 to end): ");
		scanf("%f", &hour);
		if(hour == -1)
		{
			break;
		}
		printf("Enter hourly rate of work($00.00): ");
		scanf("%f", &rate);
		printf("Salary is: $");
		if(hour > 40)
		{
			salary = (hour * rate) + ((hour - 40) * 5);
		}
		else
		{
			salary = hour * rate;
		}
		printf("%.2f \n", salary);
		printf("\n");
	}
	system("pause");
	return 0;
}

