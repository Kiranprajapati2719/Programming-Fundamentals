/*
Student Name : Kiran Prajapati
Roll no : 15
Lab no : 11
Program:  WAP to find largest number using ternary operator
Date: 2016 Dec 7th
Subject: Programming Fundamentals
*/

#include<stdio.h>
int main() {
    int a,b,c;

	printf("Enter the first number >> ");
	scanf("%d",&a);
	printf("Enter the second number >> ");
	scanf("%d",&b);
	printf("Enter the third number >> ");
	scanf("%d",&c);

	(a>=b&&a>=c)?printf("%d is the largest number",a):(b>=a&&b>=c)?printf("%d is the largest number",b):printf("%d is the largest number",c);

	return(0);
}
