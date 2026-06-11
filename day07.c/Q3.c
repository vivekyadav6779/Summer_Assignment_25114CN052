#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum of digits = %d",sumDigits(n));
    return 0;
}
int sumDigits(int n){


if(n==0)
return 0;
return (n%10)+sumDigits(n/10);
}
//logic behind the code
last digits =n%10
remaining number=n/10
sum=(n%10)+sum(n/10)
