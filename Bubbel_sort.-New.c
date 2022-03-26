#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,a[20],temp,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe array elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe sorted array is:\n");
    for(i=0;i<n-1;i++)
    {
        flag=0;/*This will prevent unnecessary comparisons with elements 
        that are already in its correct position after swapping*/
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
