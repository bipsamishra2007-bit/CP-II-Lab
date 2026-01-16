#include<stdio.h>
void display(int[],int);
void main()
{
	int b[]= {2,9,4,5,6};
	display(b,5);
}
void display(int a[],int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%p ",(a+i));
        }
}
