#include<stdio.h>
#include<conio.h>
int main()
{
    char str[50];
    int i=0, j, chk;
    printf("Enter a String: ");
    gets(str);
    while(str[i]!='\0')
    {
        chk=0;
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            j=i;
            while(str[j-1]!='\0')
            {
                str[j] = str[j+1];
                j++;
            }
            chk = 1;
        }
        if(chk==0)
            i++;
    }
    printf("\nString (without vowels): %s", str);
    getch();
    return 0;
