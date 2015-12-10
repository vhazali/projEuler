////////////////////////////////////////////////////
//  Name    :   Victor Hazali					//
//  Description: Program takes in an integer and 	//
//  calculates the sum of prime numbers up to that	//
//  number.							//
////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int is_prime(int);
int sum_of_primes(int);

int main()
{
	int limit;
	printf("Enter limit: ");
	scanf("%d",&limit);

	printf("Sum of primes under %d is %d\n",limit, sum_of_primes(limit));

	return 0;
}

int is_prime(int number)
{
	if(number==1 || number == 0)
		return 0;
	int i;

	for(i=2;i<=sqrt(number);i++)
		if(number%i==0)
			return 0;

	return 1;
}

int sum_of_primes(int limit)
{
	int i,sum=0;
	for(i=0;i<limit;i++)
		if(is_prime(i))
			sum+=i;

	return sum;
}