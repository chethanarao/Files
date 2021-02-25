#include<stdio.h>
struct emp
{
     int empid;
     char empname[10];
     char company[10];
     
}emp1[10];

int main()
{
    int i,id;
    FILE *fp;
    fp=fopen("test","r+b");
    printf("enter employee id to search\n");
    scanf("%d",&id);
     while(fread(&emp1[i],sizeof(emp1),1,fp)==1)
     {
          for(i=0;i<=3;i++)
          {
                 if(emp1[i].empid==id)
                 {
                     printf("enter the new data\n");
                     scanf("%d %s %s",&emp1[i].empid,&emp1[i].empname,&emp1[i].company);
                     fseek(fp,sizeof(emp1[i])*i,SEEK_SET);
                     fwrite(&emp1[i],sizeof(emp1),1,fp);
                     break;
                  }
           }
       }
         
     printf("updated ");
        fclose(fp);
    }
