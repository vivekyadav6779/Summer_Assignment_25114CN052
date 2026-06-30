#include <stdio.h>

int main() {
    int ch;
    float a, b;

    scanf("%d %f %f", &ch, &a, &b);

    if (ch == 1) printf("%.2f", a + b);
    else if (ch == 2) printf("%.2f", a - b);
    else if (ch == 3) printf("%.2f", a * b);
    else if (ch == 4) printf("%.2f", a / b);

    return 0;
}