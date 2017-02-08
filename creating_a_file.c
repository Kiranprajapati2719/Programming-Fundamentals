/*
 Student name: Kiran Prajapati
 Subject name:Programming Fundemental
 Roll no: 14
 Lab sheet no: 30
 Program: WAP to create a file and assign data to the file
 Date: 8 Feb 2017
*/

#include<stdio.h>

int main ()
{
	FILE *fp;
	
	int num1,num2,add;
	
	printf("Enter a number: "); //First number
	scanf("%d",&num1);
	
	printf("Enter a number: "); //Second number
	scanf("%d",&num2);
	
	add=num1+num2; //Sum
	
	fp=fopen("Desktop//Files//test.txt","w"); //File opened
	
	fprintf(fp,"First value is: %d\n",num1); //Data on File
	fprintf(fp,"First value is: %d\n",num1);
	fprintf(fp,"Addition is: %d\n",add);
	printf("Data saved on test file");
	
	fclose(fp); //File closed

	return 0;
	
}
