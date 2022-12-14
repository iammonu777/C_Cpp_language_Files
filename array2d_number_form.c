#include<stdio.h>
void main()
{
	int s,a;
	
	printf("enter a first array: ");
	scanf("%d",&s);
	printf("enter a second array: ");
	scanf("%d",&a);
	
	int numbers[s][a];
	
	for(int i=0; i<s; i++)
	{
	 for(int j=0; j<a; j++)
	{
		printf("enter value of numbers[%d][%d]:", i,j);
		scanf("%d", &numbers[i][j]);	
	}
	
	}
	
	printf("two array elements:\n");
	for(int i=0; i<s; i++)
	{
	 for(int j=0; j<a; j++)	
	{
		printf("%d", numbers[i][j]);
	}
	 printf("\n");
	}
	
	
}

