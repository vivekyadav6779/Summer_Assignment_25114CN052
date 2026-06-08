#include<stdio.h>
int main(){
    int num ,original,rem,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    original=num;
    while(num>0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(sum==original)
    printf("%d is an armstrong number",original);
    else
    printf("%d is not an armstrong number",original);
        return 0;
    }
//logic behind the code 
take a number as input
store the original number
extract each digit using %10
find the cube of the digit and add to sum 
remove the last digit using/10
repeat until the number becomes 0
\compare sum with original number 
if equal= armstrong number
otherwise= not an armstrong number   
