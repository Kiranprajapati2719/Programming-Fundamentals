/*
Student name: Kiran Prajapati
Subject: Programming Fundamentals
Roll no: 
Program: WAP to read and print elements of array 
Lab sheet no: 21
Date: 2017 Jan 22
*/

#include<stdio.h>

void read();
void display();

int main ()
{
	read();
	display();
	
	}
	
void read()
{
	int num[5],i;
	
	
	for(i=0;i<5;i++)
	{
		printf("Enter no. %d : ",i+1);
		scanf("%d",&num[i]);
		
		}
	
	}

void display()
{
	int i,num[5];
	
	printf("The numbers entered are: ");
	
	for(i=0;i<5;i++)
	{
		
		printf("%d ",num[i]);
	
		}

	}
	
	
