//Sorting of Names in alphabetical order
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(){
    int i,n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    char names[n][100];
    //Entering names of the students
    for(i=0;i<n;i++){
        printf("Enter name of student%d : ",i+1);
        scanf("%s",names[i]);
    }
    //Sorting the names in lexicographic order
    int count,j,flag=1;char temp[100];
    for(count=0;(count<n-1)&&flag==1;count++){
        flag=0;
        for(i=0;i<n-1-count;i++){
            j=i+1;
            if(strcmp(names[i],names[j])>0){
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
                flag=1;
            }
        }
    }
    
    //Printing the sorted names
    printf("\n\nThe sorted list of names is :\n");
    for(i=0;i<n;i++){
        printf(" %s\n",names[i]);
    }
    getch();
}