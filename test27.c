#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter the number: ");
    scanf("%d",&n);
    for(i=n; i<=n*10; i=i+n)
    {
        printf("%d\n",i);
    }
}