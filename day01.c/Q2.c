#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
//logic behind the code
1.input the number 
use a for loop fron i=1 and runs up to i=10
multiply and print 
in each iteration 
num*i is calculated the result is printed in table format s
