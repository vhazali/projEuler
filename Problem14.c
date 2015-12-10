////////////////////////////////////////////////////
//  Name    :   Victor Hazali(A0110741) 			//
//  Description: Program takes in an integer and 	//
//  calculates which starting number, under the 	//
//  input that produces the longest chain when 	//
//  passed into the collatz sequence.			//
////////////////////////////////////////////////////

#include <stdio.h>

int collatz(int);
int longest_chain(int);

int main()
{
	int limit;

	printf("Enter limit: ");
	scanf("%d",&limit);

	printf("The longest starting number is %d\n",longest_chain(limit));

	return 0;
}

int collatz(int number)
{
	if(number ==1)
		return 1;
	if(number%2==0)
		return 1+collatz(number/2);
	else
		return 1+collatz(number*3+1);
}

int longest_chain(int limit)
{
	int max=0,i,length,maxIndex;

	for(i=1;i<limit;i++)
	{
		length=collatz(i);
		if(length>max)
		{
			max=length;
			maxIndex=i;
		}
	}

	return maxIndex;
}