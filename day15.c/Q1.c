#include<stdio.h>
int main(){
    int n,i;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("reversed array:");
    for(i=n-1;i>=0;i--);
    printf("%d",a[i]);
    return 0;
}
//logic behind the code
take array input
print elements from last index to first 
store array elements 
