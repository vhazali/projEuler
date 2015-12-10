//////////////////////////////////////////////////////////////////////
//	Question: If we list all the natural numbers 				 //
//	below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9	 //
//	The sum of these multiples is 23. Find the sum of all		//
//	the multiples of 3 or 5 below 1000					//
//  												//
//	Program written by	Victor Hazali					//
/////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
	int i,sum=0;
/*
	for(i=3;i<1000;i+=3)
	{
		if(i%5!=0)
			sum+=i;
	}
	for(i=5;i<1000;i+=5)
		sum+=i;
*/

	//Using AP where An = A1+(n-1)d
	i=999/3;
	sum=sum+ (i*((3+(i-1)*3)+3)/2);
	i=999/5;
	sum=sum+ (i*((5+(i-1)*5)+5)/2);
	i=999/15;
	sum= sum - (i*((15+(i-1)*15)+15)/2);
	printf("sum = %d\n",sum);

	return 0;
}
