#include<stdio.h>

int main() {
    int t;
    float p , r , amt = 0 , i = 0;
    printf("Enter Principal= \n");
    scanf("%f",&p);
    printf("enter Rate\n");
    scanf("%f",&r);
    printf("Enter Time\n");
    scanf("%d",&t);
    i = (p * r * t)/100;
    amt = i + p;
    printf("Simple Interest= %f \n",i);
    printf("Amount= %f\n",amt);
    return 0;
}