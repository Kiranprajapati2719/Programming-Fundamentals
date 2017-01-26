/*
 Student name: Kiran Prajapati
 Subject name:Programming Fundemental
 Roll no: 
 Lab sheet no: 23
 Program: WAP to find the maximum number in an array
 Data:26 Jan 2017
*/
# include<stdio.h>

int main()
{
	int i,a[5],large=0;
	
	for(i=0;i<5;i++)
	{
			printf("Enter no %d:", i+1 );
			scanf("%d",&a[i]);
		
		}
	
	for(i=0;i<5;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			
			}
			
			
		}
			printf("Maximum number is %d ",large);
		
	return 0;
	
	
	}
