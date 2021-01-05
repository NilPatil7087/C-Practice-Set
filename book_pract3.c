#include<stdio.h>
#include<conio.h>

void main()
{
    char ch;
    printf("enter the alphabet to check whether is vowel or not :\n ");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is vowel ",ch);
    }
    else{
        printf("%c is not a vowel",ch);
    }
    getch();
    return 0;
}
