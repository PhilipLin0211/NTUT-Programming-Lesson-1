#include <stdio.h>

int main() {

    int n1, n2, max;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    //n1㎝n2丁р计max
    max = (n1 > n2) ? n1 : n2;
	
	//耞n1㎝n2琌癸よ计礛狦ぃ琌碞рmax跑Θ计计 
    while (1) {
        if ((max % n1 == 0) && (max % n2 == 0)) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}
