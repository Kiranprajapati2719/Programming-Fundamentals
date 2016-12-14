/*
Student nsme: Kiran Prajapati
Subject: Programming Fundamentals
Roll: 15
Program: WAP to see if a number is divisible by 5and 11 or not
Date: 14 Dec 2016
*/

#include<stdio.h>

int main()
{
    int a;

    printf("Enter a number >> ");
    scanf("%d",&a);

    if(a%5==0&&a%11==0)
    {
        printf("The number is divisible by 5 and 11");
    }

    else
    {
        printf("\nThe number is not divisible by 5 and 11\n");
    }
    
    return(0);

}
