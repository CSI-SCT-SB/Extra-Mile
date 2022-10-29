#include <stdio.h>
#include <string.h>

int getpror(char y)
{
    if (y == '+' || y == '-')
        return 1;
    else if (y == '*' || y == '/')
        return 2;
    else if (y == '^')
        return 3;
    else if (y == '(' || y == ')')
        return 0;
    else
        return -1;
}
void main()
{
    char s[50];
    int i, k = 0;
    printf("\nEnter the postfix expression to be evaluvated: ");
    gets(s);
    int m = strlen(s);
    int a[m];
    for (int i = 0; i < m; i++)
    {
        if (getpror(s[i]) == -1)
        {
            printf("\nEnter the value for %c: ", s[i]);
            scanf("%d", &a[k]);
            k = k + 1;
        }
        if (s[i] == '+')
        {   
            a[k - 2] = a[k - 2] + a[k - 1];
              k = k - 1;
        }
        else if (s[i] == '-')
        {
            a[k - 2] = a[k - 2] - a[k - 1];
            k = k - 1;
        }
        else if (s[i] == '*')
        {
            a[k - 2] = a[k - 2] * a[k - 1];
            k = k - 1;
        }
        else if (s[i] == '/')
        {
            a[k - 2] = a[k - 2] / a[k - 1];
            k = k - 1;
        }
        if (s[i] == '^')
        {
            a[k - 2] = a[k - 2] ^ a[k - 1]; 
            k = k - 1;
        }
       
    }
    printf("\nThe value is: %d", a[0]);
}