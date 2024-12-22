#include<stdio.h>
int main()
{
	int num;
	printf("Enter the Number:");
	scanf("%d", &num);
	if(num>0)
	{
       printf("Give Number is Natural Number", num);
	}
	else
	{
		printf("Give Number is  Not Natural Number", num);
	}
	return 0;
}