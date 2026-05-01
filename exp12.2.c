#include<stdio.h>
int main(int argc, char* argv[])
{
printf("total arguments:%d\n",argc);
printf("arguments passed by user:%d\n", argc-1);
if(argc > 1)
{
printf("\n list of arguments:\n");
int i;
for( i=0; i<argc; i++)
{
printf("argv[%d] = %s\n",i,argv[i]);
}
}
else
{
printf("\n No arguments were passed.\n");
}
return 0;
}
