////////////////////////////////////////////////////////////////////////
//	Question: Each new term in the Fibonacci sequence is generated   //
//	by adding the previous two terms. By starting with 1 and 2. By 	      //
//	considering the terms in the Fibonacci sequence whose values do //
//	not exceed four million, find the sum of the even-valued terms.    //
//										      		    //
//	Program written by Victor Hazali						    //
//////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main()
{
	int sum=0,i=1,j=1,k;

	while(k<4000000)
	{
		k=i+j;
		if(k%2==0)
			sum+=k;
		i=j;
		j=k;
	}
	printf("sum = %d\n",sum);
	return 0;
}
