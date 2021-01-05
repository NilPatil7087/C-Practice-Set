#include<stdio.h>

int main()
{
    char a[100],upper_str[100];
    int i=0,j=0;
    printf("enter the string: ");
    gets(a);

    while(a[i] != '\0')
    {
        if(a[i]>='a' && a[j]<='z')
            upper_str[j] = a[i]-32;
        else
            upper_str[j] = a[i];
        i++; j++;
    }
    upper_str[j] ='\0';
    printf("\n the string converted into upper case is: ");
    puts(upper_str);
    return 0;
}
