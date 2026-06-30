#include <stdio.h>

struct Book {
    int id;
    char name[20];
};

int main() {
    struct Book b;
    int issued = 0;

    scanf("%d %s", &b.id, b.name);
    printf("1.Issue 2.Return\n");

    int ch;
    scanf("%d", &ch);

    if (ch == 1 && !issued) {
        issued = 1;
        printf("Issued");
    } else if (ch == 2 && issued) {
        issued = 0;
        printf("Returned");
    } else {
        printf("Invalid");
    }

    return 0;
}