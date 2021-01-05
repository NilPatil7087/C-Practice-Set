#include<stdio.h>

int main()
{
    int distance;
    float meter;
    float feet;
    float inches;
    float centimeter;

    printf("enter the distance between two distance : ");
    scanf("%d",&distance);

    meter = distance*1000;
    feet = distance*3280.84;
    inches = distance*39370.1;
    centimeter = distance*100000;

    printf("meter %f \n",meter);
    printf("feet %f\n",feet);
    printf("inches %f \n",inches);
    printf("centimeter %f \n",centimeter);

    return 0;
}
