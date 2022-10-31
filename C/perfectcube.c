# include <stdio.h>
# include <stdlib.h>
# include <math.h>


int main() 
{ 
int num, cuberoot,ans; 

 printf("\n\n Check whether a number is a perfect cube or not: \n");
 printf(" -----------------------------------------------------\n");
    printf(" Input a number: ");
    scanf("%d",&num);
cuberoot=round(pow(num, 1.0/3.0));

if(cuberoot*cuberoot*cuberoot==num)
{
  printf(" The number is a perfect Cube of %d \n",cuberoot);   
}
else
{
  printf(" The number is not a perfect Cube.\n");   
}
}