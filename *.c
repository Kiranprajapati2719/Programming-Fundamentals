/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to display the following output: 
			
			   * * *
			     * *
			       *	
	
Lab Sheet No : 18
Date : 15 Jan 2017
*/

#include<stdio.h>

int main () 
{
	int i,j,n;
	
	printf("Enter: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=n;j++)
		{
			if(j>=i)
			printf("*");
			
			else
			printf(" ");
		}
		
	printf("\n");
	
	}

	return(0);
	
	
	}
