////////////////////////////////////////////////////////////////
//	Question:	to find the difference between the sum of 	//
//	the first 100 squares of natural number and the squares //
//	of the sum of the first 100 natural numbers.		  	//
//										 	//
//	Program written by: Victor Hazali                    		 	//
///////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int main()
{
	long int sum1=0,sum2=0,i,difference;

	for(i=1;i<=100;i++)
		sum1+=pow(i,2);
	sum2=pow((101*50),2);
	difference = sum2-sum1;
	printf("Difference = %ld\n",difference);

	return 0;
}
