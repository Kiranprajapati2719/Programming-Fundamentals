/*
Student Name : Kiran Prajapati 				
Roll no : 15
Lab no : 11
Program:  WAP to use ternary operator 
Date: 2016 Dec 7th
Subject: Programming Fundamentals
*/

#include<stdio.h>

int main() {
	int a;
	printf("Enter a number >> ");
	scanf("%d",&a);
	(a%2==0) ? printf("\n %d is even",a):printf("\n %d is odd",a);
	return(0);


}
