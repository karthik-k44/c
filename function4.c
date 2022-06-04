#include<stdio.h>
#include<stdlib.h>
int sum();
int main(void)
{
    /*function without arguement with rturn value*/ 
    int a;
    a=sum();
    printf("%d",a);
    return 0;
}
int sum()
{  
    int a, b,c;
    printf("enter ur values");
    scanf("%d%d",&a,&b);
    c= a+b;
    return c;
} 