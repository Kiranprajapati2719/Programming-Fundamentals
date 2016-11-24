/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to find the roots of quadratic equation
Lab sheet no:
Date: 2016 Nov 23th
*/

#include<stdio.h>

int main() {
       float x1, x2, a, b, c, dis;
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    printf("Enter the value of c:\n");
    scanf("%f",&c);
    dis=(b*b)-(4*a*c);
    x1=(-b-pow(dis,0.5))/(2*a);
    x2=(-b+pow(dis,0.5))/(2*a);
    printf("The value of x1 is: %f",x1);
    printf("The value of x2 is: %f",x2);
    return(0);


}
