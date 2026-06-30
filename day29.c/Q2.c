#include <stdio.h>

int main() {
    int a[10], n, i, sum = 0, ch;

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &ch);

    if (ch == 1) {
        for (i = 0; i < n; i++) sum += a[i];
        printf("%d", sum);
    }

    else if (ch == 2) {
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    }

    return 0;
}