# include <stdio.h>
int interpolation_Search(int array_nums[], int array_size, int n)
{
    int lower_pos = 0, higher_pos = array_size - 1;
    while (lower_pos <= higher_pos && n >= array_nums[lower_pos] && n <= array_nums[higher_pos])
    {
        int n_pos = lower_pos + ((n - array_nums[lower_pos]) * (higher_pos - lower_pos)) / (array_nums[higher_pos] - array_nums[lower_pos]);
        if (n > array_nums[n_pos])
            lower_pos = n_pos + 1;
        else if (n < array_nums[n_pos])
            higher_pos = n_pos - 1;
        else
            return n_pos;
    }
    return -1;
}

int main()
{
   int arr[10];
    int i,n;
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");

    printf("Input 10 elements in the array :\n");
    for(i=0; i<10; i++)
    {
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);
    }
    int array_size = sizeof(arr) / sizeof(arr[0]);
    printf("Original Array: ");
    for (int i = 0; i < array_size; i++) printf("%d ", arr[i]);
    printf("\nInput a number to search: ");
    scanf("%d", &n);
    int index = interpolation_Search(arr, array_size, n);
    if (index != -1)
        printf("\nElement found at position: %d", index);
    else
        printf("\nElement not found..!");
    return 0;
}
