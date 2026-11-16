#include <stdio.h>

int main() 
{
    int arr[4], i,small;
    printf("enter the values\n");
    for (i = 0; i < 4; i++) 
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0]; 
    for (i = 1; i < 4; i++) 
    {
        if (small > arr[i]) 
        {
            small = arr[i];
        }
    }
    printf("output\n");
    printf("%d\n", small);

    return 0;
}