#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(perfect(n))
    print("perfect number:");
    else
    printf("not perfect number");

}
int perfect(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    if(n%i==0)
    sum+=i;
    return sum==n;

    
}
//logic behind the code 
add all factors expect the number itself
compare the sum with the number 
