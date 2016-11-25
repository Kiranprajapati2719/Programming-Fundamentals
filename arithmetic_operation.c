/*
Student name: Kiran Prajapati
Subject: Programming Fundamental
Roll:
Program: WAP to print arithmetic operation
Lab sheet no:
04
Date: 2016 Nov 23th
*/

#include<stdio.h>

int main(){

        int sum,sub,a,b,mul,div,mod;
        printf("Enter the first number:\n");
        scanf("%d",&a);
        printf("Enter the second number:\n");
        scanf("%d",&b);

        sum=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
        mod=a%b;

        printf("The sum is: %d \n", sum);
        printf("The difference is: %d \n", sub);
        printf("The product is: %d \n", mul);
        printf("The division is: %d \n", div);
        printf("The modulus is: %d \n", mod);
        return(0);

}
