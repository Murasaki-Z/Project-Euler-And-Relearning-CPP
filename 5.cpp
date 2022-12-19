// WIP

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

// What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

//recursion and goto sample - I write better code that this, I promise.

#include <iostream>

long gcd(int a, int b)
{ // Euclid division
	long val = -1;
	
	val = a % b;

	if(val !=0)
		gcd(b, val);

	return val;
}

long lcm(int a, int b)
{	
	if(a>b)
	{	
		int temp = b;
		b = a;
		a = temp;
	}

	long val = (a * b) / gcd(a , b);

	return val;
}

int main()
{
	int lcm_val = 1;
	int iter = 1;

	int range = 10;

recurse:

	iter = iter + 1;

	lcm_val = lcm_val + lcm(lcm_val, iter);
	// std::cout<<lcm_val;

	if(iter <range)
		goto recurse;
	std::cout<<lcm_val;

	return 0;
}