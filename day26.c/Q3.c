#include <stdio.h>

int main() {
    int ch; float bal = 10000, amt;

    while (ch != 4) {
        scanf("%d", &ch);

        if (ch == 1) printf("%.2f\n", bal);
        else if (ch == 2) scanf("%f", &amt), bal += amt;
        else if (ch == 3) {
            scanf("%f", &amt);
            if (amt <= bal) bal -= amt;
            else printf("Insufficient\n");
        }
    }
}