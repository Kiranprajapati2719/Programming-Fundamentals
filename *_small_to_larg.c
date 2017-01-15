/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to display the following output: 
			
			*
			* * 
			* * *
			
Lab Sheet No : 18
Date : 15 Jan 2017
*/

#include<stdio.h>

int main ()
{
	int i,j,n=0;
	
	printf("Enter: ");
	scanf("%d",&n);
		
	for(i=1;i<=n;i++)
	{
	
		for(j=1;j<=i;j++)
			
			{
				printf("*\t");
		
				}
		
		printf("\n");
		
		}
		
		return(0);
}

