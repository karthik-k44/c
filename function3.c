#include<stdio.h>
#include<stdlib.h>
int sum(int, int);
int main (void)
{
    /*function with raguement and without return value*/
    int a,b,c;
    printf("enter ur nmber");
    scanf("%d%d",&a,&b);
    c = sum(a,b);
    printf("%d",c);
    return 0;
}
int  sum( int n1, int n2 )
{
    int result;
    result =n1+n2;
    return result;

}