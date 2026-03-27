//wap to define a structure for a book//
#include<stdio.h>
struct book
{
	char title[20];
	char author[20];
	float price;
};
int main()
{
	struct book b[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("enter title,author and price: ");
		scanf("%s %s %.2f",b[i].title,b[i].author,&b[i].price);
	}
	printf("\nBook Details: \n");
	for(i=0;i<10;i++)
	{
		printf("%s %s %.2f\n",b[i].title,b[i].author,b[i].price);
	}
	return 0;
}
