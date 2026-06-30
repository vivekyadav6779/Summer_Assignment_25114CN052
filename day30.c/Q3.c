#include <stdio.h>

struct Emp {
    char name[20];
    int id;
};

int main() {
    struct Emp e;

    scanf("%s %d", e.name, &e.id);
    printf("%s %d", e.name, e.id);

    return 0;
}