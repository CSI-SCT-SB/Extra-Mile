#include<stdlib.h>
#include<stdio.h>

struct bin_tree {
int data;
struct bin_tree * right, * left;
};
typedef struct bin_tree node;

void insert(node *tree, int val)
{
    node *temp = NULL;
    if(!(tree))
    {
        temp = (node *)malloc(sizeof(node));
        temp->left = temp->right = NULL;
        temp->data = val;
        tree = temp;
        return;
    }

    if(val < (tree)->data)
    {
        insert((tree)->left, val);
    }
    else if(val > (tree)->data)
    {
        insert((tree)->right, val);
    }

}

void print_preorder(node * tree)
{
    if (tree)
    {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

void print_inorder(node * tree)
{
    if (tree)
    {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

void print_postorder(node * tree)
{
    if (tree)
    {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}

void deltree(node * tree)
{
    if (tree)
    {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

node* search(node * tree, int val)
{
    if(!(tree))
    {
        return NULL;
    }

    if(val < (tree)->data)
    {
        search(((tree)->left), val);
    }
    else if(val > (tree)->data)
    {
        search(((tree)->right), val);
    }
    else if(val == (tree)->data)
    {
        return tree;
    }
}

void main()
{
    int result=1,item,choice;
    node *root;
    node *tmp;
    

    root = NULL;
    
    while(result){
         printf("Press : \n1)Insert\n2)Preorder traversal\n3)Inorder traversal\n4)Postorder traversal\n5)Search\n6)Exit\n");
         scanf("%d",&choice);
         switch(choice){
                case 1 : 
                        printf("\n\nEnter the element to insert in the tree\n");
                        scanf("%d",&item);
                        insert(root,item);
                        break;
                case 2:
                         print_preorder(root);
                         break;
                case  3:
                      print_inorder(root);
                      break;
                case 4 :
                       print_postorder(root);
                       break;
                  case 5 :
                        printf("\nEnter the element to search :\n");
                        scanf("%d",&item);
                        tmp=search(root,item);
                        if(tmp){
                            printf("Item  found at %d\n\n",tmp->data);
                        }
                        else{
                            printf("\n\nItem not found\n");
                        }
                        break;
                  case 6 :
                         printf("\nThank you :)\n");
                         deltree(root);
                         exit(0);
         }
         printf("Press 1 to cintinue...any other key to exit");
         scanf("%d",&result);
    }

    deltree(root);
}
