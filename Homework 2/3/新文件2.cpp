#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float loanPrincipal;
	float rate;
	int day;
	float interestCharge;
	
	while(1)
	{
		printf("Enter loan princial(-1 to end): ");
		scanf("%f", &loanPrincipal);
		if(loanPrincipal == -1)
		{
			break;
		}
		printf("Enter interest rate: ");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &day);
		printf("The interest charge is: $");
		interestCharge = (loanPrincipal * rate * day) / 365;
		printf("%.2f \n", interestCharge);
		printf("\n");
	}
	system("pause");
	return 0;
}

