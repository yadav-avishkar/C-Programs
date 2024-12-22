#include<stdio.h>
void main()
{
	int i;
	printf("\nEnter the integer:");
	scanf("%d",&i);

	if(i%2==0)
	{
		printf("\nEntered no is Even");
	}
	else
	{
		printf("\nEntered no is Odd");
	}
}