#include<stdio.h>
#include<ctype.h>
#include<conio.h>

void main()
{
    char ch;
    printf("\n enter any key: ");
    scanf("%c",&ch);

    if(isalpha(ch)>0)

        printf("\n user has entered a alpha :");

    if(isdigit(ch)>0)

        printf("\n 0user has entered a digit : ");

    if(isprint(ch)>0)

        printf("\n user has entered printable character: ");

    if(ispunct(ch)>0)

        printf("\n user has entered a punctuation mark: ");

    if(isspace(ch)>0)

        printf("\n the user has given a space: ");

    getch();
    return 0;
}
