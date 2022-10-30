#include<stdio.h>
int main()
{
   char str[100];
   printf("C program to replace first vowel with '-' \n");
   printf("Please enter a String: ");
   scanf("%[^\n]", str);
   for(int i=0; str[i]!='\0'; i++)
   {
    if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u'){
        str[i] = '-';
        break;
    }
   }
   printf("String after replacing first vowel with '-': %s\n", str);
   return 0;
}
