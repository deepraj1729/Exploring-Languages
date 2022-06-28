//**************************************   Singly Linked List   ****************************************//
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;

};

struct node *start=NULL;
struct node *create(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_pos(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_pos(struct node *);

int main()
{
    int option;
    while(1)
    {
        printf("\n\nMain menu");
        printf("\n1.Create list");
        printf("\n2.Display list");
        printf("\n3.Insert at begining");
        printf("\n4.insert at ending");
        printf("\n5.Insert after any position");
        printf("\n6.Delete at begining");
        printf("\n7.Delete at end");
        printf("\n8.Delete after any position");
        printf("\n\nEnter your option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:  start = create(start);
                            break;
            case 2:  start = display(start);
                            break;
            case 3:  start = insert_beg(start);
                            break;
            case 4:  start = insert_end(start);
                            break;
            case 5:  start = insert_pos(start);
                            break;                    
            case 6 : start = delete_beg(start);
                            break; 
            case 7 : start = delete_end(start);
                            break; 
            case 8 : start = delete_pos(start);
                            break;                
            default : printf("You exited");
                      return 0;                                                                                                                
        }

    }
}

struct node *create(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the data: ");
    scanf("%d",&num);
    while(num!= -1)
    {
        new_node = (struct node*) malloc(sizeof(struct node));
        new_node ->data = num;
        if (start == NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
             ptr = start;
             while(ptr->next != NULL)
             {
                 ptr = ptr->next;

             }
             ptr->next = new_node;
             new_node->next = NULL;
        }
        printf("\nEnter the data: ");
        scanf("%d",&num);
        
    }
    return start;

}

struct node *display(struct node *start)
{
    struct node *ptr;
    printf("\nThe Linked list created is : \n");
    ptr = start;
    while(ptr!= NULL)
    {
        printf("%d\t",ptr->data);
        ptr =ptr->next;
    }
    printf("\n");
    return start;
}

struct node *insert_beg(struct node *start)
{
    struct node *new_node;
    int num;
    printf("\nEnter the value of node to be inserted at the begining : ");
    scanf("%d",&num);
    new_node = (struct node *)malloc(sizeof(struct node));
    new_node ->data = num;
    new_node-> next = start;
    start = new_node;
    return start;
}

struct node *insert_end(struct node *start)
{
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter the value of node to be inserted at the end: ");
    scanf("%d",&num);
    if(start == NULL)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        start = new_node;

    }
    else
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        ptr = start;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->next =NULL;
    }
    return start;

}

struct node *insert_pos(struct node *start)
{
    struct node *new_node,*ptr,*preptr;
    int val,num;
    if(start == NULL)
    {   
        printf("\nThe list is empty.");
        printf("\nEnter the value of the new node to be inserted: ");
        scanf("%d",&num);
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;
        start = new_node;

    }
    else
    {
        printf("\nEnter the value after which u wanna insert the new node: ");
        scanf("%d",&val);
        printf("\nEnter the value of the new node to be inserted: ");
        scanf("%d",&num);

        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data =num; 
        ptr = start;
        preptr = ptr;

        while(preptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = new_node;
        new_node->next = ptr;
    }
    return start;
}

struct node *delete_beg(struct node *start)
{
   struct node *ptr;
   if(start == NULL)
   {
       printf("\nThe list is empty. Can't delete more");
   }
   else
   {
       ptr = start->next;
       free(start);
       start = ptr;
   }
   return start;
}

struct node *delete_end(struct node *start)
{
    struct node *ptr,*preptr;
    if(start == NULL)
    {
       printf("\nThe list is empty. Can't delete more");
    }
    else
    {
        ptr = start;
        preptr = ptr;
        while(ptr->next != NULL)
        {
            preptr = ptr;
            ptr=ptr->next;
        }
        preptr->next = NULL;
        free(ptr);
    }
    return start;
    
}

struct node *delete_pos(struct node *start)
{
    struct node *ptr,*preptr;
    int val;
    if(start == NULL)
    {
       printf("\nThe list is empty. Can't delete more");
    }
    else
    {  
        printf("\nEnter the value after which u wanna delete the node: ");
        scanf("%d",&val);
        ptr = start;
        preptr = ptr;
        while(preptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        free(ptr);
    }
   return start; 
}