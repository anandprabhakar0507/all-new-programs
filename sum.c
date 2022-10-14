// Write a program to find sum of two numbers.

#include <stdio.h>
int main()
{
	int a, b, s;
	printf("Enter 1st number: ");
	scanf("%d", &a);
	printf("Enter 2nd number: ");
	scanf("%d", &b);
	s = a + b;
	printf("The sum of two numbers are %d: ", s);
	return 0;
}