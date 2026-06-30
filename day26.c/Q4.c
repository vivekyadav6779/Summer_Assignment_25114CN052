#include <stdio.h>

int main() {
    int a, s = 0;
 printf("Q1: 2+2?\n"); 
    scanf("%d", &a);
    if (a == 2) s++;

    printf("Q2: Capital India?\n"); scanf("%d", &a);
    if (a == 2) s++;

    printf("Score=%d\n", s);
}