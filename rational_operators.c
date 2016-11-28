/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to program to use relational operators
Lab sheet no:
Date: 2016 Nov 23th
*/
#include<stdio.h>
#include<conio.h>

int main(){
    int a,b,c,d,e,f,g,avg,total,percen;

    printf("Enter the marks you got in Programming Fundamentals:\n");
    scanf("%d",&a);
    printf("Enter the marks you got in Computer Architecture:\n");
    scanf("%d",&b);
    printf("Enter the marks you got in Algebra:\n");
    scanf("%d",&c);
    printf("Enter the marks you got in Discrete Mathematics:\n");
    scanf("%d",&d);
    printf("Enter the marks you got in Organization Management:\n");
    scanf("%d",&e);
    printf("Enter the marks you got in Interactive Skills:\n");
    scanf("%d",&f);
    printf("Enter the marks you got in Software Engineering:\n");
    scanf("%d",&g);

    total=a+b+c+d+e+f+g;
    avg=total/7;
    percen=avg;

    printf("Your total is: %d \n",total);
    printf("Average is: %d \n",avg);
    printf("Percentage: %d \n",percen);

    getch();
    return(0);

}
