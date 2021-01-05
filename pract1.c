#include<stdio.h.>

main()
{


    int a,b,sum;
    printf("enter the number : ");
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("sum is :%d\n",sum);

    if(sum%2==0)
    {
        printf("%d is even",sum);
    }
    else{
        printf("%d is odd",sum);
    }
}

