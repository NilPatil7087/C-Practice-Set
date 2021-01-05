#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100];
    char str2[100]="Patil";
     printf("enter the string ");
     gets(str1);
    strcat(str1,str2);
    printf("the concatenated string is %s: ",str1);
    return 0;
}
