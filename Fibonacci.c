/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to print Fibonacci series upto n numbers (arg,return) 			     	
Lab Sheet No : 20
Date : 19 Jan 2017
*/

#include<stdio.h>

void fibonacci(int n);

int main ()
{
	int n;
	
	printf("Enter the number of terms to display in series: ");
	scanf("%d",&n);
	
	fibonacci(n);
	
	return 0;
	
	}

void fibonacci (int n)
{
	
	int i,a=1,b=1,c;
	
	printf("%d %d ",a,b);
	
	
	for(i=1;i<=n;i++)    
	{
		
		c=a+b;
		printf("%d ",c);
		
		
		a=b;
		
		b=c;
		
		}
	
	
	
	}

