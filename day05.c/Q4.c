#include<stdio.h>
int main(){
    int n,i,largest=0;
    printf("enter a number");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        while(n%i==0){
            largest=i;
            n/=i;

        }
    }
    printf("largest prime factor=%d",largest);
    return 0;


}
//logic behind the code 
start from i=2
if i divides n ,it is a prime factor 
store it in largest and divide n ny i repeatedly
continue until all factors are removed
the last factor stored in largest is the largest prime factor 