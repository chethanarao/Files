#include <stdio.h>

struct node

{

int data;

struct node *link;

};

typedef struct node ll;
ll *front=0,*rear=0;
int choice;
int main ()

{

while (1)

{

printf("----Linked Queue----");

printf ("\nEnter your choice \n");

printf(" 1.Enqueue \n 2.Dequeue\n 3.Print \n 4.Exit \n");
scanf ("%d", &choice);
switch (choice)

{

case 1: Enqueue(); break;

case 2: Dequeue(); break ;

case 3: print(); break;

case 4: exit (0);

default: printf ("Wrong choice");

}

}

}

void Enqueue(){
int data;
printf("Enter Data ");
scanf("%d",&data);
ll *first;
first=(ll *)malloc(sizeof(ll));
first->data=data;
first->link=NULL;
if(front==0 && rear==0)
{
    front=rear=first;
}
else
{
    rear->link=first;
    rear=first;
}
}
void Dequeue()
{
ll *t1;
if(front==0)
{
printf("Queue is Empty \n");
}
else
{
t1=front;
printf("Deleted data is %d %u",t1->data,t1->link);
front=front->link;
free(t1);
}
}

void print()
{
    ll *t2;
if(front==0 && rear==0)

    {

        printf("Stack Empty\n");

        return;

    }
    t2=front;
        while(t2!=NULL)

    { 
         printf("%d %u\n",t2->data,t2->link);
         t2=t2->link;
    }
}

