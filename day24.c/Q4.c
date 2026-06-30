#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char s[] = "programming";
    int n = strlen(s);

    bool seen[256] = {false};

    for (int i = 0; i < n; i++) {
        if (!seen[(unsigned char)s[i]]) {
            printf("%c", s[i]);
            seen[(unsigned char)s[i]] = true;
        }
    }

    return 0;
}