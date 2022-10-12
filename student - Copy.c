#include<stdio.h>
void main() {
    int roll;
    float p , c , m , eng , avg = 0;
    printf("Enter Roll= \n");
    scanf("%d",&roll);
    printf("enter Marks\n");
    scanf("%f%f%f%f",&p,&c,&m,&eng);
    avg = (p+c+m+eng)/4;
    printf("Students average= %f \n",avg);
}