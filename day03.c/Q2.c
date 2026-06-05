#include <stdio.h>

int main() {
    int a, b, i, j;
    printf("enter the range:");

    scanf("%d%d", &a, &b);

    for(i = a; i <= b; i++) {
        for(j = 2; j < i; j++) {
            if(i % j == 0)
                break;
        }

        if(i > 1 && j == i)
            printf("%d ", i);
    }

    return 0;
}
//logic behind the code 
To print prime numbers in a range:

Take the starting number (start) and ending number (end).
For each number in the range:
Check whether it is prime.
If it is prime, print it.
Continue until the end of the range.