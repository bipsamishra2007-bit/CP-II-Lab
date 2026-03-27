//Write a program to calculate the length of a string using pointers.
#include<stdio.h>
int main()
{
	char str[100];
	char *ptr;
	int length=0;
	printf("enter a string:\n");
	gets(str);
	ptr=str;
	while(*ptr !='\0'){
			length++;
		ptr++;
	}
	printf("length:%d",length);
	return 0;
}
