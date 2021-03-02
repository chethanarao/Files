#include<stdio.h>
struct node
{
    int data;
    struct node *link;
};typedef struct node ll;
int main()
{
    FILE *fp; int ll n1;
    fp=fopen("file","wb");
    n1.data=10;
    n1.link=12345;
    fwrite(n1,sizeof(n1),1,fp);
    printf("done writing to file\n");
    fclose(fp);
    
}
