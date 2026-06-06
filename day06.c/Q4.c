#include<stdio.h>
int main(){
    int x,n,p=1;
    printf("enter number:");
    scanf("%d%d",&x,&n);
    while(n--)
    p*=x;
    printf("%d",p);
    return 0;
}
//logic behind the code 
to calculate x^n ,multiply x byb itself n times
the variable p nstores the result and starts with 1 because
multiplying byb 1 does not change the value of x

