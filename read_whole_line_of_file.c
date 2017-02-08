/*
 Student name: Kiran Prajapati
 Subject name:Programming Fundemental
 Roll no: 14
 Lab sheet no: 30
 Program: WAP to read whole line of a file
 Date: 8 Feb 2017
*/

#include<stdio.h>

int main ()
{
	FILE *fp;
	char data[255];
	
	fp=fopen("test.txt","r");
	
	fgets(data,255,(FILE*)fp); //Read whole line
	
	printf("%s",data);
	
	printf("\n");
	
	fclose(fp);
	
	return 0;
	
	}

