#include<stdio.h>
#include<stdlib.h>
void sum();
int main(void) 
{
    /*function without arguement and without return value */
    sum();
    return 0;
}
void sum()
{
    int n1, n2,sum;
    printf("enter ur nmbers");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    printf("result is : %d",sum);
}