//Implement a function to compare two strings using pointers.
#include<stdio.h>
int cmpstring(char *str1, char *str2)
{
	while(*str1==*str2)
	{
		if(*str1== '\0' && *str2== '\0')
		{
			return 0;
		}
		str1++;
		str2++;
	}
	return *str1-*str2;
}
int main()
{
	char str1[100],str2[100];
	int result;
	printf("enter first string:");
	scanf("%s",str1);
	printf("enter second string:");
	scanf("%s",str2);
	result=cmpstring(str1,str2);
	if(result==0)
		printf("strings are equal to each other");
	else
		printf("strings are not equal to each other");
	return 0;
}
