#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int count[256] = {0};
    int i = 0;
 printf("Enter first string: ");
    scanf("%s", s1);
 printf("Enter second string: ");
    scanf("%s", s2);
 if(strlen(s1) != strlen(s2)) {
        printf("Not Anagram");
        return 0;
    }
  for(i = 0; s1[i] != '\0'; i++) {
        count[(int)s1[i]]++;
        count[(int)s2[i]]--;
    }
 for(i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}