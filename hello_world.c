/*
Student name: Kiran Prajapati
Lab sheet no: 19
Program: WAP to print Hello World using function
Date: 2017 Jan 17
*/

#include<stdio.h>
#include<math.h>
#define PI 3.14

void circle(float r);
int main()
{
    float r;
    printf("Enter the radius of circle: ");
    scanf("%f",&r);
    
    circle(r);
    
    return 0;
}

void circle(float r)
{
    float d,c,a;
    
    d=(r*2);
    c=2*PI*r;
    a=PI*pow(r,2);
    printf("The diameter of circle is %f \nThe circumference of circle is %f \nThe area of circle is %f",d,c,a);
    
}
