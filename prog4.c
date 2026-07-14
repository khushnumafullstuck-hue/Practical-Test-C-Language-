#include<stdio.h>

int main()
{
    int arr[100], size, i;
    int *ptr;

    printf("Enter Array Size: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++)
    {
    	printf("array[%d]: ",i);
        scanf("%d", &arr[i]);
    }

    ptr = arr;  

    printf("Square of each element:\n");
    for(i=0; i<size; i++)
    {
        printf("%d ", (*ptr) * (*ptr));
        ptr++;
    }

    return 0;
}
