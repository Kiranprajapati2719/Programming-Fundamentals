/*
Student name: Kiran Prajapati
Subject: Programming Fundamentals
Roll no: 
Program: WAP to print the following  Fibonacci series using recursion function 
					
		0 1 1 2 3 5 8 ....... upto 10th term
		
Lab sheet no: 22
Date: 2017 Jan 24
*/

#include<stdio.h>

int fib(int i);

int main()
{
	int i;
	
	for(i=0;i<10;i++)
	
	{
		printf("%d ",fib(i));
		
		}
		
	return 0;
	
}

int fib(int i)
{
	
	if(i==0) return 0;
	
	if(i==1) return 1;

	return fib(i-1)+fib(i-2);
	
	}
	
	
	
	
	
	
	
	
