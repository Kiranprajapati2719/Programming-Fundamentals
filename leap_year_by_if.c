/*
Student name: Kiran Prajapati
Program: WAP to check if a year entered is leap year or not by i
Lab sheet no: 16
Date: 8th Jan 2017
*/

#include<stdio.h>

int main ()
{
	int a;
	printf("Enter a year: ");
	scanf("%d",&a);
	
	if(a%4==0&&a%100!=0)
		printf("It is a leap year");
		
	else if(a%400==0)
		printf("It is a leap year");
		
	else
		printf("Its not a leap year");
		
	return(0);
	
	}
