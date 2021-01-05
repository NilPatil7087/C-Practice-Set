#include<stdio.h>

void swap_call_by_val(int , int);
void swap_call_by_ref(int *,int *);

int main()
{
    int a=1,b=2,c=3,d=4;
    printf("\n In Main(), a=%d,and b = %d",a,b);
    swap_call_by_val(a,b);
    printf("\n in main(),a=%d and b=%d",a,b);
    printf("\n \n in main(),c=%d and d=%d",c,d);
    swap_call_by_ref(&c,&d);
    printf("\n main(),c=%d and d=%d",c,d);

    return 0;
}
void swap_call_by_val(int a , int b)
{

    int temp;
    temp =a;
    a=b;
    b-temp;

    printf("\n in function (call by value method) a=%d and b=%d",a,b);

}
void swap_call_by_ref(int *c,int *d)
{

    int temp;
    temp=*c;
    *c=*d;
    *d=temp;
    printf("in Function call by referance method c=%d and d=%d",*c,*d);

}
