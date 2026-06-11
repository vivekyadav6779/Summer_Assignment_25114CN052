#include<stdio.h>
int main() {
    int i,j;
    for(i=1;i<=5,i++){
        for(j=1;j<=1;j++){
            printf("%c",'A'+i-1);
        }
        printf("\n");

    }
    return 0;
}
//logic behind the code 
use a character variable starting from A
outer loop control rows
inner loop prints the same character row number times
row1=A prints 1 times
row1=B prints 2 times
row3=C prints 3 times 
and so on