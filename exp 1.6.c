//Write a program to replace spaces in a string with hyphens.
#include<stdio.h>
void stringspace(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==32)
		{
			a[i]='-';
		}
	}
}
void main()
{
	char a[]="hello everyone";
	stringspace(a);
	printf("%s",a);
}
