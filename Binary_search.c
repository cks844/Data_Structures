#include<stdio.h>
int main()
{
	int i,n,x,arr[30],mid;
	char opt;
	printf("\nEnter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the array elements : ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("\nThe array elements are : ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);

	do
	{
		int first=0,last=n-1;
		mid=(first+last)/2;
		printf("\nEnter the element to search : ");
			scanf("%d",&x);
		while(first<=last)
		{

			if(arr[mid]==x)
			{
				printf("\nThe element %d is at the location %d\n",x,(mid+1));
				break;
			}
			else if(arr[mid]>x)
				last=mid-1;
			else
				first=mid+1;
			mid=(first+last)/2;
		}

		if(first>last)
			printf("\nThe element %d not found\n",x);
		printf("Do yo want to continue(Y/N) : ");
		scanf(" %c",&opt);
	}while(opt=='y' || opt=='Y');
}
