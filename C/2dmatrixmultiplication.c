#include <stdio.h>
#include<stdlib.h>
int main()
{
	int r1,c1,r2,c2,a[10][10],b[10][10],c[10][10],i,j,k;
	printf("Enter number of rows and columns in Matrix A: ");
	scanf("%d %d",&r1,&c1);
	printf("Enter number of rows and columns in Matrix B: ");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Multiplication not possible");
		exit (1);
	}
	else{
		printf("\nEnter matrix A : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("Enter the element A[%d][%d] : ",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nEnter matrix B : \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("Enter the element B[%d][%d] : ",i,j);
				scanf("%d",&b[i][j]);
			}
		}
		
		printf("Product of Matrices : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}