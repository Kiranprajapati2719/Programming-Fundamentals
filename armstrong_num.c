/*
Student name: Kiran Prajapati
Subject: Programming Fundamentals
Roll no: 
Program: WAP to check armstrong number
Lab sheet no: 20
Date: 2017 Jan 22
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int arm(int a);

int main() 
{
	
	int a;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	
	if(arm(a)==a)
	{
		
		printf("armstrong");
		
		}
	
	else
	{
		
		printf("Not armstrong");
		
		}
		
	}


int arm(int a)
{
	int cube=0,result=0,rev;
	
	while(a>0)
	{
		rev=a%10;
			
		cube=rev*rev*rev;
		
		result=result+cube;
		
		a=a/10;
	}
	
	return result;

}	
	
	
	
	
