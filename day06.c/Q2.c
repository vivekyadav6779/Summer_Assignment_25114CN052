#include<stdio.h>
int main(){
    long long binary;
    int decimal=0,base=1,rem;
    printf("enter binary:");
    scanf("%lld",&binary);
    long long temp=binary;
    while(temp>0){
        rem=temp%10;
        decimal+=rem*base;
        base*=2;
        temp/=10;
    }
    printf("decimal:%d\n",decimal);
    return 0;
}
//logic behind the code
extract digit from right to left 
multiply digit by its place value 
double the base each step 
remove the last digit by dividing the number by 10
repeat until the number becomes 0