#include <stdio.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};

int main() {
    struct Employee e;

    scanf("%d %s %f", &e.id, e.name, &e.salary);
    printf("%d %s %.2f", e.id, e.name, e.salary);

    return 0;
}