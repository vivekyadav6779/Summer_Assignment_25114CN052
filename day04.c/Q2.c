#include<stdio.h>
int main(){
    int n,a=0,b=1,temp;
    printf("enter n:");
    scanf("%d",&n);
    if(n==1)
        printf("F(1)=0");
        else if(n==2)
        printf("F(2)=1");
    
        else{
            for(int i=2;i<n;i++){
                temp=a+b;
                a=b;
                b=temp;
            }
            printf("F(%d)=%d",n,b);
        }
        return 0;
    }
    
//locgic behind the code 
a= holds F(n-2) and b holds F(n-1) and temp is used to calculate F(n) before updating a and b for the next iteration.
loops runs n-2 times to reach nth term 