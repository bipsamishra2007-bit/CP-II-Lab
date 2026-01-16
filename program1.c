#include<stdio.h>
int display(int[],int n);
int main()
{
	int b[100],i,n;
	printf("enter the no. of elements:");
	scanf("%d",&n);
	printf("enter the elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	display(b,3);
}
int display(int a[], int n)
{
	int i,s;
	printf(" enter number to add: \n");
	scanf("%d",&s);
	for( i=0;i<n;i++)
	{
		printf("%d\t", s+a[i]);
	}
}
