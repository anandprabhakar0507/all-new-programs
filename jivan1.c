#include<stdio.h>

void main()
{
	int i,a[5],b[5],c[5],n,m;
	printf("Enter limit:-\n");
	scanf("%d",&m);
	printf("Enter 1st array:-\n");
	for(i=0;i<m;i++)
	{
		printf("ar1[%d]=",i);	
		scanf("%d",&a[i]);
	}
	printf("Enter limit:-\n");
	scanf("%d",&n);
	printf("Enter second array:-\n");	
	for(i=0;i<n;i++)
	{
		printf("ar2[%d]=",i);	
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<m;i++)
	{
		c[i]=a[i]+b[i];
	}
	
	printf("Sum of arrays:-");	
	for(i=0;i<m;i++)
	{
		printf("\n c[%d]=%d",i,c[i]);	
	}
		
}