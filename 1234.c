/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to display the following output: 
			
			       1
				 1 2
			   1 2 3	
	
Lab Sheet No : 18
Date : 15 Jan 2017
*/

#include<stdio.h>

int main ()
{
	int i,j,n;
	
	for(i=1;i<=5;i++)
	{
		for(n=5;n>i;n--)
			
			{
				printf(" ");
		
			}
			
			for(j=1;j<=i;j++)
			
			{
				printf("%d",j);
				
			}
			
		printf("\n");
			
		}
	
		return(0);
	
	}
