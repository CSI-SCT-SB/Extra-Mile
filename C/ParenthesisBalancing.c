#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int size,tos = -1;
char stack[10];
void push();
void pop();
void display();
int isFull();
int isEmpty();

void push(){
    if(isFull()){
        printf("\nStack is Full ");
    }
    else{
        tos = tos + 1;
        stack[tos] = '(';
    }
}

void pop(){
    int de;
    if(isEmpty()){
        printf(" \nUnbalanced ");
        exit(0);
     }
    else{
        de = stack[tos];
        tos = tos - 1;
     }
}

int isEmpty(){
    if(tos == -1)
    return 1;

    else return 0;
}

int isFull(){
    if(tos +1 == size)
    return 1;

    else return 0;
}

void main(){
    char exp[20];
    int c,x;
      size = strlen(exp);
       printf("\nEnter  expression (no white space): ");
       scanf(" %s", exp);
       for (int i = 0; i < strlen(exp); i++) {
         if (exp[i] == '(' ) {
           push();
         }
         else if (exp[i] == ')' ) {
           pop();
         }
       }
       if (isEmpty()) {
         printf("\n Array balanced with equal parenthesis.");
       }
       else{
       printf("\nNot balanced - unequal parenthesis.");
      }
}