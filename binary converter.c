#include <stdio.h>
int main()
{
    int arr[10], num, i, j;
    printf("Program to Convert Decimal Number into Binary\n");
    printf("Please Give a Number to Convert in Binary:  ");
    scanf("%d", &num);
    printf("Binary Number of %d is =  ",num);
    for(i = 0; num > 0; i++)
    {
        arr[i] = num % 2;
        num = num / 2;
    }
    for(j = i - 1; j >= 0; j--)  {
        printf(" %d ", arr[j]);
    }
    printf("\n");
    return 0;
}