#include <stdio.h>

int main() {
    int m1, m2, m3;
    float avg;

    scanf("%d %d %d", &m1, &m2, &m3);

    avg = (m1 + m2 + m3) / 3.0;

    printf("Total=%d\n", m1 + m2 + m3);
    printf("Average=%.2f\n", avg);

    if (avg >= 40)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}