#include <stdio.h>
int main()
{ 
    int a[10],big;
    printf("Enter the elements of array\n");
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    big=a[0];
    for(int i=0;i<10;i++)
    if(big<a[i])
    big=a[i];
    printf("The biggest element in the array is %d\n",big);
    return 0;
}
