/*
 Student name: Kiran Prajapati
 Subject name:Programming Fundemental
 Roll no: 14
 Lab sheet no: 30
 Program: WAP to read file
 Date: 8 Feb 2017
*/

#include<stdio.h>

int main()
{
	FILE *fp;
	
	int r=1;
	
	char data [255]="The data on the file is: ";
	
	fp=fopen("test.txt","r");
	
	do
	{
		printf("%s",data);
		printf("\n");
		r=fscanf(fp,"%s",data);
		
		}
		while(r==1);
		
		return 0;
		
	}
