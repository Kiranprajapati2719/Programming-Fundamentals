/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Program: WAP to demonstrate the working of increment and decrement
Lab Sheet no: 09
Date: 2016 Dec 02
*/

#include<stdio.h>
#include<conio.h>

int main() {
    int a;
    printf("Enter number: \n");
    scanf("%d",&a);

    printf("Post increment is: %d \n",a++);
    printf("Pre inrement is: %d \n",++a);

    printf("Post decrement is: %d \n",a--);
    printf("Pre decrement is: %d \n",--a);

    getch();
    return(0);
}
