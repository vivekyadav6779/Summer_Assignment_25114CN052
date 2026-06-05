#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    max = (a > b) ? a : b;

    while(1) {
        if(max % a == 0 && max % b == 0) {
            printf("LCM = %d", max);
            break;
        }
        max++;
    }

    return 0;
}
//logic behind the code 
Find the larger of the two numbers.
Check whether it is divisible by both numbers.
If not, increase it by 1 and check again.
The first number divisible by both is the LCM.

