#include<stdio.h>

void sum(int size)
{
	int a[size];
	int i;
	
	printf("Enter array elements: \n");	
	for(i=0;i<size;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	int sum;
	for(i=0,sum=0;i<size;i++)
	{
		sum = sum + a[i];
	}
	
	printf("Sum of all elements is: %d\n",sum);
}

int main()
{
	int size;
	
	printf("Enter array size: ");
	scanf("%d",&size);
	
	sum(size);
	
	return 0;
}
