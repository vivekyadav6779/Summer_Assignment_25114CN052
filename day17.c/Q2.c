#include <stdio.h>

int main() {
    int a[50], b[50], n1, n2, i, j, found;

    scanf("%d", &n1);
    for(i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    for(i = 0; i < n2; i++) scanf("%d", &b[i]);

    for(i = 0; i < n1; i++)
        printf("%d ", a[i]);

    for(i = 0; i < n2; i++) {
        found = 0;
        for(j = 0; j < n1; j++)
            if(b[i] == a[j]) found = 1;
        if(!found)
            printf("%d ", b[i]);
    }

    return 0;
}
//logic behind the code
print all elements of the first array
for each element of the second array print only if it is not already present in the first array