#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, g, c = 0;
    srand(time(0));
    n = rand() % 100 + 1;

    while (g != n) {
        scanf("%d", &g);
        c++;
        if (g > n) printf("High\n");
        else if (g < n) printf("Low\n");
        else printf("Correct %d\n", c);
    }
}