#include <stdio.h>

int main() {
    float basic, da, hra, salary;

    scanf("%f", &basic);

    da = 0.1 * basic;
    hra = 0.2 * basic;
    salary = basic + da + hra;

    printf("Salary = %.2f", salary);

    return 0;
}