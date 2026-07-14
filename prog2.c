#include<stdio.h>

int main()
{
	int arr[100];
	int i, size;
	int largest;
	
	printf("Enter Array Size: ");
    scanf("%d",&size);

	printf("Array Elemenys are: \n");
	
    for(i=0; i<size; i++)
    {
        printf("array[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for (i=0; i<size; i++) 
	{
        if (arr[i] > largest) 
		{
            largest = arr[i];
        }
    }

    printf("The largest element is: %d.", largest);

	return 0;
}

