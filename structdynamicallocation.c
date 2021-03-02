#include <stdio.h>
struct emply
{
    char name[10];
    char id[10];
    char place[10];
};
int main()
{
   struct emply *emp1;
   emp1=(int*) malloc(sizeof(int)*3);
     printf("Enter the empolyee details\n");
    for(int i=0;i<3;i++)
    {
        scanf("%s",emp1[i].name);
        scanf("%s",emp1[i].id);
        scanf("%s",emp1[i].place);
    }
    printf("the empolyee details are\n");
    for(int i=0;i<3;i++)
    {
        printf("%s\t",emp1[i].name);
        printf("%s\t",emp1[i].id);
        printf("%s\n",emp1[i].place);
    }
}
