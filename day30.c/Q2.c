#include <stdio.h>

int main() {
    int books = 10, ch;

    scanf("%d", &ch);

    if (ch == 1) books--;
    else if (ch == 2) books++;

    printf("%d", books);

    return 0;
}