#include<stdio.h>
int main() {
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=1;j++){
            printf("*");
        }
        print("\n");
    }
    return 0;
}
//logic behind the code 
outer loop controls rows(5 to 1)
inner loop prints* according to current row number
number of stars decreases by 1 in each row 

