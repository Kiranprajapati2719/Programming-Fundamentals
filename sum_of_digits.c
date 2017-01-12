 /*
 Student name: Kiran Prajapati
 Lab sheet no: 17
 Program: WAP to calculate sum of digits of any number
 Date: 2016 Jan 12
 */
 
 #include<stdio.h>
 
 int main ()
 {
	 int num,sum=0,i;
	 printf("Enter a number: ");
	 scanf("%d",&num);
	 
	 for(;num>0;num=num/10)
	 {
		 i=num%10;
		 sum=sum+i;
		 }
	 printf("The sum of digits is %d",sum);
	 
	 }
