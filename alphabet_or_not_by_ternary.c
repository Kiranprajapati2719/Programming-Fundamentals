/*
Student name: Kiran Prajapati
Program: WAP to check if a character is alphabet or not by ternary operator 
Lab sheet no: 16
Date: 8th Jan 2017
*/

#include<stdio.h>

int main()
{
	int ASCII=0;

	char c;
	
	printf("Enter a character: ");
	scanf("%c",&c);
	
	ASCII=c;
	
	((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))?printf("Alphabet"):printf("Not an alphabet");
	
	return(0);
	
	}

