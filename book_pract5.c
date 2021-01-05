#include<stdio.h>
#include<conio.h>

void main()
{
    int math,science,physics,biology;
    int total=0;
    float avg;

    printf("\n math :");
    scanf("%d",&math);
    printf("\n science :");
    scanf("%d",&science);
    printf("\n physics :");
    scanf("%d",&physics);
    printf("\n biology :");
    scanf("%d",&biology);
    printf("*************************************************\n");
    total = math+science+physics+biology;
    avg = total/4;
    printf("****************************************************\n");
    printf("the total marks of student is :%d \n",total);
    printf("the aggregate of student is %f",avg);

}
