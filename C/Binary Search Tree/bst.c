#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;

};

struct node *tree=NULL;
struct node *insert(struct node*,int );
void inorderT(struct node *);

int main()
{
    int option,val;
    struct node *ptr;
    while(1)
    {
        printf("\nMain menu");
        printf("\n1.Insert element");
        printf("\n2.In oreder traversal");
        printf("\n3.Exit");
        printf("\nEnetr ur option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: printf("\nenter the value of the new node: ");
                    scanf("%d",&val);
                    tree = insert(tree,val);
                    break;
            case 2: printf("\nThe elements in inored trav are :\n ");
                    inorderT(tree);
                    break;
            default: printf("\nYOu exited"); 
                     return 0;               
        }

    }
    return 0;
}

struct node *insert(struct node *tree,int val)
{
    struct node *ptr,*nodeptr,*parentptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data =val;
    ptr->left = NULL;
    ptr->right = NULL;
    if(tree == NULL)
    {
        tree = ptr;
        tree->left = NULL;
        tree->right = NULL;
    }
    else
    {
        parentptr = NULL;
        nodeptr = tree;
        while(nodeptr!= NULL)
        {
            parentptr = nodeptr;
            if(val < nodeptr->data)
            {
                nodeptr=nodeptr->left;
            }
            else
            {
                nodeptr = nodeptr->right;
            }

            
        }
        if(val <parentptr->data)
        {
            parentptr->left =ptr;

        }
        else
        {
            parentptr->right = ptr;
        }
        
    }
    return tree;
    
}

void inorderT(struct node *tree)
{
    if(tree != NULL)
    {
        inorderT(tree->left);
        printf("%d\t",tree->data);
        inorderT(tree->right);
    }
}

