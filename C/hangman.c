#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
int i,j,c,count=0,ans=0,flag=0,*ptr,m; 
char a[1][10]; //={"hello"};
printf("Enter word to guess: ");
  fflush(stdout);
  scanf(" %s", a[0]);
char b[10],alpha;
char d='_';
char arr[12]={' ', 'o', ' ', '\n', '/', '|', '\\', '\n', '/', ' ', '\\'};

    c=strlen(&a[0]);
    printf("\n\n\t\t\t ** HANGMAN ** \n");
        printf("\n\t\t\t**************\t\t\t");
            printf("\n\t\t\t..............\n\n\t\t\t  ");
    for(j=0;j<c;j++)
        { printf("%c ",d);
        b[j]=d;}
        printf("\n\n\t\t\t..............\t\t\t");
            printf("\n\n\t\t\t**************");

    while (count<6)
    {
    flag=0;
        printf("\n\n\n\n\n\n\t enter a char");
            alpha=getche();

            for(i=0;i<c;i++)
            {
                if (alpha==a[0][i])
            {	b[i]=a[0][i];
            flag=1;
                ans++; }

            }

            printf("\n\n\t\t\t ** HANGMAN ** \n");
            printf("\n\t\t\t**************\t\t\t");
            for(i=0;i<c;i++)
            printf("%c ",b[i]);
            printf("\n\n\t\t\t..............\t\t\t");

            if(flag==0)
            {
                count++;
                printf("\n\n\n\n\t\t%c is a wrong guess",alpha);
                printf("\n\n\t\t (u have %d more guesses)",6-count);
                printf("\n");
                if(count==1){
                    for(int i=0;i<4;i++){
                        printf("%c",arr[i]);
                    }
                }
                else if(count==2){
                    for(int i=0;i<4;i++){
                        printf("%c",arr[i]);
                    }
                    printf("%c",arr[5]);
                }
                else if(count==3){
                    for(int i=0;i<6;i++){
                        printf("%c",arr[i]);
                    }
                }
                else if(count==4){
                    for(int i=0;i<7;i++){
                        printf("%c",arr[i]);
                    }
                }
                else if(count==5){
                    for(int i=0;i<9;i++){
                        printf("%c",arr[i]);
                    }
                }
                else if(count==6){
                    for(int i=0;i<11;i++){
                        printf("%c",arr[i]);
                    }
                }
            }

            else{
            printf("\n\n\t\t u r correct!!");
            printf("\n\t\t( u have %d more words to go)",c-ans);}
            if(ans==c) break;
    }
    if(ans==c) printf("\n\n\n\t YOU WON!!");
    else printf("\n\n\n\t\t  u lose.\n\n \t\t **SORRY  U R HANGED**");
 getch();
}       

