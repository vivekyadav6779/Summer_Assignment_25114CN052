#include<stdio.h>
int main(){
    int a,b,result;
    printf("enter first number:");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    result= sum(a,b);
    printf("sum=%d",result);
    return 0;

}
int sum(int a,int b){
    return a + b;

}
//logic behind the code 
take two numbers as input from thye users 
pass them to the sum () function
add the two numbers and return the result
print the sum