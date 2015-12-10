#include <stdio.h>

#ifndef MAXLENGTH
#define MAXLENGTH 1000
#endif

int calculate_product(int[]);


int main()
{
	int input[5]={0},i,max=0,product=0;

	for(i=0;i<5;i++)
		scanf("%1d",&input[i]);
	product=calculate_product(input);
	if(product>max)
		max=product;
	for(i=5;i<MAXLENGTH;i++)
	{
		scanf("%1d",&input[i%5]);
		product=calculate_product(input);
		if(product>max)
			max=product;
	}
	printf("greatest product = %d\n",max);
	return 0;
}

int calculate_product(int numbers[])
{
	int i,product=numbers[0];
	for(i=1;i<5;i++)
		product*=numbers[i];

	return product;
}