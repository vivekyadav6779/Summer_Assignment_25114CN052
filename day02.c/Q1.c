#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit; 
        num = num / 10;    
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
//logic behind the code 
To find the sum of digits, we need to:

Extract the last digit of the number using the modulus operator (% 10).
Add the extracted digit to a variable sum.
Remove the last digit using integer division (/ 10).
Repeat the process until the number becomes 0.
Example