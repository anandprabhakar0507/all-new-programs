#include<stdio.h>

void main()
{
    int i,j,a[5],n,k;
    printf("Enter Limit for array\n");
    scanf("%d",&n);
    printf("Enter Array Elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            for(k=j;k<n-1;k++)
            {
                a[k]==a[k+1];
            }
            j--;
            n--;
            }
        }
    }
printf("elements are removing duplicate elements");
for(i=0;i<;i++)
{
printf("%d",a[i]);
}
}