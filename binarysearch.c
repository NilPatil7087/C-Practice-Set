#include<stdio.h>

int main()
{
    int arr[10],i,n,num,mid,end,beg,pos=-1,found=0;

    printf("enter the number of elements in the array: \n");
    scanf("%d",&n);

    printf("enter the elements in array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you wants to be searched in the array: ");
    scanf("%d",&num);

    beg=0; end=n-1;

    while(beg <= end)
    {
        mid=(beg+end)/2;
        if(arr[mid]==num)
        {
            printf("\n %d is present in the array at position =%d",num,mid);
            found=1;
            break;
        }
        else if(arr[mid]>num)
            end =mid-1;
        else
            beg=mid+1;

    }
    if(beg >end && found ==0)
        printf("the number does not exist : ");
    return 0;
}
