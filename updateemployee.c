#include<stdio.h>
struct emp
{
     int empid;
     char empname[10];
     char company[10];
     
}emp1[10];

int main()
{
    int i,search;
    FILE *fp;
    fp=fopen("test","rb");
    printf("enter employee id to search\n");
    scanf("%d",&search);
    fseek(fp,0,SEEK_SET);
    for(i=0;i<3;i++)
    {
     fread(&emp1[i],sizeof(emp1),1,fp);
            if(emp1[i].empid==search)
            {
                printf("enter the employee details to update\n");
                scanf("%d %s %s",emp1[i].empid,emp1[i].empname,emp1[i].company);
                fseek(fp,sizeof(emp1[i])*(i),SEEK_SET);
                fwrite(&emp1[i],sizeof(emp1[i]),1,fp);
                break;
            }
        }
     printf("updated emp id is %d, name is %s, and company name is %s\n",emp1[i].empid,emp1[i].empname,emp1[i].company);
        fclose(fp);
    }
