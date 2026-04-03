//Create a program to remove all spaces from a string using call by reference
#include<stdio.h>
void removespaces(char *str)
{
	int i=0,j=0;
	while(*(str+i) != '\0')
	{
		if(*(str+i)!=' ')
		{
			*(str+j)= *(str+i);
			j++;
		}
		i++;
	}
	*(str+j)='\0';
}
int main()
{
	char str[100];
	printf("Enter a string: ");
	gets(str);
	removespaces(str);
	printf("After removing spaces: %s\n",str);
	return 0;
}
