#include <stdio.h>

int main()
{
    int arr[100], n, i, num, count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to find frequency: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == num)
        {
            count++;
        }
    }

    printf("Frequency of %d = %d", num, count);

    return 0;
}
//logic behind the code
input array
input the element
count how many times it appears
