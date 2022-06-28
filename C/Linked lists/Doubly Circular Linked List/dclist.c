//************************************************ Doubly Circular Linked List ********************************************//
#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *create(struct node*);
struct node *display(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *insert_pos(struct node *);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_pos(struct node *);

int main()
{
    int option;
    while(1)
    {   
        printf("\n\n--------------------------------------");
        printf("\n********Main Menu*********");
        printf("\n1.Create Doubly Linked List");
        printf("\n2.Display doubly linked List");
        printf("\n3.Insert node at begining");
        printf("\n4.Insert node at end");
        printf("\n5.Insert after any existing node");
        printf("\n6.Delete node at the begining");
        printf("\n7.Delete node at the end");
        printf("\n8.Delete node after any existing node");
        printf("\n\nEnter ur option: ");
        scanf("%d",&option);
        switch (option)
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
        default: printf("\nYou Exited");
                return 0;
            
        }
    }
    return 0;
}

struct node *create(struct node *head)
{
    struct node *new_node,*ptr;
    int num;
    printf("\nEnter -1 to end");
    printf("\nEnter the value of node: ");
    scanf("%d",&num);
    while(num!= -1)
    {
        if(head == NULL)
        {
            new_node = (struct node*)malloc(sizeof(struct node));
            new_node->prev = NULL;
            new_node->data = num;
            new_node->next = new_node;
            head = new_node;
        }
        else
        {
            new_node = (struct node*)malloc(sizeof(struct node));
            new_node->data = num;
            ptr = head;
            while(ptr->next != head)
            {
                ptr = ptr->next;
            }
            new_node->prev = ptr;
            ptr->next = new_node;
              
            new_node->next = head;
            head->prev = new_node;
        }
        printf("\nEnter the value of node: ");
        scanf("%d",&num);
        
    }
    return head;
}

struct node *display(struct node *head)
{
    struct  node *ptr;

    if(head == NULL)
    {
        printf("\nInsert something. The List is empty\n");
    }
    else
    {   
        printf("\nThe doubly linked list is :\n");
        ptr = head;
        while(ptr->next != head)
        {   
            printf("%d\t",ptr->data);
            ptr = ptr->next;
        }
        printf("%d\t",ptr->data);
    }
    return head;     
}

struct node *insert_beg(struct node *head)
{ 
    struct node *new_node,*ptr;
    int val;
    printf("\nEnter the value u wanna insert at the beginning: ");
    scanf("%d",&val);
    if(head == NULL)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = val;
        new_node->prev = NULL;
        new_node->next = new_node;
        head = new_node;
    }
    else
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = val;
        ptr = head;
        while(ptr->next != head)
        {
            ptr = ptr->next;
        }

        new_node->prev = ptr;
        ptr -> next = new_node;
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
    return head;
}

struct node *insert_end(struct node *head)
{
    struct node *new_node,*ptr;
    int val;
    
    if(head == NULL)
    {
        printf("\nInsert something. The List is empty\n");
    }
    else
    {
        
        printf("\nEnter the value u wanna insert at the end: ");
        scanf("%d",&val);

        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = val;
        ptr =head;
        while(ptr->next != head)
        {
            ptr= ptr->next;
        }
        ptr->next = new_node;
        new_node->prev = ptr;
        new_node->next = head;
        head->prev = new_node;
    }  
    return head;
}

struct node *insert_pos(struct node *head)
{
 struct node *new_node,*ptr,*preptr;
 int val,num;
 if(head == NULL)
 {
    printf("\nThe list is empty");
    printf("\nInsert some data");
 }
 else
 {
    printf("\nEnter the value of the node after which u wanna insert the node: ");
    scanf("%d",&val);
    printf("\nEnter the value of the new node: ");
    scanf("%d",&num);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
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
        printf("\nThe list is empty.Cant't delete more");
    }
    else
    {
        ptr = head;
        while(ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = head->next;
        ptr->next->prev = ptr;
        free(head);
        head = ptr->next;
    }   
    return head;
}

struct node *delete_end(struct node *head)
{
    struct node *ptr,*preptr;
    if(head == NULL)
    {
        printf("\nThe list is empty.Can't delete more");
    }
    else
    {
        ptr = head;
        preptr = ptr;
        while(ptr->next != head)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        preptr->next = head;
        head->prev = preptr;
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
        printf("\nThe list is empty.Can't delete more");
    }
    else
    {
        printf("\nEnter the value of the node after which u wanna delete the node: ");
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
 



