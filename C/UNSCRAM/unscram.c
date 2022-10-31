#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define wrds 10000
#define len 50

int main(void)
{
    char bank[wrds][len]={0};
        
        FILE *lib;
        lib=fopen("library.txt", "r");

        int wrd=0;
        lib=fopen("library.txt", "r");
        while( wrd < wrds && fscanf(lib, "%s", bank[wrd]) == 1 )
        {
            ++wrd;
        }
    char scram[50];
    char temp1;
    char tempb1[50];
    char tempb2;
    char tempbfin[wrds][len];
    
    int m;
     char answer;
    do{
    for(int i=0; i<wrds; i++)
    {
        strcpy(tempb1, bank[i]);
        m=strlen(tempb1);
        for(int k=0;k<m-1;k++)
        {
            for(int p=k+1;p<m;p++)
            {
                if (tempb1[k]>tempb1[p])
                {
                    tempb2=tempb1[k];
                    tempb1[k]=tempb1[p];
                    tempb1[p]=tempb2;
                }
            }
        }
        strcpy(tempbfin[i],tempb1);
    }

    printf("enter scrambled word\t");
    scanf("%s" ,scram);

    int o, j;
    int n=strlen(scram);

    for(o=0;o<n-1;o++)
    {
        for(j=o+1;j<n;j++)
        {
            if (scram[o]>scram[j])
            {
                temp1=scram[o];
                scram[o]=scram[j];
                scram[j]=temp1;
            }
        } 
    }


    printf("\nresult(s)");

    for(int q=0; q<wrds; q++)
    {
        if (strcmp(tempbfin[q],scram)==0)
        {
            printf("\t%s" ,bank[q]);
        }
    }
   
   printf("\nPress n and enter to continue. Press Any Key and enter To Exit\t");
   scanf(" %c",&answer); // dont forget type &
    }
    while(answer == 'n' || answer == 'N');
    return 0;
}
