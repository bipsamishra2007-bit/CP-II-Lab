// How can you initialize an array of structures? Show an example.
#include<stdio.h>
struct student
{
	int roll;
	char name[20];
};
int main()
{
	struct student s[2]={{1,"soni"},{2,"moni"}};
	printf("rollno:%d Name:%s",s[0].roll,s[0].name);
	printf("rollno:%d Name:%s",s[1].roll,s[1].name);
  return 0;
}
