#include<stdio.h>

main()
{
    int n;
    printf("enter the year :");
    scanf("%d",&n);

    if(n%400==0) || (n%4==0 && n!=100)
    {
        printf("the year is leap year");
    }
    else
    {
        printf("the year is not a leap year");
    }
}
