#include<stdio.h>
void main()
{
	int a[4],t,i,j;
	printf("Enter 4 numbers : ");
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	for(i=0;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			if(a[j]>a[j-1])
			{
				t = a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
	printf("Max value : %d\n",a[0]);
	printf("Min value : %d\n",a[3]);
}
