#include<stdio.h>
int main(){
    int num,i,sum=0;
    printf("enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            sum=sum+i;
        }
        }
        if(sum==num)
        printf("%d is a perfect number",num);
        else
        printf("%d is not a perfect number",num);
        return 0;
    }
    //logic behind the code 
    input a number num
    intialize sum to 0
    check all the numbers from 1 to num
    if a number i divides num exactly (num%i=0),add i to sum
    after the loop compare sum with num
    if sum==num the numbers is perfect otherwise it is not.
    