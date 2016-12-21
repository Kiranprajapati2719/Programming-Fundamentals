/* 
 Student Name: Kiran Prajapati 
 Subject: Programming Fundamental
 Roll no: 15
 Program: WAP to check character assigned from user is vowel or not
 Lab sheet no: 14
 Date: 2016 Dec 21th
 */
 
 #include<stdio.h>
 
int main () {
	 
	 char c;
	 
	 printf("Enter a character >> ");
	 scanf("%c",&c);
	 
	 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
		{
			printf("The character you entered is a vowel");
			 
			}
	else
	{
		printf("The character you entered is a constant");
		}
			
	  return(0);
	 }
	 
