//*********************************       Doubly Linked List      ****************************************** //
#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *create(struct node *);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node *);
struct node *insert_pos(struct node *);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node *);
struct node *delete_pos(struct node *);
struct node *display(struct node*);

int main()
{
    int option;
    while(1)
    {
        printf("\n******Main Menu*******");
        printf("\n1.Create Node");
        printf("\n2.Display Doubly Linked List");
        printf("\n3.Insert Node at Begining");
        printf("\n4.Insert Node at the End");
        printf("\n5.Insert Node after any Node");
        printf("\n6.Delete Node at the Begining");
        printf("\n7.Delete Node at the End");
        printf("\n8.Delete Node after any Node");
        printf("\nEnter Your option: ");
        scanf("%d",&option);
        switch(option)
        {
            case 1: head = create(head);
                    break;
            case 2: head = display(head);
                    break;
            case 3: head = insert_beg(head);
                    break;
            case 4: head = insert_end(head);
                    break;
            case 5: head = insert_pos(head);
                    break;
            case 6: head = delete_beg(head);
                    break;
            case 7: head = delete_end(head);
                    break;
            case 8: head = delete_pos(head);
                    break;
            default:printf("\nYou Exited");
                    return 0;                                                                
        }
    }
}

struct node *create(struct node *head)
{
    struct node *new_node,*ptr;
    int num;

    printf("\nEnter -1 to end ");
    printf("\nEnter the value of the node to be created: ");
    scanf("%d",&num);
    while(num != -1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data= num;
        if(head == NULL)
        {
            new_node->prev = NULL;
            new_node->next = NULL;
            head = new_node;
        }
        else
        {
            ptr = head;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->prev = ptr;
            new_node->next = NULL;
        }
        printf("\nEnter the value of the node to be created: ");
        scanf("%d",&num);
    }    
    return head;    
}

struct node *display(struct node *head)
{
    struct node *ptr;
    ptr = head;
    printf("\nThe Doubly linked list is: \n");
    while(ptr->next != NULL)
    {
        printf("%d\t",ptr->data);
        ptr = ptr->next;
    }
    printf("%d\t",ptr->data);
    printf("\n");
    return head;
}

struct node *insert_beg(struct node *head)
{
    struct node *new_node;
    int val;
    printf("\nEnter the value u wanna insert in the node: ");
    scanf("%d",&val);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val;
    if(head == NULL)
    {
        new_node->prev = NULL;
        new_node->next = NULL;
        head = new_node;
    }
    else
    {
        new_node->next = head;
        new_node->prev = NULL;
        head->prev = new_node;
        head = new_node;
    }
    return head;    
}

struct node *insert_end(struct node *head)
{
    struct node *new_node,*ptr;
    int val;
    printf("\nEnter the value u wanna insert in the node: ");
    scanf("%d",&val);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = val;
    if(head == NULL)
    {
        new_node->prev = NULL;
        new_node->next = NULL;
        head = new_node;
    }
    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->prev = ptr;
        new_node->next = NULL;
    }
    return head;
}

struct node *insert_pos(struct node *head)
{
    struct node *new_node,*preptr,*ptr;
    int val,num;
    printf("\nEnter the value of the node after which u wanna insert the new node: ");
    scanf("%d",&val);
    printf("\nEnter the value of the new node to be inserted: ");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data =num;
    if(head == NULL)
    {
        new_node->prev = NULL;
        new_node->next = NULL;
        head = new_node;
    }
    else
    {
        ptr = head;
        preptr = ptr;
        while(preptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = new_node;
        new_node->prev = preptr;
        new_node->next = ptr;
        ptr->prev = new_node;        
    }
    return head;    
}

struct node *delete_beg(struct node *head)
{
    struct node *ptr;
    if(head == NULL)
    {
       printf("\nThe list is empty. Can't delete more");
       printf("\nInsert some elements before deletion");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        head->prev = NULL;
        free(ptr);
    }
    return head;   
}

struct node *delete_end(struct node *head)
{
    struct node *ptr,*preptr;
    if(head == NULL)
    {
       printf("\nThe list is empty. Can't delete more");
       printf("\nInsert some elements before deletion");
    }
    else
    {
        ptr = head;
        preptr = ptr;
        while(ptr->next != NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next = NULL;
        free(ptr);
    }
    return head;
}

struct node *delete_pos(struct node *head)
{
    struct node *ptr,*preptr;
    int val;
    if(head == NULL)
    {
       printf("\nThe list is empty. Can't delete more");
       printf("\nInsert some elements before deletion");
    }
    else
    {
        printf("\nEnter the value after which u wanna delete the node: ");
        scanf("%d",&val);
        ptr = head;
        preptr = ptr;
        while(preptr->data != val)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = ptr->next;
        preptr->next->prev = preptr;
        free(ptr);
    }
    return head;
}


