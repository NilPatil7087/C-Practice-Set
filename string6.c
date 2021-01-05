#include<stdio.h>

int main()
{
    char a[100],reverse[100],temp;
    int i=0,j=0;
    printf("\n enter the string: ");
    gets(a);

    j=strlen(a)-1;

    while(i<j)
    {
        temp=a[j];
        a[j]=a[i];
        a[i] = temp;
        i++;
        j--;
    }
    printf("\n the reversed string is: ");
    puts(a);
    return 0;
}
