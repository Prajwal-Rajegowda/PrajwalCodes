#include<stdio.h>
void main()
{
    int val = 10,*ptr;
    ptr = &val;
    printf("Value of val = %d \n",val);
    printf("Value of *ptr = %d \n",*ptr);
    printf("Address of val = %d \n",&val);
    printf("Value of ptr = %d \n",ptr);
    printf("Address of ptr = %d \n",&ptr);
}