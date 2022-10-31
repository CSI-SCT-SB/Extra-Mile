#include <stdio.h>
int main()
{
  char ch;
  printf("C program to check given character is vowel or consonant \n");
  printf("Please enter a character\n");
  scanf("%c", &ch);

  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' &&ch <= 'Z')) {
    if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
      printf("Given Character %c is a vowel.\n", ch);
    else
      printf("Given Character %c is a consonant.\n", ch);
  }
  else
    printf("Given Character %c is neither a vowel nor a consonant.\n", ch);

  return 0;
}
