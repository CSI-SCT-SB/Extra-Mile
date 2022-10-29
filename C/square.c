#include<stdio.h>
int main()
{
    float number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = number * number;
    printf("square of a given number %.2f is  =  %.2f", number, square);
    return 0;
}