//Write a program to input an array of integers and print them using pointers. 
#include<stdio.h>
int main()
{
	int arr[100],n,i;
	int *ptr;
	printf("enter number of elements: ");
	scanf("%d",&n);
	printf("enter %d elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=arr;
	printf("array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	return 0;
}
