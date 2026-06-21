#include<stdio.h>
int main(){
    int a[100],n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(a[i]==a[j]){
        printf("%d",a[i]);
        break;
    }
}
//logic behind the code
compare each element with the remaning elements
printb duplicate elements 