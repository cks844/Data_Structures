/*SELECTION SORT
In this sorting,a minimal element is found for every sub-arrays 
which is compared with first element in sub-arrays*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,a[20],temp,min;
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
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
                temp=a[i];
                a[i]=a[min];
                a[min]=temp;

        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
