// Write a program to reverse the elements of an array in-place using pointers. 
#include<stdio.h>
int main()
{
	int arr[10],n,i;
	int *start,*end,temp;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	start=arr;
	end =arr+n-1;
	while(start<end)
	{
		temp= *start;
		*start= *end;
		*end= temp;
		start++;
		end--;
	}
	printf("reversed array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
