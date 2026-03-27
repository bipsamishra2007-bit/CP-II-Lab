//Implement a function to convert all lowercase characters in a string to uppercase using pointers.
#include<stdio.h>
void toupper(char*str)
{
	while(*str!='\0')
	{
		if(*str>='a' && *str<='z')
		{
			*str=*str-32;
		}
		str++;
	}
}
int main()
{
	char str[100];
	printf("enter a string:");
	gets(str);
	toupper(str);
	printf("uppercase string:%s",str);
	return 0;
}
