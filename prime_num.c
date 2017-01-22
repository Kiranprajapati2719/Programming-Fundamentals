/*
Student name: Kiran Prajapati
Subject: Programming Fundamentals
Roll no: 
Program: WAP to check entered number is prime or not 
Lab sheet no: 20
Date: 2017 Jan 22
*/

#include<stdio.h>

int prime(int a);

int main ()
{

	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(prime(num)==2)
	{
		printf("The number %d is a prime number",num);
	
		}
	
	else
	{
		printf("The number is not a prime number");
		
		}
	
	return 0;
	
	}
	
int prime(int a)
{
	int count=0,i;
	
	for(i=1;i<=a;i++)
	
	{
		if(a%i==0)
		{
			count=count+1;
		
		}
		
	}
		
		return count;

	}
