//////////////////////////////////////////////////////////
//	Program computes the 10 001st Prime number 	//
//										//
//	Program written by Victor Hazali				//
//////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int is_prime(int);

int main()
{
	int num=13,count=6,prime;

	while(count<10002)
	{
		if(is_prime(num))
		{
			prime=num;
			count++;
		}
		num++;
	}

	printf("The 10001st prime number: %d\n",prime);
	return 0;
}

int is_prime(int num)
{
	int i;
	int root=sqrt(num);
	if(num%2==0)
		return 0;
	for(i=3;i<=root;i+=2)
	{
		if(num%i==0)
			return 0;
	}
	return 1;
}
