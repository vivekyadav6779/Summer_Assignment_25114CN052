#include <stdio.h>

int main() {
    int num, digit;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;      
    
        product = product * digit;
        num = num / 10;        // Remove last digit
    }

    printf("Product of digits = %d\n", product);

    return 0;
}
//logic behind the code 
To find the product of digits of a number, we need to:

Extract the last digit using % 10.
Multiply the extracted digit with a variable product.
Remove the last digit using / 10.
Repeat the process until the number becomes 0.