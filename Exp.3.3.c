//Write a program to define a structure for a complex number (real and imaginary parts) and write a function to perform addition of two complex numbers.
#include<stdio.h>
typedef struct complexnos
{
	int i,r;
}complex;
main()
{
	complex c1,c2,c3,c4;
	printf("enter a real number:");
	scanf("%d %d",&c1.r,&c1.i);
	printf("enter an imaginary number:");
	scanf("%d %d",&c2.r,&c2.i);
	c3.r= c1.r+ c2.r;
	c3.i= c1.i+ c2.i;
	c4.r= c1.r- c2.r;
	c4.i= c1.i- c2.i;
	printf("%d+ %d",c3.r,c3.i);
	printf("%d- %d",c4.r,c4.i);
}
