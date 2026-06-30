#include <stdio.h>

int main() {
    float bal = 5000, amt;
    int ch;

    scanf("%d", &ch);

    if (ch == 1) printf("Balance=%.2f", bal);

    else if (ch == 2) {
        scanf("%f", &amt);
        bal += amt;
        printf("Deposited");
    }

    else if (ch == 3) {
        scanf("%f", &amt);
        if (amt <= bal) printf("Withdrawn");
        else printf("Insufficient");
    }

    return 0;
}