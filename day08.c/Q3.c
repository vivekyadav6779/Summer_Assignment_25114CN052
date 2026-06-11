#include<stdio.h>
int main() {
    int i,j,n;
    printf("enter number of rows:");
    sacnf("%d",&n);
    for(i=1;i<=n,i++){
        for(j=0;j<1;j++){
            printf("%c",'A'+j);

        }
        printf("\n");

    }
    return 0;
}
//logic behind the code 
character in C have ASCII values
'A'+0=A
'A'+1=B
'A'+2=c
print characters from A up to the current row 