#include <stdio.h>
int stack[5],top=-1,n,size=5;
int main()
{
    while(1)
    {
        printf("\n1.push\n2.pop\n3.print\n4.exit\n");
         printf("Select your choice\n");
         scanf("%d",&n);
        switch(n)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            print();
            break;
            case 4:
            exit(0);
            
        }
    }
    
}
void push()
{
    int element;
    if(top == size-1)
    {
        printf("Stack is full");
    }
    else
    {
       printf("Enter element to push");
       scanf("%d ",&element);
       top++;
       stack[top]=element;
       printf("Inserted element\n");
       printf("%d",element);

    }
    
}
void pop()
{
    if (top==-1)
    {
        printf ("Stack is empty can't pop");

    }
    else
    {
        printf("poped element is %d\n", stack[top]);
        top--;
        return;
    }
}
void print()
{
    if(top==-1)
    {
        printf ("Stack is empty can't pop");

        
    }
    else
    {
        for(int i=top; i>=0;i--)
        {
         
          printf("%d " ,stack[top]);  
        }
    }
}

