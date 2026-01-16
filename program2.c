#include<stdio.h>
char vowels(char a[], int size);
void main()
{
	char a[100];
	int size,i;
	printf("enter the no. of elements:");
	scanf("%d",&size);
	printf("enter elements");
	for(i=0;i<size;i++)
	{
		scanf("%s",a);
	}
	vowels(a,size);
}
char vowels(char b[], int size)
{
	int j;
	for(j=0;j<size;j++)
	{
		if(b[j]=="a" || b[j]== "A")
			printf("%c",b
