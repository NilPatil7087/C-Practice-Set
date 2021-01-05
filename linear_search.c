#include<stdio.h>

int main()
{
    int arr[10],n,num,found=0,pos=-1;
    int i;
    printf("enter the number of elements in the array:\n");
    scanf("%d",&n);

    printf("ente the elements: ");
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printf("enter the number you wants to search: ");
    scanf("%d",&num);

    for(i=0; i<n; i++)
    {
        if(arr[i]==num)
        {
            found=1;
            pos=i;
            printf("%d is found in the array at position =%d",num,i);
            break;
        }

    }
    if(found==0)
        printf("the number does not exist in the array",num);
    return 0;


}
