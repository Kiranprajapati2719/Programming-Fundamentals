/*
Student name: Kiran Prajapati
Lab sheet no: 17
Program: WAP to print all even no from 1 to 100 using do while loop
Date: 2017 Jan 12
*/

#include<stdio.h>

int main ()
{
	int i=2;
	
	do
	{
		if(i%2==0)
		{
		printf("%d ",i);
	}
	
	i++;
	}	
	
	while(i<=100);
		
	return(0);	
	
	}
