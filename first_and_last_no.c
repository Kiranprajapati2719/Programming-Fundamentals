/*
Student name: Kiran Prajapati
Lab sheet no: 17
Program: WAP to print first and last digit of any number 
Date: 2017 Jan 12
*/

#include<stdio.h>

int main ()
{
	int a,f=0;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	f=a%10;
	
	printf("%d is the last digit\n",f);
	
	while(a>=10)
	{
		a=a/10;
		
		}
		
	printf("%d is the first digit",a);
	
	return(0);
	}
	
