#include <stdio.h>

int main() {
    char str[200];
    int freq[256] = {0};
    int i = 0, max = 0;
    char result;
 printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        freq[(int)str[i]]++;
        i++;
    }

    for(i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            result = (char)i;
        }
    }

    printf("Maximum occurring character: %c", result);

    return 0;
}