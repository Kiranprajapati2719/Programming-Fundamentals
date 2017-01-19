
/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 
Program : WAP to enter length in cm convert it into meter and kilometer 			     	
Lab Sheet No : 20
Date : 19 Jan 2017
*/


#include<stdio.h>

void length();

int main ()
{
	length();
	return 0;
}

void length()
{
	float cm,m,km;
	
	printf("Enter length in cm: ");
	scanf("%f",&cm);
	
	m=cm/100;
	
	km=m/1000;
	
	printf("Length in meter is %f and in km is %f",m,km);
	
	
	}
