#include <stdio.h>

int main() {
    int stock = 100, sold, ch;

    scanf("%d", &ch);

    if (ch == 1) printf("%d", stock);

    else if (ch == 2) {
        scanf("%d", &sold);
        stock -= sold;
        printf("%d", stock);
    }

    return 0;
}