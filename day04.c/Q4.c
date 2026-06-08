#include<stdio.h>
int main(){
    int start,end,num,temp,rem,sum;
    printf("enter start and end range:");
    scanf("%d%d",&start,&end);
    printf("armstrong numbers are\n");
    for(num=start;num<=end;num++){
           temp=num;
           sum=0;
           while(temp!=0){
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
           }
           if (sum==num)
           printf("%d",num);
        }
        return 0;
    }
    //logic behind the code

    take the starting and ending range
    check each number one by one
    extract its digits using %10
    add the cube of neach digit to sum
    compare sum with the originalnumber 
    
    if both are equal print the number 


    
    
