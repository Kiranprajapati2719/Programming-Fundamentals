/*
 Student name: Kiran Prajapati
 Subject name:Programming Fundemental
 Roll no: 14
 Lab sheet no: 30
 Program: WAP to overwrite file
 Date: 8 Feb 2017
*/

#include<stdio.h>

int main()
{
	FILE *fp;
		
	fp=fopen("test.txt","a");
	
	fprintf(fp,"My name is Flash. ");
	fprintf(fp,"I am the fastest man alive. ");

	return 0;
		
	}
