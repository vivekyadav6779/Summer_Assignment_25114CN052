#include<stdio.h>
int main(){
    int n,a=0,b=1,temp;
    printf("enter number of terms :");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d",a);
        temp=a+b;
        a=b;
        b=temp;
    }
    return 0;
    }
//logic behind the code 
the key idea :each number=sum of the previous two number
temp saves the sum before overwriting a and b 
