#include<stdio.h>

float circle_area(float r);

int main()
{
    int radius,area;

    printf("enter the radius of circle \n");
    scanf("%d",&radius);

    area=circle_area(radius);

    printf("the radius of circle is %d",area);

    return 0;
}
float circle_area(float radius)
{
    return (3.14 *radius*radius);
}
