#include<stdio.h>

#include<conio.h>

int main()

{

int x, z, n,  y = 0, counter= 0, counter1 = 0;

printf("Number of rows to show number pattern? ");

scanf("%d",&n);

for(x = 1; x <= n; ++x)

{

for(z= 1; z<= n-x; ++z)

{

printf("  ");

++counter;

}

while(y != 2 * x - 1)

{

if (counter <= n - 1)

{

printf("%d ", x + y);

++counter;

}

else

{

++counter1;

printf("%d ", (x + y - 2 * counter1));

}

++y;

}

counter1= counter = y = 0;

printf("\n");

}

return 0;

}
