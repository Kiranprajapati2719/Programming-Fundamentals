/*
Student name: Kiran Prajapati
Subject: Programming Fundamentals
Roll no: 
Program: WAP to find  reverse of a given number using function
Lab sheet no: 20
Date: 2017 Jan 22
*/

#include<stdio.h>

int reverse(int a);

int main ()
{
	
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	reverse(num);
	
	return 0;
	
	}

int reverse(int a)
{
	int rev;
	
	while(a>0)
	{
		rev=a%10;
		
		printf("%d",rev);
		
		a=a/10;
		
		}
	
	return rev;
	
	}
