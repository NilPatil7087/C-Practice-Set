#include<stdio.h>
main()
{
    int pi=3.14,r,result,h;

    printf("enter the radius of circle");
    scanf("%d",&r);

    printf(" enter the radius and height of cylinder");
    scanf("%d%d",&r,&h);

    result=pi*r*r*h;

    result = pi*r*r;

    printf("area of circle is %d",result);
    printf("vloume of cylinder is %d",result);

    return 0;
}
