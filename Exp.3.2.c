//How can you define a structure to store a date (day, month, year) and display itin the format DD/MM/YYYY?
#include<stdio.h>
typedef struct datee
{
	int dd,mm,yy;
} date;
main()
{
	date d1={12,07,2007};
	date d2;
	printf(" enter the date:");
	scanf("%d %d %d",&d2.dd,&d2.mm,&d2.yy);
	printf("\n%d/%d/%d",d1.dd,d1.mm,d1.yy);
	printf("\n%d/%d/%d",d2.dd,d2.mm,d2.yy);
	
}
