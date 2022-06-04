#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,limit,temp=0,value[100],j;
    printf("enter ur limit");
    scanf("%d",&limit);
    printf("enter ur array");
    for(i=0;i<limit;i++)
    {
        scanf("%d",&value[i]);
    }
  for(i=0;i<limit-1;i++)
  {
    for ( j=i+1; j <limit; j++)
      {
        if(value[i]<value[j]);
        {
            temp=value[i];
            value[i]=value[j];
            value[j]=temp;
        }
      }
  }
  printf("ur values");
  for(i=0;i<limit;i++)
  {
  printf("%d \n",value[i]);
  }
    return 0;
}
