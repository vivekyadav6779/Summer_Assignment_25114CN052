#include <stdio.h>

int main() {
    int seats = 5, book;

    scanf("%d", &book);

    if (book <= seats) {
        seats -= book;
        printf("Booked");
    } else {
        printf("Not Available");
    }

    return 0;
}