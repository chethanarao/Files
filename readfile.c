#include<stdio.h>
struct employee
{
    int data;
    char name[10];
}obj[10];
int main()
{
    FILE *fp;
    fp=fopen("file.txt","r");
    for(i=0;i<3;i++)
{
    fread(&obj[i],sizeof(obj),1,fp);
}
for(i=0;i<3;i++)
{
    printf("%d %s",obj[i].data,obj[i].name);
}
fclose(fp);
}
