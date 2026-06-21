#include<stdio.h>
int main(){
    int n,a[100],sum=0,i;
    float avg;
    printf("enter size:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];

    }
    avg=(float)sum/n;
    printf("sum=%d\naverage=%2f",sum,avg);
    return 0;
}
//logic behind the code
input array elements
add all elements
average= sum/n