#include<stdio.h>
#include<conio.h>
#define max 5

int queue[max];
int front=-1,rear=-1;
void enqueue();
int dequeue();
void display();
int peek();
int main()
{
    int option,val;
    while(1)
    {
        printf("\n\n******Main Menu*******");
        printf("\n1:Insert an element (Enqueue)");
        printf("\n2.Display the queue");
        printf("\n3.Delete an element (Dequeue)");
        printf("\n4.Show the front element (Peek)");
        printf("\nPress any other key to exit");
        printf("\n\nEnter your choice: ");
        scanf("%d",&option);

        switch(option)
        {
            case 1: enqueue();     
                    break;
            case 2: display();
                    break;        
            case 3: val = dequeue();
                    if(val != -1)
                    {
                        printf("\nThe deleted element is : %d",val);
                    }
                    break;
            case 4: val = peek();
                    break;
            default:printf("\nYou Exited");
                    return 0;              
        }
    }
    return 0;
}

void display()
{   
    printf("\nThe required queue is:\n ");
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
}

void enqueue()
{
    int num;
    printf("\nEnter the num to be inserted in the queue: ");
    scanf("%d",&num);
    if(rear == max-1)
    {
        printf("\nOverflow");
        return 0;
    }
    else if(front == -1 && rear == -1)
    {
        front = rear = 0;  
        queue[rear]=num; 
    }
    else
    {
        rear++;    
        queue[rear]=num;
    }
}

int dequeue()
{
    int val;
    if(front == -1 || front>rear)
    {
        printf("\nUnderflow");
        return -1;
    }
    else
    {
        val = queue[front];
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }
        return val;
    }
    
}

int peek()
{
    int a;
    if(front ==-1 || front>rear)
    {
        printf("\nThe queue is empty.Nothing to show");
        printf("\nInsert something");
        return -1;
    }
    else
    {
        a = queue[front]; 
        return a;      
    }   
}
