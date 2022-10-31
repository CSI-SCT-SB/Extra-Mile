#include <stdio.h>
#include <stdlib.h>

static int longest_valid_parentheses(char* parentheses_str)
{
    int cap = 8000, error = -1;
    int length = 0, max_length = 0;
    char *p = parentheses_str;
    int *pstack = malloc(cap * sizeof(int));
    int *top = pstack;

    while (*p != '\0') {
        if (*p == '(') {
            if (top + 1 - pstack >= cap) {
                cap *= 2;
                pstack = realloc(pstack, cap * sizeof(int));
            }
            *top++ = p - parentheses_str;
        } else {
            if (top > pstack) {
                if (--top == pstack) {
                     length = p - (parentheses_str + error);
                } else {
                    length = p - (parentheses_str + *(top - 1));
                }
                if (length > max_length) {
                    max_length = length;
                }
            } else {
                error = p - parentheses_str;
            }
        }
        p++;
    }
    return max_length;
}

int main(void)
 {
    char str[50];
    printf("\n\nAccept a string from keyboard :\n");
    printf("-----------------------------------\n");
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);
	printf("\nOriginal Parentheses string: %s", str);
	printf("\nLength of longest parentheses: %d", longest_valid_parentheses(str));
    return 0;
 }
