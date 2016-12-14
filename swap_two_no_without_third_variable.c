
/*
Student name: Kiran Prajapati
Subject: Programming Fundamentals
Roll: 15
Program: WAP to swap two values without using
Date: 14 Dec 2016
*/

#include<stdio.h>

int main () {
    int a=0,b=0;

    printf("Enter the first value >> ");
    scanf("%d",&a);

    printf("Enter the second value >> ");
    scanf("%d",&b);

    printf("\nBefore Swap %d and %d \n",a,b);

    a=a-b;
    b=a+b;
    a=b-a;




    printf("\nAfter Swap %d and %d \n",a,b);

    return(0);
}
