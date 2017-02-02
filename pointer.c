/*
 Student name: Kiran Prajapati
 Subject name:Programming Fundemental
 Roll no: 14
 lab sheet no: 27
 program: WAP to print memory location of a variable and value stored by it using pointer 
 Date: 2 Feb 2017
*/

#include<stdio.h>

int main ()
{
	int age=0;
	int *p1=&age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("The value of age entered is %d\n",age);
	printf("The memory location is: %u",p1);
	return 0;
	
}
