#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, n, max,rev, min,  arr[10];
	printf("Enter Array:");
	scanf("%d", &n);
	printf("Enter Array:\n");
	for(i=0; i<n; i++)
		{
		scanf("%d", &arr[i]);
		}
		max=arr[0];
		for(i=0;i<n;i++)
		{
			if(max<arr[i])
			{
				max=arr[i];
            }
		}

            printf("Maximum Array is %d\n", max);
            min=arr[0];
            for(i=0; i<n; i++)
            {
            	if(min>arr[i])
            	{
            		min=arr[i];
            	}
            }
            printf("Minimum Array is %d\n", min);
            for(i=n; i>0; i--);
            	{
            		printf("Reverse Array is: %d\n",arr[i]);

            	}
}