#include<stdio.h>

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
	
	int *p = &a;
	printf("Cube of array elements is: \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",(*(p+i)) * (*(p+i)) * (*(p+i)));
		
	}
	
	return 0;
}


