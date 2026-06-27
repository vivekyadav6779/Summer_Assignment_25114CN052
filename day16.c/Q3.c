#include<stdio.h>
int main(){
    int n,a[100],sum,i,j;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&sum);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(a[i]+a[j]==sum)
    printf("%d %d\n",a[i],a[j]);
    return 0;

}
//logic behind the code
compare every pair of elements
if their sum equals the given value print the pair