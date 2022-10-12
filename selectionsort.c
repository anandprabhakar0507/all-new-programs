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
        for(j=i+1;j<10;j++)
        {
            if(a[i]<a[j])      //descending order for asscending a[i]>a[j]
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("In sorted array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}