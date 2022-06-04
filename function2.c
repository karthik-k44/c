#include<stdio.h>
#include<stdlib.h>
void sum (int, int);
int main(void)
{
    /*function with arguement and without return value*/ 
 int a,b;
 printf("enter ur numbers");
 scanf("%d%d",&a,&b);
 sum(a,b);
 return 0;
}
void sum( int num1, int num2)
{
    int result ;
    result= num1+num2;
    printf(" rresult = %d",result);
}