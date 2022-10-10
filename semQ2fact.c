#include<stdio.h>
int fact(int n);
void main()
{
    int n;
    printf("enter positive number");
    scanf("%d",&n);
    printf("factorial of a number %d=%d",n,fact(n));
}
int fact(int n)
{
    if(n>=1)
    {
        return n*fact(n-1);
    }
    else
    {
        return 1;
    }
}