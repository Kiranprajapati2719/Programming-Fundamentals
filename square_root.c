/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to program to enter any number and calculate its square root
Lab sheet no: 07
Date: 2016 Nov 23th
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>


int main() {
    float a, sq;
    printf("Enter the number:\n");
    scanf("%f",&a);
    sq=pow(a,0.5);
    printf("The square root of given number is: %f \n",sq);
    getch();
    return(0);

}
