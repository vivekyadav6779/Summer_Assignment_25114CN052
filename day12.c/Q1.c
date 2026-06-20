#include<stdio.h>
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
    if(palindrome(n))
    printf("palindrome");
    else
    printf("not palindrome");

}
int palindrome(int n){
    int rev=0,t=n;
    while(t)
    rev=rev*10+t%10;
    t/=10;
    return rev==n;
}
//logic behind the code
reverse the number 
compare it with the original number

