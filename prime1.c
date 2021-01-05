#include<stdio.h>
#include<conio.h>



void main()
{
    int n,count=0,i;
    int times;
    printf("how many times you want to perform prime number operation ");
    scanf("%d",&times);


    printf("enter the numbers : ");
while(-1){
    scanf("%d",&n);

    for(i=0;i<=5; i++)
    {
        if(n%i==0)
        {

            count++;

        }
    }


if(count==2)
{
        printf("%d is prime number" , n );
    }
    else{
        printf("%d not a prime number ",n  );
        }

getch();

}

}
