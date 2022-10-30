//Check for Balanced Brackets in an expression (well-formedness) using Stack
//Given an expression,examine whether the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in the given expression.
#include <stdio.h>
#include <stdlib.h>
#define bool int

struct sNode // Structure of a stack node
{
    char data;
    struct sNode* next;
};

void push(struct sNode** top_ref, int new_data);// Function to push an item to stack
int pop(struct sNode** top_ref);// Function to pop an item from stack
 
// Returns 1 if character1 and character2 are matching left and right Brackets
bool isMatchingPair(char character1, char character2)
{
    if (character1 == '(' && character2 == ')')
        return 1;
    else if (character1 == '{' && character2 == '}')
        return 1;
    else if (character1 == '[' && character2 == ']')
        return 1;
    else
        return 0;
}
 
// Return 1 if expression has balanced Brackets
bool areBracketsBalanced(char exp[])
{
    int i = 0;
    struct sNode* stack = NULL;
    while (exp[i])// Traverse the given expression to check matching brackets
    {
        if (exp[i] == '{' || exp[i] == '(' || exp[i] == '[')
            push(&stack, exp[i]);
        if (exp[i] == '}' || exp[i] == ')'|| exp[i] == ']') 
        {
            if (stack == NULL) 
                return 0;
            else if (!isMatchingPair(pop(&stack), exp[i]))
                return 0;
        }
        i++;
    }
    // If there is something left in expression then there is a starting bracket without a closing bracket
    if (stack == NULL)
        return 1; // balanced
    else
        return 0; // not balanced
}
 
// Driver code
int main()
{
    char exp[100];
    printf("Enter the expression:");
    scanf("%s",exp);
    if (areBracketsBalanced(exp))// Function call
        printf("Balanced \n");
    else
        printf("Not Balanced \n");
    return 0;
}
 
// Function to push an item to stack
void push(struct sNode** top_ref, int new_data)
{
    struct sNode* new_node= (struct sNode*)malloc(sizeof(struct sNode));// allocate node
    if (new_node == NULL) 
    {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    new_node->data = new_data;// put in the data
    new_node->next = (*top_ref);// link the old list off the new node
    (*top_ref) = new_node;// move the head to point to the new node
}
 
// Function to pop an item from stack
int pop(struct sNode** top_ref)
{
    char res;
    struct sNode* top;
    if (*top_ref == NULL) // If stack is empty then error
    {
        printf("Stack overflow n");
        getchar();
        exit(0);
    }
    else 
    {
        top = *top_ref;
        res = top->data;
        *top_ref = top->next;
        free(top);
        return res;
    }
}