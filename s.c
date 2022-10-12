#include<stdio.h>

void main()
{
    char s[]="\0";
    fgets(s,100,stdin);
    printf(" Name = %s",s);
}