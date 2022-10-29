//MENU DRIVEN C PROGRAM TO DISPLAY PATTERNS-PYRAMID, HOLLOW PYRAMID, DIAMOND, RHOMBUS, HOLLOW RHOMBUS, SQUARE, HOLLOW SQUARE
#include<stdio.h>
#include <stdlib.h>

int n; 
void pyramid(){
    printf("Enter the number of rows:");  
    scanf("%d",&n);  
    int m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)
           printf(" ");
       for(int k=1;k<=2*i-1;k++)
         printf("*");
       m--;  
      printf("\n");  
    }  
    return;
}
void hollow_pyramid(){
    printf("Enter the number of rows:");  
    scanf("%d",&n);  
    int m=n;  
   for(int i=1;i<=n;i++)  
   {  
       for(int j=1;j<=m-1;j++)
           printf(" ");
       for(int k=1;k<=2*i-1;k++)  
       {  
          if(k==1 || k==2*i-1 || i==n)  
            printf("*");  
         else  
            printf(" ");  
       }  
       m--;  
      printf("\n");  
    }  
    return;
    
}
void diamond(){
    printf("Enter the number of rows:\n");  
    scanf("%d",&n);  
    int spaces=n-1;  
    int stars=1;  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=spaces;j++) 
            printf(" ");
        for(int k=1;k<=stars;k++)
            printf("*");
        if(spaces>i)  
        {  
            spaces=spaces-1;  
            stars=stars+2;  
        }  
        if(spaces<i)  
        {  
        spaces=spaces+1;  
        stars=stars-2;  
        }  
        printf("\n");  
    }  
    return ;
}
void rhombus(){
    printf("Enter the number of rows:");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
            printf(" ");  
        for(int k=1;k<=n;k++)  
            printf("*");    
        printf("\n");  
    }  
    return;  
}
void hollow_rhombus(){
    printf("Enter the number of rows:");  
    scanf("%d",&n);  
    for(int i=n;i>=1;i--)  
    {  
        for(int j=1;j<=i-1;j++)  
            printf(" ");  
        for(int k=1;k<=n;k++)  
        {  
           if(i==1 || i==n || k==1 || k==n)  
                printf("*");  
            else  
                printf(" ");   
        }  
        printf("\n");  
    }  
    return;  
    
}
void square(){ 
    printf("Enter the number of rows:");  
    scanf("%d",&n);  
    for(int i=0;i<n;i++)  
    {  
        for(int j=0;j<n;j++)  
            printf("*");  
        printf("\n");  
    }  
    return; 
}
void hollow_square(){
    printf("Enter the number of rows:");  
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)  
    {  
        for(int j=1;j<=n;j++)  
        {  
            if(i==1 ||i==n||j==1||j==n)  
                printf("*");  
            else  
                printf(" ");  
        }  
        printf("\n");  
    }    
    return ;
}

void main()
{
    int c;
    do{
        printf("\nCHOOSE THE PATTERN TO BE DISPLAYED:");
        printf("\n\n1.Pyramid \n2.Hollow Pyramid\n3.Diamond \n4.Rhombus \n5.Hollow Rhombus\n6.Square \n7.Hollow Square\n8.Exit\n\nENTER NO :");
        scanf("%d",&c);
        switch(c)//SWITCH TO PERFORM THE FUNCTION CHOSEN BY THE USER
        {
            case 1 :
                pyramid(); //FUNCTION CALL
                break;
        
            case 2 :
                hollow_pyramid(); //FUNCTION CALL
                break;
            
            case 3 :
                diamond(); //FUNCTION CALL
                break;
            
            case 4 :
                rhombus(); //FUNCTION CALL
                break;
            
            case 5 :
                hollow_rhombus(); //FUNCTION CALL
                break;
            
            case 6 :
                square(); //FUNCTION CALL
                break;
            
            case 7 :
                hollow_square(); //FUNCTION CALL
                break;
            
            case 8 :break;
            default:printf("\nINVALID OPTION");break;
        }
    }while(c!=8);
}
