#include<stdio.h>
#include<conio.h>
void print_day(int f)
{
if (f == 0)
printf("\n MONDAY \n");
else if (f == 1)
printf("\n TUESDAY \n");
else if (f == 2)
printf("\n WEDNESDAY \n");
else if (f == 3)
printf("\n THURSDAY \n");
else if (f == 4)
printf("\n FRIDAY \n");
else if (f == 5)
printf("\n SATURDAY \n");
else
printf("\n SUNDAY \n");
}
void main(void)
{
int a, b, c, d;
long int e;
clrscr();
printf("\n Enter a valid date in dd-mm-yyyy format:");
scanf("%d-%d-%d", &a, &b, &c);
for (d = 1, e = (365 * (c - 1)) + (a - 1) + ((c / 4) - (c / 100) + (c / 400)); d < b; d++)
e += (d == 2) ? (28) : ((d == 4 || d == 6 || d == 9 || d == 11) ? (30) : (31));
print_day(e % 7);
getch();
}
