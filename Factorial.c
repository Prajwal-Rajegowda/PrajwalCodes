#include<stdio.h>
int fact(int x)
{
	long int fac=1;
	int i=1;
	while(i<=x)
	{
		fac = fac*i;
		i++;
	}
	return fac;
}
void main()
{
		int fact(int);
		int a,b;
		printf("Enter the number whose factorial is to be found \n");
		scanf("%d",&a);
		b = fact(a);
		printf("The Factorial of %d is %d \n",a,b);
}
