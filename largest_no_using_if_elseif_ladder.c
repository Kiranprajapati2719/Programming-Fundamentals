/*
Student Name: Kiran Prajapati
Subject:Programming Fundamental
Program: WAP to find the largest number using if elseif ladder
Roll No.: 15
Lab sheet No.: 12
Date:2016 Dec 09
*/

#include<stdio.h>

int main () {
	int a,b,c;
	printf("Enter the first number >> ");
	scanf("%d",&a);
	printf("Enter the second number >> ");
	scanf("%d",&b);
	printf("Enter the third number >> ");
	scanf("%d",&c);
	
	if(a>=b&&a>=c)
		{
			printf("The number %d is the largest",a);
		}
	else if(b>=a&&b>=c)
		{
			printf("The number %d is the largest",b);
		}
	else(c>=b&&c>=a)
		{
			printf("The number %d is the largest",c);
		}	

	return 0;
	}







