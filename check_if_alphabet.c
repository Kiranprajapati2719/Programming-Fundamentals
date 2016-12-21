/* 
 Student Name: Kiran Prajapati 
 Subject: Programming Fundamental
 Roll no: 15
 Program: WAP to check character assigned from user is alphabet or not
 Lab sheet no: 14
 Date: 2016 Dec 21th
 */

#include<stdio.h>

 int main() {
	 
	 
	 char c;
	 
	 int ASCII;
	 
	 printf("Enter a character >> ");
	 
	 scanf("%c",&c);
	 
	 
	 ASCII=c;
	 
		if((ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122))
	 
			{
				printf("The character you entered is an alphabet");
			 
				}
		else
	
			{
		
			printf("The character you entered is not an alphabet");
		
			}
			
	  return(0);
	 
	 }
	
