#include <stdio.h>

int main() {

    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    //n1和n2間把大的數字存在max
    max = (n1 > n2) ? n1 : n2;
	
	//首先判斷n1和n2是否為對方的倍數，然後如果不是就把max加到變成另一個數字的倍數 
    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
