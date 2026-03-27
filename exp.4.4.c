//write a program to define a structure for employee//
#include<stdio.h>
struct depart
{
	char dept_name[20];
};
struct emp
{
	char name[20];
	int id;
	float salary;
	char dept[20];
};
int main()
{
	struct emp e[10],temp;
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("enter name,id,salary,department: ");
		scanf("%s %d %f %s",e[i].name,&e[i].id,&e[i].salary,e[i].dept);
	}
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(e[i].salary>e[j].salary)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	printf("\n Sorted employee details: \n");
	for(i=0;i<10;i++)
	{
		printf("%s %d %.2f %s \n",e[i].name,e[i].id,e[i].salary,e[i].dept);
	}
	return 0;
}
