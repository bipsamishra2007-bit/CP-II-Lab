//Write a program to create a structure named Complex and define a function incrComplex() to increment the value of both real and imaginary members by 1
#include<stdio.h>
struct complex {
	int real;
	int imag;
};
void incrComplex (struct complex *c)
{
	c-> real= c->real+1;
	c-> imag= c-> imag+1;
}
int main()
{
	struct complex c;
	printf("Enter real and imaginary parts: ");
	scanf("%d %d", &c.real, &c.imag);
	incrComplex(&c);
	printf("After increment: \n");
	printf("Real= %d\n Imaginary=%d",c.real,c.imag);
	return 0;
}
