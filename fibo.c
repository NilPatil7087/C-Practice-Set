#include<stdio.h>
main(){
    int i,n,a,b,c;
    a=0;
    b=1;
    c=0;
    printf("enter the terms of fibonacci series : ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("%d\n",a);
        c =a+b;
        a=b;
        b=c;
    }

    return 0;

}
