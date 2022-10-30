#include<stdio.h>
#include<conio.h>
int main() {
   int num1, num2, i;
    printf("please enter first number: ");
    scanf("%d",&num1);
    printf("please enter second number: ");
    scanf("%d",&num2);
    for(i=1;i<=num2;i++){
        num1++;
    }
    printf("sum = %d", num1);
    getch();
} 
