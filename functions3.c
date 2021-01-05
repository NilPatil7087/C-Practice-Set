#include<stdio.h>

int biggest(int a,int b,int c);

int main()
{
    int n1,n2,n3,large;

    printf("enter the number\n");
    scanf("%d",&n1);

     printf("enter the number\n");
    scanf("%d",&n2);

     printf("enter the number\n");
    scanf("%d",&n3);

    large=biggest(n1,n2,n3);
    printf("the largest number is %d\n",large);
}
int biggest(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    if(b>a && b>c)
        return b;
    else
        return c;
}
