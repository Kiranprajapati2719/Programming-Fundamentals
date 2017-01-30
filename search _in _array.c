/*
Student Name : Kiran Prajapati
Subject : Programming fundamental
Lab Sheet no : 24
Program : WAP to declare array of 10 elements and search an element to print whether it exist or not
Date : 30 Jan 2017
 */

#include<stdio.h>
int main ()
{
	int i,n,num[10];
	
	for(i=0;i<10;i++)
	{
		printf("Enter no. %d: ",i+1);
		scanf("%d",&num[i]);
	} 
	
	printf("\nSearch: ");
	scanf("%d",&n);
	
	
	for(i=0;i<10;i++)
	{
		if(n==num[i])
		{
			printf("\nThe number %d is in the list",n);
			break;
		}
		
		
	}
	
}
