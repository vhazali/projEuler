////////////////////////////////////////////////////////
//	Question: What is the largest prime factor of the  //
//  number 600851475143?					      //
//							  		     //
//  Program written by:	Victor Hazali		     //
///////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
	long int i,max;
	long int num=600851475143;

	for(i=2;i<=num;i++)
	{
		if(num%i==0)
			max=i;
		while(num%i==0)
			num/=i;
	}
	printf("largest prime factor: %ld\n",max);
	return 0;
}
