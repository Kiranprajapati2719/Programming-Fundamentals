/*
Student name: Kiran Prajapati
Lab sheet no: 17
Program: WAP to count number of digits in any number
Date: 2017 Jan 12
*/

#include<stdio.h>

int main ()
{
	int a,i=0;
	
	printf("Enter a number: ");
	scanf("%d",&a);
	
	for(;a>0;a=a/10)
	{
		i++;
		
		
		}
	
	
	printf("The number of digit is %d",i);
	
	return(0);
	
	}
