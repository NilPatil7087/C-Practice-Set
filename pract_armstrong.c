#include<stdio.h>

main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);

    int sum =0,temp;
    int r,c;
    temp =n;
    while(n>0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    n = temp;
    if(n==sum)
    {
        printf("the number is armstorng");
    }
    else{
        printf("the number is not armstrong");
    }
}
