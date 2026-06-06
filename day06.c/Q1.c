#include<stdio.h>
int main(){

    int n;
    printf("enter decimal:");
scanf("%d",&n);
int b[32],i=0;
while(n>0){
    b[i++]=n%2;
    n=n/2;

}
printf("binary:");
for(int j=i-1;j>=0;j--)
    printf("%d",b[j]);
    printf("\n");
    return 0;

}
//logic behind the code
computer only understand binary numbers,so we needs to convert the decimal number into binary number,
the core logic is keep dividing the number by 2 collect remainders then read them bottom to top
