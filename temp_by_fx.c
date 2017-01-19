/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to enter temperature in Celcius and convert it to Fahrenheit (no arg, return)		     	
Lab Sheet No : 20
Date : 19 Jan 2017
*/

#include<stdio.h>

float temp();

int main()
{
		
	printf("The temperature in Fahrenheit is %f",temp());
	
	return 0;
	
	}

float temp()
{
	float c,f;
	
	
	printf("Enter temperature in Celcius: ");
	scanf("%f",&c);
	
	f=(c*1.8)+32;
	
	return f;
	}
