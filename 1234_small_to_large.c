
/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to display the following output: 
			
			1
			1 2
			1 2 3
			
Lab Sheet No : 17
Date : 15 Jan 2017
*/


#include<stdio.h>

int main ()
{
	int i,j,n;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			{
				printf("%d\t",j);
		
				}
		
		printf("\n");
		}
		

		
	return(0);
}
