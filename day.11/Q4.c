#include<stdio.h>
long long factorial(int n){
    long long fact=1;
    int i;
    for(i=1;i<=n;i++){
        fact=fact*i;

    }
    return fact;


}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("factorial=%11d",factorial(n));
    return 0;
}
//logic behind the code
take the number from the user 
pass it to the factorial() function
multiply all numbers from 1 to n
return the factorial
print the result 



