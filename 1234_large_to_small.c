/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to display the following output: 
			
			1 2 3 4
			1 2 3
			1 2 
			1
			
Lab Sheet No : 17
Date : 15 Jan 2017
*/

#include<stdio.h>

int main ()
{
	int i,j,n;
	
	printf("Enter:");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		
		
		}
	printf("\n");
	

	}
	
	return(0);
}
