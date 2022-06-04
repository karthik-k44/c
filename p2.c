#include<stdio.h>
#include<stdlib.h>
int main()
{
    float mark;
 
    printf("enter your mark");
    scanf("%f",&mark);
    if (mark<=50)
    {
        printf("failed");
    }
    else  
    {
        printf("passed");
    }
   
return 0;
}