#include<stdio.h>
void main()
{
	int a,t,b,c,d;
	printf("Enter 4 numbers : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	t = a;
	if(t>b)
		t = b;
	if(t>c)
		t = c;
	if(t>d)
		t = d;
	printf("Max value : %d\n",t);
	t = a;
	if(t<b)
		t = b;
	if(t<c)
		t = c;
	if(t<d)
		t = d;
	printf("Min value : %d\n",t);
}
