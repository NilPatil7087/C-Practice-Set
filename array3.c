#include<stdio.h>
#include<conio.h>

int main()
{
    int a[10],b[20],c[30];
    int i,m,index=0;
    int n1,n2;

    printf("enter the number of elements : ");
    scanf("%d",&n1);
    printf("\n enter the list element of first array: ");
    for(i=0; i<=n1; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n enter the number of elements :");
    scanf("%d",&n2);
    printf("\n enter the list of element of first array : ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&b[i]);
    }
    m=n1+n2;
    for(i=0; i<n1; i++)
    {
        c[index] = a[i];
        index++;
    }
    for(i=0; i<n2; i++)
    {
        c[index]=b[i];
        index++;
    }
    printf("\n\n the merged array is ");
    for(i=0; i<m; i++)
        printf("\t a[%d] = %d",i,c[i]);
    return 0;
}
