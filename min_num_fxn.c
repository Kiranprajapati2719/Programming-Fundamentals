/*
Student name: Kiran Prajapati
Lab sheet no: 19
Program: WAP to print minimum number between two number using function
Date: 2017 Jan 17
*/

#include<stdio.h>

int min();

int main()
{
	int result;
	
	result=min();
	
	printf("Minimum num=%d",result);
	
	return(0);
	
	}
	
int min()
{
	int x,y;
	
	printf("Enter a number: ");
	scanf("%d",&x);
	
	printf("Enter a number: ");
	scanf("%d",&y);
	
	if(x>y)
	return y;
	
	else
	return x;
	

	}
	


	
	
	
