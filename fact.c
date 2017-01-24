
/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to display factorial using recursion fuction	     	
Lab Sheet No : 22
Date : 24 Jan 2017
*/

#include<stdio.h>

int fact(int a);

int main() 
{
	int a;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	printf("The factorial of the given number is %d",fact(a));
	
	return 0;
	}

int fact(int a)
{
	
	if(a==1)
	{
		return 1;
		
		}
	
	else
	{
		return a*fact(a-1);
		
		}
	
}
