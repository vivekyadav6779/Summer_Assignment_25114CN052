#include <stdio.h>
int main(){
    int num,rev=0,rem,n;
    printf("Enter a number: ");
    scanf("%d", &num);
    n=num;

    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if(n==rev)

        printf("%d is palindrome number",n);
    else
        printf("%d is not a palindrome number", n);
    

    return 0;
}
//logic behind the code 
To check whether a number is a palindrome:

Store the original number in another variable.
Reverse the number.
Compare the reversed number with the original number.
If both are equal, the number is a palindrome; otherwise, it is not.