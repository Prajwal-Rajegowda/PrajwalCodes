#include<stdio.h>
void main()
{
    int a[10][10],row,column;
    printf("Enter the Array elements in Row Major Order \n");
    for(row=0; row<3; row++)
    {
        for(column=0; column<4; column++)
        {
            printf("Enter the element in %d,%d \n",row,column);
            scanf("%d",&a[row][column]);
        }
        printf("\n");
    }
    printf("Output : \n");
    for(row=0; row<3; row++)
    {
        for(column=0; column<4; column++)
        {
            printf("%d \t",a[row][column]);
        }
        printf("\n");
    }
}