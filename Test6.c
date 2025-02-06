#include<stdio.h>
#include<stdlib.h>

struct employees
{
	char name[100];
	char role[100];
};

int main()
{
	struct employees emp[3];
	
	FILE *fp = fopen("data.txt","w");
	int i;
	
	if(fp == NULL)
	{
		printf("File cannot be opened...");
	}
	else
	{
		for(i=0;i<3;i++)
		{
			printf("Employee %d:\n",i+1);
			
			printf("Name: ");
	        scanf(" %[^\n]s", emp[i].name); 
	
	        printf("Role: ");
	        scanf(" %[^\n]s", emp[i].role);
		
			printf("\n");	
		}
		
		for(i=0;i<3;i++)
		{
			fprintf(fp, "Employee %d: \nName: %s\nRole: %s\n",(i+1),emp[i].name,emp[i].role);
		}
		
		fclose(fp);
		
		printf("Data has been written successfully\n");
		
		FILE *fp= fopen("data.txt","r");
		if(fp!=NULL)
		{
			printf("Following is the data:\n");
			
			char copy[100];
			while((fgets(copy,5,fp)!=NULL))
			{
				printf("%s",copy);
			}
			
			fclose(fp);	
		}
	
	}
	
	
	return 0;
}
