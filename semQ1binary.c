#include<stdio.h>

void main()
{
    int i,j,a[5],temp,ub=4,lb=0,s,mid=0,f=0,p=0;
    printf("Enter Array Elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("enter number to be searched\n");
    scanf("%d",&s);
    mid=(lb+ub)/2;
    while(lb<=ub)
    {
        if(a[mid]==s)
        {
            f=1;
            p=mid;
            break;
        }
        else if(a[mid]<s)
        {
            lb=mid+1;
        }
        else if(a[mid]>s)
        {
            ub=ub-1;
        }
        mid=(ub+lb)/2;
    }
    if(f==0)
    {
        printf("Element %d is not present\n");
    }
    else
    {
        printf("Element %d is found in the array at position %d",s,p+1);
    }
}