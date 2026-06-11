#include<stdio.h>
int main() {
    int i,j,n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        print("\n");


    }
    return 0;
}
//LOGIC BEHIND THE CODE 
output loop controls rows
inner loop prints number from 1 to current row 
Row1=1
Row2=12
Row3=123





