/*
 Student Name: Kiran Prajapati
 Subject: Programming Fundamental
 Roll:
 Program: To print area of trapezium
 Lab Sheet:
 Date: 21th Nov. 2016
 */
 
#include<stdio.h>

int main() {
	int a,b,h;
	float area;
	
	printf("Enter value of a:\n");
	scanf("%d",&a);
	printf("Enter value of b:\n");
	scanf("%d",&b);
	printf("Enter value of h:\n");
	scanf("%d",&h);
	area=0.5*(a+b)*h;
	
	printf("Area of trapezium is :%f",area);
	
	return 0;
}
	  
