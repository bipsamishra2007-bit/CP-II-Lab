//Write a program to define a structure for a student containing fields for name,roll number, and marks. Input and display the details
#include<stdio.h>
typedef struct stud
{
	char name[30];
	int rollno;
	float cgpa;
}student;
main()
{
	student s1= {"bipsa",15,8.65f};
	student s2;
	printf("enter student details:");
	gets(s2.name);
	scanf("%d %f", &s2.rollno,&s2.cgpa);
	printf(" Name: %s\n rollno:%d\n cgpa:%f",s1.name,s1.rollno,s1.cgpa);
	printf("\n Name:%s\n rollno:%d\n cgpa:%f",s2.name,s2.rollno,s2.cgpa);
}
