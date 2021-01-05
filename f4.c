#include<stdio.h>

int smaller (int a,int b,int c);

int main()
{
    int num1,num2,num3,small;

    printf("enter the numbers :");
    scanf("%d",&num1);

     printf("enter the numbers :");
    scanf("%d",&num2);

     printf("enter the numbers :");
    scanf("%d",&num3);

    small = smaller(num1,num2,num3);
    printf("smaller number is %d",small);

    return 0;
}
int smaller(int a,int b,int c)
{
    if(a<b && a<c)
        return a;
    if(b<a && b<c)
        return b;
    else
        return c;
}
