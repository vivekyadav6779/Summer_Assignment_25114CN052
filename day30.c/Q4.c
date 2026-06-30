#include <stdio.h>
#include <string.h>

void show(char name[]) {
    printf("Hello %s", name);
}

int main() {
    char name[20];
    scanf("%s", name);
    show(name);
    return 0;
}