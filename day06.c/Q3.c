#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter decimal:");
    scanf("%d",&n);
    while(n>0){
        if (n%2==1)
        count++;
        n=n/2;

    }
    printf("set bits:%d\n",count);
    return 0;


}
//logic behind the code 
check if the last bit is set by checking if n%2 is 1
count if set 
remove last bit by dividing the number by 2
repeat until the number becomes 0