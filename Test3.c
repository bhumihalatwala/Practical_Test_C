#include<stdio.h>

void reverse(int size,int a[])
{
	int i;
	printf("Reversed array: \n");
	for(i=size-1;i>=0;i--)
	{
		printf("a[%d] = %d\n",i,a[i]);
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
	
	int a[size];
	int i;
	
	printf("Enter array elements: \n");	
	for(i=0;i<size;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	reverse(size,a);
	
	return 0;
}


