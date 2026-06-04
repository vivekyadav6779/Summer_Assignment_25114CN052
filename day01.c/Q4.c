#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        num = num / 10;
        count++;
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
//logic behind the code
To count the number of digits in a number, we repeatedly remove the last digit until the number becomes 0.

We can remove the last digit using:

number = number / 10

Each time we divide by 10, one digit is removed from the right side.