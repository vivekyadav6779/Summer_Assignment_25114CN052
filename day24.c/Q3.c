#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I love programming in C language";

    char word[50], longest[50];
    int len = 0, maxLen = 0;

    int i = 0, j = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);

            if (len > maxLen) {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
        }

        if (str[i] == '\0')
            break;

        i++;
    }

    printf("Longest word: %s\n", longest);

    return 0;
}