//////////////////////////////////////////////////////
//  Program computes the smallest number that is 	   //
//  evenly divisible by all of the numbers from 1 to	   //
//  20						  		   //
//									   //
//	Program Written by: Victor Hazali			   //
//////////////////////////////////////////////////////


#include <stdio.h>

int is_divisible(long int);

int main()
{
	long int num=1;
	
	while(!(is_divisible(num)))
	{
		num++;
	}
	
	printf("Number is: %ld\n",num);
	return 0;
}

int is_divisible(long int num)
{
	int i=1;
	for(i=1;i<=20;i++)
	{
		if(num%i!=0)
			return 0;
	}

	return 1;
}
