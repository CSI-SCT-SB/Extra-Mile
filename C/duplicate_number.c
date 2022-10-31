#include <stdio.h>
#include<stdlib.h>
#define MAX 100
void duplicate(int *arr, int size)
{
    int i, temp,j;
    int ar[MAX] = {0};
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
            printf("first duplicate number is = %d",arr[i]);
            exit(0);
            } 
        }
    }
}
int main()
{
    int size, i, sum, *arr;
    printf("Enter number of Elements in an array \n");
    scanf("%d", &size);
    arr = (int *) malloc(sizeof(int) * size);
    printf("Enter elements to array\n");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]); 
    duplicate(arr, size);
    return 0;
} 
