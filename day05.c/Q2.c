#include<stdio.h>
int main(){
    int num,temp,rem,sum=0,fact,i;
    printf("enter a number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++){
            fact=fact*i;
        }
        sum+=fact;
        temp=temp/10;

        }
        if (sum==num)
        printf("%d is a strong number",num);
        else
        printf("%d is not a strong number",num);
        return 0;
    }
    //logic behind the code 
    input a number
    extract each digit using %10
    find the factorial of that digit 
    add the factorial to sum
    remove the last digit using /10
    repaet until all digits are processed
    if sum==original number;it is a strong number 
        