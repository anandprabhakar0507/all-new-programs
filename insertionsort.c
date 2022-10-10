#include<stdio.h>

void main()
{
    int a[10],i=0,j=0,temp=0;
    printf("enter array elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(a[j]<a[j+1])      //descending order for asscending a[j]>a[j+1]
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("In sorted array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}