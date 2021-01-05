#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,a[20],small,pos;

    printf("enter the number: \n");
    scanf("%d",&n);

    printf("\n enter the elements :");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    small=a[0]; pos=0;
        for(i=1; i<n; i++)
        {
            if(a[i]<small)
            {
                small=a[i];
                pos=i;
            }
        }
        printf("\n the smallest element is %d",small);
        printf("\n the position of the smallest elemnt in the array is %d",pos);
        return 0;


}
