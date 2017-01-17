/*
Student name: Kiran Prajapati
Lab sheet no: 19
Program: WAP to find cube of any number using function
Date: 2017 Jan 17
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void cube();

int main()                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
{
	cube();
	
	return(0);
	
	}
	
void cube()
{
	int n,c;
	printf("Enter: ");
	scanf("%d",&n);
	
	c=pow(n,3);
	
	printf("The cube of number %d is %d",n,c);
	
	
	}
