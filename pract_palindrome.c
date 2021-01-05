#include<stdio.h>

main()
{
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0,temp,r,c;
    temp =n;
    while(n>0)
    {
        r=n%10;
        sum = sum*10+r;
        n=n/10;
    }
    n=temp;
    if(n==sum)
    {
        printf("the number is palindrome");
    }
    else{
        printf("number is not a palindrome");
    }
}
