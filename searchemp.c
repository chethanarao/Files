#include<stdio.h>
struct emp
{
     int empid;
     char empname[10];
     char company[10];
     
}emp1[10];

int main()
{
    int i,id;int flag;
    FILE *fp;
    fp=fopen("test","rb");
    printf("enter employee id to search\n");
    scanf("%d",&id);
    while(fread(&emp1[i],sizeof(emp1),1,fp)==1)
    {
        for(i=0;i<=3;i++)
        {
            if(emp1[i].empid==id)
            {
                flag=1;
                printf("found");
                printf("%s %s",emp1[i].empname,emp1[i].company);
                 break;
            }
        }
    }
        if(flag==0)
        {
            printf("not found");
        }
     fclose(fp);
    }
