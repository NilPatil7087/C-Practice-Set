#include<stdio.h>

int armstrong(int num);//function declaration

int main()
{
    int a,Target; //declare the variables

    printf("enter the number :\n");//print the message on console
    scanf("%d",&a); //get the no from user

    Target=armstrong(a);//function call

    return 0;
}
int armstrong(int num)//function header
//function defination
{
    int i,sum=0,r,temp,c;
    temp=num;
    while(num>0)
    {
        r=num%10;
        c=r*r*r;
        sum=sum+c;
        num=num/10;
    }
    if(temp==sum)
    {
        printf("no is armstrong");
    }
    else{
        printf("no is not a armstrong");
    }
}
