#include <stdio.h>

struct node

{

int data;

struct node *link;

};

typedef struct node ll;

ll *top=NULL;

int data = 0, choice = 0, sizeoflist;

int

main ()

{

while (1)

{

printf("----Linked Stack----");

printf ("\nEnter your choice \n");

printf(" 1.Push \n 2.Pop \n 3.Print \n 4.Exit \n");
scanf ("%d", &choice);
switch (choice)

{

case 1: push(); break;

case 2: pop(); break ;

case 3: print(); break;

case 4: exit (   0);

default: printf ("Wrong choice");

}

}

}

void

menu (){

}

void push(){

ll *first;


     first=(ll *)malloc(sizeof(ll));

    printf("Enter Data ");
    
    scanf("%d",&data);


    first->data=data;
    first->link=top;
    top=first;
}

void pop()

{
ll *t1;
if(top == NULL)

{

printf("Stack Empty \n");

return;

}

t1=top;
printf("Deleted data is %d %u",t1->data,t1->link);

top=t1->link;
t1->link=NULL;
free(t1);


}

void print()
{
    ll *t2;
if(top == NULL)

    {

        printf("Stack Empty\n");

        return;

    }
    t2=top;
        while(t2!=NULL)

    { 
         printf("%d %u\n",t2->data,t2->link);
         t2=t2->link;
    }
}
