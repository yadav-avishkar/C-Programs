#include<stdio.h>
int main()
{
	float a,b,c,ans,num,per;

	printf("marks of Maths:");
	scanf("%f",&a);
    
    printf("marks of CS:");
	scanf("%f",&b);
	
	printf("marks of Elec:");
	scanf("%f",&c);

	ans=a+b+c;

	printf("sum of marks of all sub:%.2f\n",ans);

	per=(ans/300)*100;

	

	printf("per:%.2f\n",per);

	if(per>=70)
	{
		printf("Grade is O");
	}
	else if(per>=60)
	{
		printf("Grade is A");
	}
	else if(per>=50)
	{
		printf("Grade is B");
	}
	else if(per>=40)
	{
		printf("Grade is C");
	}
	else
	{
		printf("Fail");
	}

    return 0;
}