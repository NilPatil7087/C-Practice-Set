#include<stdio.h>

int rect(int,int);

main()
{
    int w,h,area;
    printf("rectangle :");
    scanf("%d%d",&w,&h);
    area =rect(w,h);

    printf("result is %d",area);
    return 0;
}
int rect(int width,int height)
{
    return width*height;
}
