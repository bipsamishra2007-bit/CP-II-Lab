//Write a program to swap two numbers using call by reference.
#include<stdio.h>
void swapNumbers(int *a, int *b)
{
	int temp;
	temp= *a;
	*a= *b;
	*b= temp;
}
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	printf("Before swapping: x=%d,y=%d\n",x,y);
	swapNumbers(&x,&y);
	printf("After swapping: x=%d,y=%d",x,y);
	return 0;
}
