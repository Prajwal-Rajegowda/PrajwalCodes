#include<stdio.h>
void main()
{
	char name[20];
	float unit,amt;
	printf("Enter the name of the user \n");
	scanf("%s",name);
	printf("Enter the units consumed \n");
	scanf("%f",&unit);
	if(unit<200)
		amt = 100+(unit * 0.8);
	else if(unit<300)
		amt = 100+(200*0.8)+((unit-200)*0.9);
	else
		amt = 100+(200*0.8)+(100*0.9)+(unit-300);
	if(amt>400)
		amt = amt + (0.15*amt);
	printf("The user name is %s \n",name);
	printf("The units consumed is %.2f \n",unit);
	printf("The total charge is %.2f \n",amt);
}
