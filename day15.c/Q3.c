#include<stdio.h>
int main(){
    int n,i,last;
    printf("enter size:");
    scanf("%d",&n);
    int a[n];
    printf("enter elements:");
    for(i=0;i,i<n;i++)
    scanf("%d",&a[i]);
    last=a[n-1];
    for(i=n-1;i>0;i--)
    a[i]=a[i-1];
    a[0]=last;
    printf("array after right rotation :");
    for(i=0;i<n;i++)
    printf("%d",a[i]);
    return 0;
}
//logic behind the code
store last elements
shift all elements one position right
put all last element at the beginning