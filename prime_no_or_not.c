/* 
 Student Name: Kiran Prajapati 
 Subject: Programming Fundamental
 Roll no: 15
 Program: WAP to check character is number is a prime number or not
 Lab sheet no: 14
 Date: 2016 Dec 21th
 */

#include<stdio.h>

int main () {
	int a;
	printf("Enter any number >> ");
	scanf("%d",&a);
	
	if(a%1==0&&a%a==0)
		{
			printf("It is a prime number");
			
		}
		
	else
		{
			printf("It is not a prime number");
			
		}
	return(0);

	
	

}
