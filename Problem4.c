//////////////////////////////////////////////////////////
//	Program will calcualte the largest palindrom made	//
//	from the product of two 3-digit numbers.		//
//										//
//	Program written by Victor Hazali				//
//////////////////////////////////////////////////////////

#include <stdio.h>

int is_palindrome(int);
int reverse_num(int);

int main()
{
	int num1=100,num2=100,value,largest=0;

	for(num1=100;num1<1000;num1++)
	{
		for(num2=num1+1;num2<1000;num2++)
		{
			value=num1*num2;
			if(is_palindrome(value))
			{
				if(value>largest)
					largest=value;
			}
		}
	}
	printf("Largest palindrome: %d\n",largest);
	return 0;
}

int reverse_num(int num)
{
	int reversed=0;
	while(num>0)
	{
		reversed = reversed*10+num%10;
		num/=10;
	}
	return reversed;
}

int is_palindrome(int num)
{
	int reversed=reverse_num(num);
	if(reversed==num)
		return 1;
	return 0;
}
