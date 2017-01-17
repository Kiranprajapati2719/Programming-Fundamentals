/*
Student name: Kiran Prajapati
Lab sheet no: 19
Program: WAP to check a number is even or odd using function
Date: 2017 Jan 17
*/

#include<stdio.h>

int check(int a);

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	check(n);
	
	return(0);

}

int check(int a)
{
	if(a%2==0)
	printf("Even");
	
	else
	printf("Odd");
	
	return(0);
	}
	
	
	
	
