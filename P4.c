#include<stdio.h>

main()
{
    int p,r,y,result;

    printf("enter the principle ,rate and years :");
    scanf("%d%d%d\n",&p,&r,&y);

    result = (p*r*y)/100;

    printf("simple interest is %d",result);

    return 0;
}
