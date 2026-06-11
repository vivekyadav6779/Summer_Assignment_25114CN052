#include<stdio.h>
int main(){
    int n;i;
    printf("enter number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d",fib(i));

    }
    return 0;


}
int fib(int n){
    if(n==0)
    return 0;
if(n==1)
return1;
return fib(n-1) + fib(n-2);
}
//logic behind the code 
fibonacci series 
0 1 1 2 3 5 8 13.....
formula
fib(0)=0
fib(1)=1
fib(n)=fib(n-1)+fib(n-2)

