/*
 Student name: Kiran Prajapati
 Subject name:Programming Fundemental
 Roll no: 14
 lab sheet no: 27
 program: WAP to find product of three number using structure and passing structure as arguments in function
 Date: 2 Feb 2017
*/

#include<stdio.h>


#include<stdio.h>
struct product
{
	int a, b, c;
}mul;

int product(int x, int y, int z);

int main()

{

	int result;
	printf("Enter the first number : ");
	scanf("%d",&mul.a);

	printf("\nEnter the second number : ");
	scanf("%d",&mul.b);

	printf("\nEnter the third number : ");
	scanf("%d",&mul.c);

	result = product(mul.a, mul.b, mul.c);

	printf("\nThe product of the three numbers is : %d",result);

	return 0;
}

int product(int x, int y, int z)

{

	int mul;

	mul = x*y*z;

	return mul;
}
