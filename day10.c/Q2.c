#include<stdio.h>
int main() {
    int n,i,j;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=n-1;j++)
        printf(" ");
    for(j=1;j<=2*i-1;j++)
    printf("*");
printf("\n");

    }
    return 0;

}
// logic behind the code 
print increasing spaces (i-1)
print decreasing stars (2*(n-i)+1).
repeat for all rows 