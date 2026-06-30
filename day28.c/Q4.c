#include <stdio.h>

struct Contact {
    char name[20];
    long phone;
};

int main() {
    struct Contact c;

    scanf("%s %ld", c.name, &c.phone);
    printf("%s %ld", c.name, c.phone);

    return 0;
}