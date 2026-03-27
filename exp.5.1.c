//write a program to create a pointer to an integer variable and demonstrate how the pointer can modify the value of the variable//
#include<stdio.h>
int main()
{
  int number= 10;
  printf("original value of number:%d\n",number);
  int *ptr;
  ptr= &number;
  *ptr= 25;
  printf("new value: %d\n",number);
  printf("value: %d\n", *ptr);
  return 0;
}
