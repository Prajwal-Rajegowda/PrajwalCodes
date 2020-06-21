#include<stdio.h>
#include<conio.h>
int power(int a,int b)
{
	long int pow;
	if(b == 0)
		return 1;
	if(b > 0)
	{
		pow = a * power(a,b-1);
	}
	return pow;
}
void main()
{
	int power(int,int);
	int x,y;
	long int z;
	printf("Enter the values of x and y \n");
	scanf("%d%d",&x,&y);
	z = power(x,y);
	printf("%d ^ %d = %ld\n",x,y,z);
	getch();
}
