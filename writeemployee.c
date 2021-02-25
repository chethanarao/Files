#include<stdio.h>
struct emp
{
     int empid;
     char empname[10];
     char company[10];
     
}emp1[10];
//typedef emp emp1[10];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter the employee id,empname,company\n");
        scanf("%d %s %s",&emp1[i].empid,&emp1[i].empname,&emp1[i].company);
    }

    /*for(i=0;i<3;i++)
    {
        //printf("enter the employee id,empname,company\n");
        printf("%d %s %s",emp1[i].empid,emp1[i].empname,emp1[i].company);
    }*/
FILE *fp;
fp=fopen("test","wb");
for(i=0;i<3;i++)
{
    fwrite(&emp1[i],sizeof(emp1),1,fp);
    
}
fclose(fp);
}
