//Define a structure Distance to store distance in kilometer, meter & centimeter.Create an array of Distance type to store 5 Distance variables. Find the longest distance using pointers
#include<stdio.h>
struct Distance
{
	int km;
	int m;
	int cm;
};
int toCM(struct Distance d)
{
	return(d.km *100000)+(d.m*100)+d.cm;
}
int main()
{
	struct Distance d[5];
	struct Distance *ptr=d;
	int i,maxIndex=0;
	printf("Enter 5 distances (km m cm):\n");
	for(i=0;i<5;i++)
	{
		scanf("%d %d %d",&(ptr+i)-> km, &(ptr+i)->m, &(ptr+i)->cm);
	}
	for(i=1;i<5;i++)
	{
		if(toCM(*(ptr+i))> toCM(*(ptr+maxIndex)))
		{
			maxIndex=i;
		}
	}
	printf("\n Longest Disatnce: \n");
	printf("%dkm %dm %dcm",(ptr+maxIndex)->km,(ptr+maxIndex)->m,(ptr+maxIndex)->cm);
	return 0;
}
