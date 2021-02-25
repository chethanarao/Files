#include<stdio.h>
struct emp
{
     int empid;
     char empname[10];
     char company[10];
     
}emp1[10];

int main()
{
    int i;
    FILE *fp;
    fp=fopen("test","rb");
    for(i=0;i<3;i++)
    {
        fread(&emp1[i],sizeof(emp1),1,fp);
    }
    for(i=0;i<3;i++)
    {
        printf("%d %s %s",emp1[i].empid,emp1[i].empname,emp1[i].company);
    }
}
