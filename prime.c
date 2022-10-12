#include<stdio.h>
void main()
{
    int a,b,c=0,i,j;
    printf("enter range");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c=c+1;
            }
        }
        if(c==2)
        {
        printf("Prime no = %d\n",i);
        }
    }
}