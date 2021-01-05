#include<stdio.h>

int palindrome(int num);

int main()
{
    int a,Target;

    printf("enter the number :\n");
    scanf("%d",&a);

    Target=palindrome(a);

}
int palindrome(int num)
{
    int i,r,sum=0,temp;
    temp=num;
    while(num >0)
    {
        r=num%10;
        sum=sum*10+r;
        num=num/10;
    }
    if(temp==sum)
        printf("no is palindrome\n");
    else
        printf("no is not a palindrome");
}
