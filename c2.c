#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,k;
    int count=1;
printf("Prime numbers are \n ");

for(k=1; k<=100; k++){

for(i=1;i<=k; i++){

    if(k%i==0){
        count++;
    }
}
if(count==2)
{
printf("%d is prime",k);
}


}
}
