#include<stdio.h>
typedef struct detailing
{
	char name[10];
	int rollno;
}details;
main()
{
	details d1;
	printf("enter details:");
	scanf("%s\n %d",&d1.name,&d1.rollno);
	printf("%s\n %d",d1.name,d1.rollno);
}
