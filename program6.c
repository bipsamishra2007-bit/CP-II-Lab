#include<stdio.h>
main()
{
	int a;
	int b[]= {2,4,7,8};
	printf(" smallest element is: %d", minarray(b,4));
}
int minarray(int a[10],int size)
{
	int min,i;
	min= a[0];
	for(i=1;i<size;i++)
	{
		if(min>a[i])
		{
			min= a[i];
		}
	}
	return min;
}
