#include<stdio.h>
int main(){
    int n;
    printf("enter terms:");
    scanf("%d",&n);
    fibonacci(n);

}
void fibonacci(int n){
    int a=0,b=1,c;
    while(n--)
    {
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
        
    }
}
