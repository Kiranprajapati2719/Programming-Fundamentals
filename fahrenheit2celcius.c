/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to program to convet temperature from deree fahreinheit to celcius
Lab sheet no:
Date: 2016 Nov 23th
*/

#include<stdio.h>

int main(){
    float celc,fah;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&fahren);
    celc=fahren*1.8+32;
    printf("The temperature in Celcius is :%f",celc);
    return 0;
}
