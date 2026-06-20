#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(armstrong(n))
    printf("armstrong");
    else 
    printf("not armstrong");

}
int armstrong(int n){
    int sum=0,r,t=n;
    while(t)
    {
        r=t%10;
        sum+=r*r*r;
        t/=10;

    }
    return sum=n;

    
}
//logic behind the code
find cube of each digit for 3 digit numbers
add them and compare with original number

