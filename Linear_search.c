#include <stdio.h>
#include<stdlib.h>
void linear_search(int arr[],int s);
int main(void)
{
	int a[20],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("\n Enter the array elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\n The array elements are:");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	linear_search(a,n);
	return EXIT_SUCCESS;
}

void linear_search(int arr[],int s)
{
	int search_element,i,flag=0,location;
	char c;
	do
	{
    printf("\n Enter the element to be searched:");
    scanf("%d",&search_element);
    for(i=0;i<s;i++)
    { if(arr[i]==search_element)
    	{
    	flag=1;
    	location=i+1;
        break;
    	}
    }
    if(flag==1)
    	printf("Element %d found at location %d",search_element,location);
    else
    	printf("Element not found in the array");
    printf("\n Do you want continue searching:");
    printf("\n If YES,please type 'Y' or 'y' to continue:");
    scanf(" %c",&c);
	}
    while(c=='Y' || c=='y');
}
