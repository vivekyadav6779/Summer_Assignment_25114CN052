#include <stdio.h>

int main()
{
    int arr[100], n, i, pos = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            arr[pos] = arr[i];
            pos++;
        }
    }

    while(pos < n)
    {
        arr[pos] = 0;
        pos++;
    }

    printf("Array after moving zeros to the end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
//logic behind the code
copy all non zreo element to the front
find remaining position with 0