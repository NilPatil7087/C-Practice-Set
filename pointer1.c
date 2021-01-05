#include<stdio.h>

int main()
{
    int m,n;
    int *pm=&m,*pn=&n;

    printf("enter the numbers: ");
    scanf("%d %d",pm,pn);

    while(*pm<= *pn)
    {
        if(*pm%2==0)

            printf(" %d is even\n",*pm);
            (*pm)++;

    }
    return 0;
}
