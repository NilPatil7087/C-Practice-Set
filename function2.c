#include<stdio.h>

int swap_value(int ,int);
int swap_ref(int *,int *);

int main()
{
    int a=1,b=2,c=3,d=4;

    printf("swap call by value a=%d b=%d\n",a,b);
    swap_value(a,b);
    printf("swap call by value c=%d d=%d\n",c,d);

    swap_ref(&c,&d);
    printf("swap call by ref c=%d,d=%d\n",c,d);
    return 0;

}
int swap_value(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" swap call by value is a=%d,b=%d\n",a,b);
}
int swap_ref(int *c,int *d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;

    printf("swap call by ref is c=%d,d=%d\n",*c,*d);

}
