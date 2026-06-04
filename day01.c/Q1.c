#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++) {
        sum += i;   // sum = sum + i
    }

    printf("Sum of first %d natural numbers = %d\n", N, sum);

    return 0;
}
//logic behind the code 
natural number start from 1.if N=5,then
1+2+3+4+5=15
we can repeatedly add each number from 1 to N to get the sum 