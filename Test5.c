#include<stdio.h>

struct book
{
	char title[100];
	char author[100];
	int price;
};

int main()
{
	int n;
	printf("Enter Number of Books: ");
	scanf("%d",&n);
	
	struct book b[n];
	
	int i;
	printf("Enter book details:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter details of book %d:\n",i+1);
		
		printf("Enter title: ");
        scanf(" %[^\n]s", b[i].title); 

        printf("Enter author name: ");
        scanf(" %[^\n]s", b[i].author);
		
		printf("Enter price: ");
		scanf("%d",&b[i].price);
	
		printf("\n");	
	}
	
	printf("Here's the data of all books: \n");
	for(i=0;i<n;i++)
	{
		printf("Details of book %d:\n",i+1);
		
		printf("Title: %s\n",b[i].title);

		printf("Author: %s\n",b[i].author);
	
		printf("Price: %d\n",b[i].price);
		
		printf("\n");
	}
	printf("\n");
	
	return 0;
}
