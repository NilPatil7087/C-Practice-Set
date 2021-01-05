#include<stdio.h>

int main()
{
    int M,E,MA,S,H;
    float Max,total,aggregate;

    printf("MATH : ");
    scanf("%d",&M);
    printf("MARATHI : ");
    scanf("%d",&MA);
    printf("SCIENCE : ");
    scanf("%d",&S);
    printf("ENGLISH : ");
    scanf("%d",&E);
    printf("HINDI : ");
    scanf("%d",&H);

    total = M+MA+E+S+H;
    printf("total marks %f\n",total);

    aggregate = total/5.0;
    printf("aggregate %f\n",aggregate);

    Max = (total/500)*100;
    printf("percentage %f \n",Max);

    return 0;
}
