 
#include<stdio.h>
 
int main()
{
  int number, cube;
 
  printf(" \n Please Enter any integer Value : ");
  scanf("%d", &number);
  
  cube = number * number * number;
  
  printf("\n Cube of the given number %d is  =  %d", number, cube);
 
  return 0;
}