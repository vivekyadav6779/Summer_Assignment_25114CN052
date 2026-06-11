#include<stdio.h>
int main() {
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i,j++){
            printf("%d",i);
        }
        print("\n");
    }
    return 0;
}
//logic behind the code 
outer loop control rows
inner loops print the current row number (i)
Row1=print1 once 
Row2=print2 twice
Row3=print3 thrice 
