#include<stdio.h>
int main(){
    int i,j,n;
    printf("enetr number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        print("\n");

    }
    return 0;
}