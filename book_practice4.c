#include<stdio.h>
#include<conio.h>

void main()
{
    int n1,n2,n3;
    printf("\n enter the number one : ");
    scanf("%d",&n1);
    printf("\n enter the number two : ");
    scanf("%d",&n2);
    printf("\n enter the number three : ");
    scanf("%d",&n3);

    if(n1>n2 && n1>3)
    {
        printf("the largest number is %d",n1);
    }
    if(n2>1 && n2>n3)
    {
        printf("the largest number is %d",n2);
    }
    else{
        printf("the largest number is %d",n3);
    }
    getch();
    return 0;
}
