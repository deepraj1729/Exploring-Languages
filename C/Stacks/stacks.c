#include<stdio.h>
int max;
int stack[100];
int top = -1;
int val;

void display()
{
  int i;
  printf("\nYour stack contains:\n");

  for(i=0;i<=top;i++)
  {
    printf("%d ",stack[i]);
  }

}

void push()
{ 
  if(top == max-1)
  {
     printf("\nError!!! StackOverflow");
  }
  else
  {
     printf("\nEnter the value you want to push in stack: ");
     scanf("%d",&val);
     
     
     stack[++top] = val;
     
     display();
     
  }  
}



void pop()
{
  if(top == -1)
  {
    printf("\nStack is empty.Can't pop more");
  }
  else
  {
    printf("\nDeleting the top-most element in the stack....");
    stack[top]='\0';
    top--;
    display();

  }
  
}

void peek()
{
  if(top != -1)
  {
    printf("\nThe top most element in the stack is %d",stack[top]);
  }
  else
  {
    printf("\nThe top most element is NULL");
  }
    
}

int main()
{
  int n;
  printf("\nEnter the max size of stack: ");
  scanf("%d",&max);
  
  printf("\nPress 1 to push");
  printf("\nPress 2 to Pop");
  printf("\nPress 3 to Peek ");
  printf("\nPress any other key to exit");

  while(1)
  { 
     printf("\n\nEnter ur choice: ");
     scanf("%d",&n);
      switch(n)
      {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: peek();
                break;
        default: printf("You exited"); 
                 return 0;                       
      }
     printf("\n\nPress 1 to push");
     printf("\nPress 2 to Pop");
     printf("\nPress 3 to Peek ");
     printf("\nPress any other key to exit");
  }

 return 0;

}