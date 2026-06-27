#include<stdio.h>
int main(){
    int n,i,sum=0,arr[100];
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];

    }
    printf("missing number=%d",n*(n+1)/2-sum);
    return 0;
}
//logic behind the code
calculate the sum of numbers from 1 to n
calculate the sum of array elements
missing number=expected sum-array sum