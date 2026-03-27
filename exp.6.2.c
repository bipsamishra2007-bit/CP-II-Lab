//Implement a function to find the largest element in an array using pointers. 
#include<stdio.h>
int main()
{
	int arr[100],n,i;
	int *ptr;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=arr;
	printf("array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	return 0;
}
