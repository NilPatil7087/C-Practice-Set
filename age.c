#include<stdio.h>

int retirement_age(int age,int year);
int main()
{
    int a,b,result;
    printf("How old are you?");
    scanf("%d",&a);

    result=(a,b);

    printf("%d",result);

    return 0;
}
int retirement_age(int age,int year)
{
    int ret;

    ret=age-year;

    return ret;


}
