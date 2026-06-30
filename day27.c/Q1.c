#include <stdio.h>

struct Student {
    int id;
    char name[20];
    float marks;
};
int main() {
    struct Student s;

    scanf("%d %s %f", &s.id, s.name, &s.marks);
    printf("%d %s %.2f", s.id, s.name, s.marks);

    return 0;
}