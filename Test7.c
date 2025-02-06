#include<stdio.h>

int main()
{
	int i,j;
	int num = 11;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",num);
			num++;	
		}	
		printf("\n");
	}
	return 0;	
}
