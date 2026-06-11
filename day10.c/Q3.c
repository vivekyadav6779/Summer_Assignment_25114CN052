#include<stdio.h>
int main() {
    int n,i,j;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-1;j++)
        printf(" ");
    for(j=1;j<=i;j++)
    printf("%d",j);
for(j=i-1;j>=1;j--)
printf("%d",j);
printf("\n");

    }
    return 0;
}
//logic behind the code 
print spaces 
print numbers from 1 to i
print numbers from i-1 to 1
move to next row 
