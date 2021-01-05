#include<stdio.h>

main()
{
    int n;
    printf("enter the terms to print the fibo :");
    scanf("%d",&n);
    int a=0,b=1,c,i;
    for(i=1; i<=n; i++)
    {
        printf("\n %d",a);
        c=a+b;
        a=b;
        b=c;
    }

}
