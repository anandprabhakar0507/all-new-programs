#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, i, temp;
    int* arr;
    printf("enter limit");
    scanf("%d", &num);
    arr = (int*) calloc(num , sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d",arr + i);
    }

    for(i = 0; i < num/2; i++)
    {
        temp = arr[(num-1)-i];
        arr[(num - 1) - i] = arr[i];
        arr[i]=temp;
    
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
}