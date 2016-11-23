/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to find ASCII value of any character assigned from user
Lab sheet no:
Date: 2016 Nov 23th
*/

#include<stdio.h>
#include<conio.h>

int main(){
    char character;
    int asciivalue;
    printf("Enter a character:");
    scanf("%c",&character);
    asciivalue=character;
    printf("The character is :%d",asciivalue);
    getch();
    return(0);
}
