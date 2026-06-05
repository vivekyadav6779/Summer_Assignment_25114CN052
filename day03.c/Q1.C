#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not Prime");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("Not Prime");
            return 0;
        }
    }

    printf("Prime");
    return 0;
}
// logic behind the code 
To determine whether a number is prime:

Read the number n.
If n <= 1, it is not prime.
Check if any number from 2 to n-1 divides n.
If a divisor is found, the number is not prime.
If no divisor is found, the number is prime.
