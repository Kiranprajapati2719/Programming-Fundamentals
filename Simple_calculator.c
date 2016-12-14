/*
Student name: Kiran Prajapati
Subject: Programming Fundamentals
Roll: 15
Program: WAP to make a menu based program to create a calculator (using switch case)
Date: 14 Dec 2016
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,a,b,sum,sub,div,mul;


    printf("\n                             Simple Calculator                       \n");

    printf("\t1.Addition \t\t\t\t\t");
    printf("2.Subtraction \n\n");
    printf("\t3.Division \t\t\t\t\t");
    printf("4.Multiplication \n\n");
    printf("\t5.Exit \n\n");

    printf("\tChoose >> ");
    scanf("%d",&n);



    switch(n) {

        case 1:
            printf("\n\tEnter the first no >> ");
            scanf("%d",&a);

            printf("\n\tEnter the second no >> ");
            scanf("%d",&b);

            sum=a+b;
            printf("\n\tAddition= %d\n",sum);

            break;

        case 2:

            printf("\n\tEnter the first no >> ");
            scanf("%d",&a);

            printf("\n\tEnter the second no >> ");
            scanf("%d",&b);

            sub=a-b;
            printf("\n\tSubtraction= %d\n",sub);

            break;

         case 3:

            printf("\n\tEnter the first no >> ");
            scanf("%d",&a);

            printf("\n\tEnter the second no >> ");
            scanf("%d",&b);

            div=a/b;
            printf("\n\tDivision= %d\n",div);

            break;

         case 4:


            printf("\n\tEnter the first no >> ");
            scanf("%d",&a);

            printf("\n\tEnter the second no >> ");
            scanf("%d",&b);

            sum=a+b;
            printf("\n\tAddition= %d\n",sum);
            scanf("%d",&a);

            printf("\n\tEnter the second no >> ");
            scanf("%d",&b);

            mul=a*b;
            printf("\n\tMultiplication= %d\n",mul);
            break;

        case 5:

            exit(0);
    }


    return(0);

}
