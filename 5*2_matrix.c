/*
Student Name : Kiran Prajapati
Subject : Programming fundamental
Lab Sheet no : 24
Program : WAP to declare and print multi-dimensional array of 5*2
Date : 30 Jan 2017
 */
 
 
 #include<stdio.h>
 
 int main ()
 {
	 int i,j,mat[5][2];
	
	//Reading values of mtrix
	
	for(i=0;i<5;i++)
	{
	
		for(j=0;j<2;j++)
		{
			printf("Enter element a%d%d: ",i,j);
			scanf("%d",&mat[i][j]);
		
		}
	}
		
	// Displaying The Matrix
	
	printf("\nThe matrix is:\n");
	
	for(i=0;i<5;i++)
	{
	
		for(j=0;j<2;j++)
		{
			printf("%d ",mat[i][j]);
		
		}
		
		printf("\n");
	}
	
	return 0;
 }
