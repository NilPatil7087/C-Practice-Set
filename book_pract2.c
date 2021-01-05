#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i;

    printf("enter the number: ");
    scanf("%d",&num);
    printf("number is even :\n");
    for(i=0; i<=num; i++)
    {
        if(i%2==0)
        {


            printf("%d \n",i);
        }

    }
    getch();
    return 0;
    }

