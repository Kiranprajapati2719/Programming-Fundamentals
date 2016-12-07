/*
Student Name : Kiran Prajapati 				
Roll no : 15
Lab no : 11
Program:   
Date: 2016 Dec 7th
Subject: Programming Fundamentals
*/

#include<stdio.h>

int main() {
	int a,b,c;
	
	printf("Enter first numbers >> ");
	scanf("%d",&a);
	
	printf("Enter second numbers >> ");
	scanf("%d",&b);
	
	printf("Enter third numbers >> ");
	scanf("%d",&c);
	
	if(a>=b&&a>=c)
	{
		printf("%d is the largest number",a);
		
		}
	
	if(b>=a&&b>=c)
	{
		printf("%d is the largest number",b);
		}
	
	else
	{
		printf("%d is the largest number",c);
		}
		
    return(0);
    
	}
