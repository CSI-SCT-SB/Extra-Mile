 #include<stdio.h>
#include<malloc.h>
#include<string.h>
#include<math.h>
void delete();
void book();
void minrooms(int p);
void find(int x, int y);
void displayroom(int r);
void displayall();
void create(int r,int a,int d, int x, int y);
struct node
{
    int roomno,area, doors,x,y;
    int status; 
    struct node *link;

}*header,*ptr,*new;  
void main()
{int n,rn,d,ch,a,ele,ar, x1,y1;
 char name[20];
  header=NULL;
printf("enter no of rooms");
scanf("%d", &n);

for(int i=0;i<n;i++)
{ printf("enter the room number ");
  scanf("%d", &rn);
  printf("enter the area");
  scanf("%d", &ar);
  printf("enter the number of doors");
  scanf("%d", &d);
   printf("enter the coordinates of the room");
  scanf("%d %d", &x1,&y1);


  create(rn,ar,d,x1,y1);
}
printf("Operations which can be performed\n");
printf("1. add a room  \n");
printf("2. remove a room\n");
printf("3. book a room\n");
printf("4.find min no of rooms for a given no of people\n");
printf("5. find a room nearest to a given location\n");
printf("6. display all the details of the given room\n");
printf("7. display all rooms\n");
do
    {
       printf("enter choice\n");
       scanf("%d", &a);
       switch(a)
       {
           case 1: printf("enter the room no");
                   scanf("%d", &rn);
                   printf("enter the area of room");
                   scanf("%d", &ar);
                   printf("enter the no of doors");
                   scanf("%d", &d);
                   printf("enter the coordinates of the room");
                   scanf("%d %d", &x1,&y1);
                   create(rn,ar,d,x1,y1);
                   break;
           case 2: delete();
                   break;
           case 3: book();
                   break;
           case 4: printf("enter the no of persons to accomadate");
                   scanf("%d", &ele);
                   minrooms(ele);
                   break;
           case 5: printf("enter the coordinates to find nearest room");
                   scanf("%d %d",&x1,&y1);
                   find(x1,y1);
                   break;
           case 6: printf("enter the room no to be printed");
                   scanf("%d", &rn);
                   displayroom(rn);
                   break;  
          case 7: displayall();
                  break;      
           default: printf("invalid entry");
       }
       printf("enter 1 to continue 2 to exit");
       scanf("%d", &ch);
    } while (ch==1);
}

void create(int rn,int ar,int d, int x, int y)
{
    
    new=( struct node *)malloc(sizeof(struct node));
    new->roomno= rn;
    new->area=ar;
    new->doors=d;
    new->x=x;
    new->y=y;
    new->status=0;
    new->link= NULL;
    if(header==NULL)
    {  
        header=new;
    }
    else
    { 
        ptr=header;
    while(ptr->link!=NULL)
    {
      ptr=ptr->link;
      
    }ptr->link=new;
    }
    printf("room added\n");
}

void delete()
{    int ele;
    struct node *ptr1;
    ptr1=( struct node *) malloc(sizeof(struct node));
    ptr=header;
    printf("enter the room no to be deleted");
    scanf("%d", &ele);
    if(ptr==NULL)
       {printf("the list is empty\n");
       return;
       }
    else{
        while(ptr->roomno!=ele && ptr!= NULL)
        {
          ptr1= ptr;
          ptr=ptr->link;   
        }
        if (ptr== NULL)
        {
            printf("room  no not found");
        }
        else{
            ptr1->link=ptr->link;
            free(ptr);
            
        }
        
    }
}

void book()
{
    int room,c=0;
    displayall();
    printf("Enter the room number of your choice\n");
    
    scanf("%d",&room);
    ptr=header;
    while(ptr!=NULL)
    { 
        
        if((ptr->roomno==room) && (ptr->status==0)){
            
            printf("Room %d booked successfully!\n",room);
        ptr->status=ptr->status+1;
        c++;
        break;
        }
        else if((ptr->roomno==room) && (ptr->status==1)){
            printf("Room not available\n");
            c++;break;
        }
        ptr=ptr->link;
    }
        if(c==0){
            printf("Room doesnt exist,please enter a valid room number\n");
        }
    }


void minrooms(int p)
{    
	//p is the number of persons in a room
	ptr=header;
	int min=0,s=0;
	    
        int n=0;
		int arr[20];
		ptr=header;
		int i=0;
		int j, temp;
		while(ptr!=NULL)
		{
			arr[i]=ptr->area/30;
			i++;
			n++;
			ptr=ptr->link;
		}
		//now n is total number of elements
		for(i=0; i<n; i++)
		{
			for(j=0; j<n-i-1; j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=arr[j];
				}
			}
		}
        for(i=0;i<n;i++)
        {
            printf("%d", arr[i]);
        }
		
		i=n-1; 
		while((s<p) && (i!=-1))
		{
			s=s+arr[i];
			min++;
			i--;
		}	
	printf("\nMinimum no.of rooms is %d", min);
}

void find(int x,int y)
{    
     float small,dist,a,b;
     int index;
     ptr=header;
      a=((ptr->x) - x)*((ptr->x)- x);
         b=((ptr->y)-y)*((ptr->y)-y);
         dist=sqrt(a+b);
     small=dist;
     while(ptr!=NULL)
     {   
         a=((ptr->x) - x)*((ptr->x)- x);
         b=((ptr->y)-y)*((ptr->y)-y);
         dist=sqrt(a+b);
         if(dist<=small)
         {    
             small=dist;
             index=ptr->roomno;
         }
         ptr=ptr->link;
        
     }
     printf("\n The room no closest to given coordinates is %d \n", index);
}


void displayroom(int rn)
{
    ptr=header;
    while(ptr!=NULL)
    {
    if(ptr->roomno==rn)
    {
        printf("@@ Room details @@\n");
        printf("Room no. \t %d\n",ptr->roomno);
        printf("Area     \t %d\n",ptr->area);
        printf("Number of doors \t %d\n",ptr->doors);
        printf("X \t %d\n",ptr->x);
        printf("Y \t %d\n",ptr->y);
          if(ptr->status==1)
            printf("status: BOOKED\n");
          else
            printf("status: UNBOOKED\n");
           break;
    }ptr=ptr->link;
    }
}


void displayall()
{
    ptr=header;
    while(ptr!=NULL)
    {
   printf("Room no. \t %d\n",ptr->roomno);
   printf("Area \t %d\n",ptr->area);
   printf("Number of doors \t %d\n",ptr->doors);
   printf("X \t %d\n",ptr->x);
   printf("Y \t %d\n",ptr->y);
   if(ptr->status==1)
    printf("status: BOOKED\n");
else
printf("status: UNBOOKED\n");
   ptr=ptr->link;
    }
}