#include<stdio.h>
int main(){
    int n,a[100],max,min;
    printf("enter size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];

    }
    printf("largest=%d\nsmallest=%d",max,min);
    return 0;
}
//logic behind the code
assume first element is largest and smallest
compare remaining elements
update largest/smallest accordingly