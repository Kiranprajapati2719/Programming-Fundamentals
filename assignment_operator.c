
/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to program to use assignment operator
Lab sheet no:
Date: 2016 Nov 30th
*/


#include<stdio.h>
#include<conio.h>

int main() {
    int a,b;

    printf("Enter first no:\n");
    scanf("%d",&a);
    printf("Enter second no:\n");
    scanf("%d",&b);
    a+=b;
    printf("\n %d += %d operator %d",a,b,a);
    a-=b;
    printf("\n \t-= operator %d",a);
    a*=b;
    printf("\n \t*= operator %d",a);
    a/=b;
    printf("\n \t/= operator %d",a);
    getch();
    return(0);


}
