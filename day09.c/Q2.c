#include<stdio.h>
int main() {
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",j);

        }
        printf("\n");

    }
    return 0;

}
//logic behind the code
outer loop control rows from 5 to 1
inner loop prints number from 1 to current row value 
row1 prints 12345
row2 prints 1234
and so on
last row prints 1
