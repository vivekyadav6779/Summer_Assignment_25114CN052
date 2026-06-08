#include<stdio.h>
int main(){
    int num,i;
    printf("enter a number:");
    scanf("%d",&num);
    printf("factors of %d are:",num);
    for(i=1;i<=num;i++){
        if(num%i==0){
            printf("%d",i);

        }
    }
    return 0;


}
//logic behind the code
take a number as input
run a loop from 1 to num 
check if i divides num completely using num%i==0
if true ,i is a factors of num so print it 
continue until all numbers are checked
