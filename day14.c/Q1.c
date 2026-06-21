#include<stdio.h>
int main(){
    int a[100],n,key,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    scanf("%d",&key);
    for(i=0;i<n;i++)
    if(a[i]==key){
        printf("found at %d,i+1");
        return 0;

    }
    printf("not found");
}
//logic behind the code
input array and key
compare each element with the key
if found print position;otherwise print not found  