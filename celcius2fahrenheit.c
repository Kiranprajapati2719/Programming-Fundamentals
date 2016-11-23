/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to convet temperature from degree celcius to fahreinheit
Lab sheet no:
Date: 2016 Nov 23th
*/

#include<stdio.h>

int main(){
    float c,fahren;
    printf("Enter the temperature in Celcius:\n");
    scanf("%f",&c);
    fahren=(c*1.8)+32;
    printf("The temperature in Fahrenheit is :%f",fahren);
    return 0;
}
