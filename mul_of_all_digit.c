 /*
 Student name: Kiran Prajapati
 Lab sheet no: 17
 Program: WAP to calculate product of digits of any number
 Date: 2016 Jan 12
 */
 
 #include<stdio.h>
 
 int main () 
 {
	 int num=0,mul=1,r;
	 printf("Enter a number: ");
	 scanf("%d",&num);
	 
	for(;num>0;num=num/10)
	{
		r=num%10;
		mul=mul*r;
		}
		
		 printf("The multiplication of all digit is %d",mul);
		 
	 return(0);
	 }
