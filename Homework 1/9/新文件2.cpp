#include <stdio.h>
#include <stdlib.h>

int main()
{
	float totalmiles;
	float gasoline;
	float milespergallon;
	float parkingfee;
	float tolls;
	float total;
	printf("Enter your total miles per day: ");
	scanf("%f", &totalmiles);
	printf("Enter your cost per gallon of gasoline: ");
	scanf("%f", &gasoline);
	printf("Enter your average miles per gallon: ");
	scanf("%f", &milespergallon);
	printf("Enter your parking fee per day: ");
	scanf("%f", &parkingfee);
	printf("Enter your tolls per day: ");
	scanf("%f", &tolls);
	total = (totalmiles/milespergallon)*gasoline + parkingfee + tolls;
	printf("Today you cost %f \n", total);
	system("pause");
	return 0;
}
