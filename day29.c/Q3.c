#include <stdio.h>
#include <string.h>

int main() {
    char s1[50], s2[50];
    int ch;

    scanf("%d", &ch);
    scanf("%s", s1);

    if (ch == 1) printf("%d", strlen(s1));
    else if (ch == 2) {
        scanf("%s", s2);
        strcat(s1, s2);
        printf("%s", s1);
    }

    return 0;
}