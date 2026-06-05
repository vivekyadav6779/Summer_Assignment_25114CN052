#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int n1,n2,c;
    printf("\nEnter two numbers:");
    scanf("%d%d",&n1,&n2);
    c=gcd(n1,n2);
    printf("\nGCD of %d and %d is %d",n1,n2,c);
    return 0;

}
int gcd(int a, int b)
{
    if (b != 0)
    {
        return gcd(b, a % b);
    }
    else
    {
        return a;
    }
}
//logic behind the code 
We use Euclid's Algorithm:

GCD(a,b)=GCD(b,a%b)
Key Idea

If a number divides both a and b, it will also divide the remainder a % b.

So instead of checking all factors, we keep replacing:

(a, b)
↓
(b, a % b)

until the remainder becomes 0.

At that point, the second number becomes 0 and the first number is the GCD.

