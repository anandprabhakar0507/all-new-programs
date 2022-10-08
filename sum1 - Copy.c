#include<stdio.h>
int sum(int n)
{
    int d,s=0,no=0;
    no=n;
    while(no>0)
    {
        d=no%10;
        s=s+d;
        no=no/10;
    }
return s;
}
void main()
{
    int a,S=0;
    printf("enter number");
    scanf("%d",&a);
    S=sum(a);
    printf("sum of digits of number %d = %d",a,S);
}
