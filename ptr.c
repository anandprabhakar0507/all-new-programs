#include<stdio.h>

void main() 
{
int age = 22;
int *ptr = &age;
int **pptr = &ptr;
printf("%d\n",age);
//address
printf("%p\n",&age);
printf("%p\n",ptr);
printf("%p\n",&ptr);
//data
printf("%p\n",pptr);
printf("%p\n",&pptr);
printf("%d\n",*ptr);
printf("%d\n",*pptr);
printf("%d\n",**pptr);
}