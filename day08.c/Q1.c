#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        print("\n");

    }
    return 0;
}
//logic behind the code 
outer loops control rows
inner loop print stars in each rows
row number=number of stars printed 