#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, limit,value[100],searchkey;
    printf("enter ur limit");
    scanf("%d",&limit);
    printf("enter ur array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&value[i]);
    }
    printf("enter ur search key");
    scanf("%d",&searchkey);
    for(i=0;i<limit;i++)
    {
        if(searchkey==value[i])
        {
        printf("%d",i+1);
        break;
    }
    }
    return 0;
}