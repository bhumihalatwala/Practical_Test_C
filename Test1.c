#include<stdio.h>

int main()
{
	int choice;
	float a,b,result;
	int i;
	
	printf("Choose the operation you want to perform:\n");
	printf("Press 1 for addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for multiplication\n");
	printf("Press 4 for division\n");
	
	printf("Enter value of a:");
	scanf("%f",&a);
	printf("Enter value of b:");
	scanf("%f",&b);
	printf("Enter your choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition of %.1f & %.1f is %.2f\n",a,b,(a+b));
			break;
		case 2:
			printf("Subtraction of %.1f & %.1f is %.2f\n",a,b,(a-b));
			break;
		case 3:
			printf("Multiplication of %.1f & %.1f is %.2f\n",a,b,(a*b));
			break;
		case 4:
			if(b==0)
				printf("Error!Division with 0 is not possibe\n");
			else
				printf("Division of %.1f & %.1f is %.2f\n",a,b,(a/b));
			break;
		default:
			printf("Invalid choice...");
	}
	
	return 0;
}
