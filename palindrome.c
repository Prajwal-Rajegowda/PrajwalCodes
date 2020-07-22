#include<stdio.h>
void main()
{
	int rev,num,temp,rem;
	printf("Enter a Positive integer \n");
	scanf("%d",&num);
	rev = 0;
	temp = num;
	while(num!=0)
	{
		rem = num % 10;
		num = num / 10;
		rev = (rev * 10)+rem;
	}
	printf("The reverse of the number  %d is %d \n",temp,rev);
	if(temp == rev)
	printf("The entered number is a palindrome \n");
	else
	printf("The entered number is not a palindrome \n");
}
