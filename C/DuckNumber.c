#include<stdio.h>
int main()
{
    int n,i=0,r,a[20],flag=0,m;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        a[i]=r;
        n=n/10;
        if(n!=0)
        {
        i++;}
    }
    m=i;
    if(a[m]==0)
    flag=1;
    else
    {
        for(i=0;i<m;i++)
        {
            if(a[i]==0)
            {
            flag=1;
            break;
            }
        }
    }
    if(flag==1)
    printf("\nIs a Duck number");
    else
    printf("\nIs not a Duck Number");
}