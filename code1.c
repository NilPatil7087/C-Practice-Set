#include<stdio.h>

main()
{
    int n,count=1,i;
    printf("enter the value : ");
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf(" is a prime number");

    }
    else
    {
        printf(" is not a prime number ");
    }
}
