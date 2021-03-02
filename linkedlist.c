#include <stdio.h>

struct node
{
 int data;
 struct node *link;
}; 
typedef struct node ll;

ll *first=NULL,*temp ;int data=0,choice=0,sizeoflist;
int main ()
{


while(choice != 9)

 {

 menu();

 scanf("%d",&choice);
 
 switch(choice)

 {

 case 1:
insertend();
 break;
 case 2:
 insertbeg();
 break;
 case 3:

 insertatpos();

 break;
 case 4:
 deleteatbeg();
 break;
 case 5: deletepos();

 break;
 case 6:
 delend();
 break;
 case 7:print(); break;
 case 8:
 search();
 break;
 case 9: exit(0);
 default : printf("Wrong choice");




 }
 

 }











return 0; 

}

 void menu()

 {

 printf("\nEnter your choice\n");
 printf("1.Insert End \n2.Insert Beg \n3.Insert after which position \n");
 printf("4.Del First \n5.Delete Node no \n6.delend\n");
 printf("7.Print \n8.Search \n9.Exit \n");
 return;

 }
 


 void insertbeg()
 {
 if(first == NULL) // if the list is empty
 {
 first = (ll *)malloc(sizeof(ll));

 ++sizeoflist;
 printf("Enter data for the node \n");
 scanf("%d",&data);
 first->data = data;
 first->link = NULL;


 } 

 else
 {
 temp = (ll *)malloc(sizeof(ll));
 printf("Enter data for the node \n");
 scanf("%d",&data);
 temp->data = data;
 temp->link = first;
 first = temp;
 }

 }

void insertatpos()
{
 int position=0; int tdata; ll * temp1;

 printf("Enter after which node you want to insert node ");
 scanf("%d",&position);

 if(first == NULL)
 {
 printf("Linked List Does not exit ");
 return;
 }
 if(position == 0)
 {

 insertbeg();
 return;
 }

 if(position > sizeoflist )
 {
 printf("Out of bounds ");
 return ;

 }//
 // 3
 temp = first;
 for (int i = 1; i < position; i++) {
 temp = temp->link;
 }
 printf("Enter data");
 scanf("%d",&tdata);
 temp1 = (ll *) malloc(sizeof(ll));
 temp1->link = temp->link;
 temp->link = temp1;
 temp1->data = tdata;
 ++sizeoflist;
}
void deleteatbeg()
{
 ll * temp1;
 if(first == NULL){
 printf("No List ");
 return ;
 }
 printf("Deleted Node Data is %d",first->data);
 temp1 = first;
 first= first->link;
 free(temp1);
} 
void deletepos()
{
 ll * temp,*temp1; int pos;

 temp = first;
 printf("Enter Position to delete ");
 scanf("%d",&pos);
 if(pos == 0)
 {
 deleteatbeg();
 return;
 }

 for (int i = 1; i < pos; i++) {
 temp1 = temp;
 temp = temp -> link;
 }
 temp1->link = temp->link;
 printf("Deleted Data is %d \n",temp->data);
 free(temp);

}
void print(){
 if(first == NULL)
 {
 printf("List is empty ");
 }
 else
 {
 temp = first;
 while(temp != NULL)
 {
 printf(" [%d %u]-> \t",temp->data,temp->link);
 temp = temp -> link;
 } 

 }

}

void search(){
 int searchelement=0,foundindex=0,searchposition,flag=0;
 ll * searchpointer,*stemp;
 if(first == NULL)
 {
 printf("List Empty");
 return;
 }

 stemp = first;
 printf("Enter element to search ");
 scanf("%d",&searchelement);
 for (int i = 1;stemp!=NULL ; i++) {
 if((stemp->data) == searchelement)
 {
 flag = 1 ;
searchpointer=stemp;
 searchposition = i;
 break;
 }
 stemp=stemp->link;
 }

 if(flag == 1)
 {
 printf("Found %d at %d \n",searchpointer->data,searchposition);
 }
 else
 printf("%d not found",searchelement);
}
void insertend()
{    struct node *temp,*l1;
int item;
    //struct node *l1,*tmp;
    l1=(struct node *)malloc(sizeof(struct node));
    temp=first;
    while(temp->link!=NULL)
    {
        temp=temp->link;
    }
    
    temp->link=l1;
    l1->link=NULL;
    printf("enter the data:\n");
    scanf("%d",&item);
    l1->data=item;
    
}
void delend()
{
	struct node *temp1,*temp2;
	temp2=first;
	while(temp2->link!=NULL)
	{
	    temp1=temp2;
		temp2=temp2->link;
	}
	printf("Deleted data is %d",temp2->data);
	temp1->link=NULL;
	free(temp2);
	
}

