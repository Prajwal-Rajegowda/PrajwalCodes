#include<stdio.h>
void swap(int ptr1, int ptr2)
{
    ptr1 = ptr1 + ptr2;
    ptr2 = ptr1 - ptr2;
    ptr1 = ptr1 - ptr2;
    printf("After Swap : %d %d ",ptr1, ptr2);
    return;
}
void main()
{
    int par1,par2;
    printf("Enter the numbers : \n");
    scanf("%d%d",&par1,&par2);
    printf("The Entered values are : %d %d \n",par1,par2);
    swap(par1,par2);
}