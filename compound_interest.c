/*
Student name: Kiran Prajapati
Subject: Programming fundamentals
Lab sheet no: 06
Program: WAP to enter P,T,R and calculate
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main () {
    float P,T,R,a,CI;
    printf("Enter P:\n");
    scanf("%f",&P);
    printf("Enter T:\n");
    scanf("%f",&T);
    printf("Enter R:\n");
    scanf("%f",&R);
    a=(1+0.01*R);
    CI=(pow(a,T)*P)-1;
    printf("C.I is : %f",CI);
    getch();
    return(0);



}
