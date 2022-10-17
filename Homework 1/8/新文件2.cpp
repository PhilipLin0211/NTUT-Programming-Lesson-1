#include <stdio.h>
#include <stdlib.h>

int main()
{
	float height;
	float weight;
	float bmi;
	printf("Enter your height(m) and weight(kg) : ");
	scanf("%f %f", &height, &weight);
	bmi = weight/(height*height);
	printf("Your BMI : %f \n", bmi);
	if (bmi < 18.5)
	{
		printf("You're underweight \n");
	}
	if (bmi >= 18.5)
	{
		if (bmi < 24.9)
		{
			printf("You're normal \n");
		}
	}
	if (bmi >= 25)
	{
		if (bmi < 29.9)
		{
			printf("You're overweight \n");
		}
	}
	if (bmi >= 30)
	{
		printf("You're obese \n");
	}
	printf("BMI VALUES : \n Uunderweight \t : less than 18.5 \t \n Normal \t : between 18.5 and 24.9 \t \n Overweight \t : between 25 and 29.9 \t \n Obese \t \t : 30 or greater \t \n");
	system("pause");
	return 0;
}
