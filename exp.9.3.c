//Create a program to convert all characters of a string to uppercase using call by reference.
#include<stdio.h>
void touppercase(char *str)
{
	int i=0;
	while(*(str+i)!='\0')
	{
		*(str+i)=toupper(*(str+i));
		i++;
	}
} 
int main()
{
	char str[100];
	printf("Enter a string: ");
	gets(str);
	touppercase(str);
	printf("After conversion: %s\n",str);
	return 0;
}
