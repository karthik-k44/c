#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int i,j,n;
    printf("enter ur nmber");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf("*");
        }
      printf("\n");  
    }
  return 0;
}