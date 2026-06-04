#include <stdio.h>

int main() {
    int num, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;               
        reverse = reverse * 10 + digit; 
        num = num / 10;                 
    }

    printf("Reversed Number = %d\n", reverse);

    return 0;
}
//logic behind the code 
To reverse a number, we need to:

Extract the last digit using % 10.
Add the digit to the reversed number.
Before adding the next digit, multiply the reversed number by 10 to shift its digits left.
Remove the last digit from the original number using / 10.
Repeat until the number becomes 0.