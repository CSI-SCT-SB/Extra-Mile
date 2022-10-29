#include <stdio.h>
#include <stdlib.h>
#define ARR_LEN 256
struct Dish{
    int id;
    char *name;
    int cost;
    struct Dish *next;
};
struct Item{
    struct Dish *dish;
    int quantity;
    struct Item *next;
};
struct Dish *menu = NULL;
struct Item *bill = NULL;
int curr_id = 0;

struct Dish *findDish(){
    int id;
    printf("Enter ID: ");
    scanf("%d", &id);
    struct Dish *i;
    for (i = menu; i != NULL; i = i->next){
        if (i->id == id)
            return i;
    }
    return NULL;
}
void insert(char *name, int cost){
    struct Dish *newDish = malloc(sizeof(struct Dish));

    newDish->name = name;
    newDish->cost = cost;
    newDish->id = ++curr_id;
    newDish->next = menu;
    menu = newDish;
}
void inor(){
    int id, q, found = 0;
    printf("Enter ID: ");
    scanf("%d", &id);
    printf("Enter Quantity: ");
    scanf("%d", &q);
    struct Dish *i;
    for (i = menu; i != NULL; i = i->next){
        if (i->id == id){
            found = 1;
            break;
        }
    }
    if (found){
        struct Item *newItem = malloc(sizeof(struct Item));
        newItem->dish = i;
        newItem->quantity = q;
        if (bill == NULL)
            newItem->next;
        newItem->next = bill;
        bill = newItem;
    }
    else
        printf("Not found");
}
void display(){
    printf("ID\tName\tCost\n");
    struct Dish *p = menu;

    while (p != NULL){
        printf("%d\t%s\t%d\n", p->id, p->name, p->cost);
        p = p->next;
    }
}
void modfy(){
    struct Dish *res = findDish();
    if (res == NULL)
        printf("Not Found!!\n");
    else{
        printf("What to edit?\n[1] Name\t[2] Cost\nChoice: ");
        int choice, price;
        char name[256];
        scanf("%d", &choice);
        switch (choice){
        case 1:
            printf("Enter new name: ");
            scanf("%s", name);
            res->name = name;
            break;
        case 2:
            printf("Enter new price: ");
            scanf("%d", &price);
            res->cost = price;
            break;
        default:
            printf("Invalid Choice!!\n");
        }
    }
}
void dlt(){
    int id, found = 0;
    printf("Enter ID: ");
    scanf("%d", &id);
    struct Dish *res, *prev_res = NULL;
    for (res = menu; res != NULL; res = res->next){
        if (res->id == id){
            found = 1;
            break;
        }
        prev_res = res;
    }
    if (found){
        if (prev_res == NULL)
            menu = res->next;
        else
            prev_res->next = res->next;
        free(res);
    }
    else
        printf("Not Found!!");
}
void genbill(){
    int total = 0;
    for (struct Item *p = bill; p != NULL; p = p->next){

        int price = p->quantity * p->dish->cost;
        printf("%d\t%s\t%d\t%d\n", p->dish->id, p->dish->name, p->quantity, price);
        total += price;
    }
    printf("Total is: %d\n", total);
}

void inputUser(){
    char *name = malloc(128);
    int p;
    printf("Enter Dish Name: ");
    scanf("%s", name);
    printf("Enter Price: ");
    scanf("%d", &p);
    insert(name, p);
}

void main(){
    int n, c, pwrd;
    printf("\n Acknowledge user: ");
    printf("\n Press 1020 for admin and 1399 for customer");
    printf("\n Enter the key: ");
    scanf("%d", &pwrd);
    if (pwrd == 1020){
        do{
            printf("\nWelcome to the Restaurant: ");

            printf("\n1.Entry of dishes\n2.Deletion of dishes\n3.Modifying prices of dishes\n4.display menu\n5.exit");
            printf("\nEnter the choice: ");
            scanf("%d", &c);
            switch (c){

            case 1:{
                inputUser();
                break;
            }
            case 2:{
                dlt();
                break;
            }
            case 3:{
                display();

                modfy();
                break;
            }
            case 4:{
                display();
                break;
            }
            case 5:{
                printf("\nThe program has stopped: ");
                break;
            }
            }
            if (c == 5){
                break;
            }
        } while (pwrd > 1);
    }
     printf("\n Acknowledge user: ");
    printf("\n Press 1020 for admin and 1399 for customer");
    printf("\n Enter the key: ");
    scanf("%d", &pwrd);
   
  if (pwrd == 1399){
        do{
            printf("\nHi there,\nWelcome to the Restaurant: ");
            int ch;
            printf("\n1.Placing order\n3.GenBill\n4.display menu\n5.exit");
            printf("\nEnter the choice: ");
            scanf("%d", &ch);
            switch (ch){
            case 1:{
                display();

                inor();
                break;
            }

            case 3:{
                genbill();
                break;
            }
            case 4:{
                display();
                break;
            }
            case 5:{
                printf("\nThe program has stopped: ");
                break;
            }
            }
            if (ch == 5){
                break;
            }
        } while (pwrd > 1);
    }
}
