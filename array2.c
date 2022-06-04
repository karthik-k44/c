#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,limit,sum=0,value[100];
    printf("enter ur limit ");
    scanf("%d",&limit);
    printf("enter ur array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&value[i]);
    }
    for(i=0;i<limit;i++)
    {
        sum=sum+value[i];
    }
    printf("%d",sum);
    return 0;
}