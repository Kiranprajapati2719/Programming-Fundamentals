/*
Student Name : Kiran Prajapati
Subject : Programming Fundamentals
Roll No : 03
Program : WAP to enter an array of 10 elements and display element in ascending order
Lab Sheet No : 24
Date : 30 Jan 2017
*/

#include<stdio.h>

int main()
{
	int arr[10], i, x, temp;
	
	printf("Elements of array :\n");
	
	for (i=0;i<10;i++)
	{
		printf("\nElement %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for (i=0;i<10;i++)
	{
		for(x=i+1;x<10;x++)
		{
			if (arr[i]>arr[x])
			{
				temp = arr[i];
				arr[i] = arr[x];
				arr[x] = temp;
			}
		}
	}
	
	printf("\n\nElements of the array in ascending order : \n\n");
	
	for (i=0; i<10;i++)
	{
		printf("%d\n\n", arr[i]);
	}
	
	return 0;
}
