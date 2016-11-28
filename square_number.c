/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to program to enter any number and calculate its square
Lab sheet no: 07
Date: 2016 Nov 23th
*/

#include<stdio.h>
#include<conio.h>

int main() {
    float a,sq;
    printf("Enter a number:\n");
    scanf("%f",&a);
    sq=a*a;
    printf("The square of given number is %f \n",sq);
    getch();
    return(0);
}
