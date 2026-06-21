#include<stdio.h>
int main(){
    int n,a[100],even=0,odd=0,i;
    printf("enter size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    even++;
    else
    odd++;
    printf("even=%d\nodd=%d",even,odd);
    return 0;
}
//logic behind the code
input array element
check each element usingb %2
count even and odd numbers separetely
