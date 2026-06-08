#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factorial=%d",factorial(n));
    return 0;

}
int factorial(int n)
{
    if(n==0||n==1)
    return 1;
    return n*factorial(n-1);
}
//logic behind the code 
factorial of a number is n!:=n*(n-1)!
read a number n
if n is 0 or 1,return1
otherwise return n*(factorial(n-1))
print the result

