#include<stdio.h>

int main()
{
    char a[1000],lower_str[1000];
    int i=0,j=0;
    printf("enter the string: ");
    gets(a);

    while(a[i] != '\0')
    {
        if(a[i]>='A' && a[j]<='Z')
            lower_str[j] = a[i]+32;
        else
            lower_str[j] = a[i];
        i++; j++;
    }
    lower_str[j] ='\0';
    printf("\n the string converted into lower case is: ");
    puts(lower_str);
    return 0;
}
