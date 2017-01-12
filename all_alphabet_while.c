/*
Student name: Kiran Prajapati
Lab sheet no: 17
Program: WAP to print all alphabet from a to z using while loop
Date: 2017 Jan 12
*/

#include<stdio.h>

int main ()
{
	char c=96;
	int i=1;
	
	while(i<=26)
	{
		c=c+1;
	
		printf("%c ",c);
		
		i++;
	
		}
	return(0);
	
	}
