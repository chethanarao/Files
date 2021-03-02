#include <stdio.h>
#include<stdlib.h>
struct node
    {
        int data;
        struct node  *link; // self referential structure 
    }l1,l2,l3,l4;

int main()
{
    l1.data=10;
    l2.data=13;
    l3.data=12;
    l4.data=11;
    l1.link=&l2;
    l2.link=&l3;
    l3.link=&l4;
    l4.link=NULL;
    printf("%d, %u ",l1.data,l1.link);
    printf("%d,%u ",l2.data,l2.link);
    printf("%d,%u ",l3.data,l3.link);
    printf("%u,%u ",l4.data,l4.link);
}
