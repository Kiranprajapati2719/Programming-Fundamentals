/*
Student name: Kiran Prajapati
Lab sheet no: 17
Program: WAP to print all alphabet from a to z using do while loop
Date: 2017 Jan 12
*/

#include<stdio.h>

int main () 
{
	int i=1;
	char c=96;
	
	do
	{
		c=c+1;
		printf("%c ",c);
		i++;
		}
	
	while(i<=26);
	
	return(0);
	}
