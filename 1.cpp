// If we list all the natural numbers below 10 that are multiples of 3 or 5
// we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
#include <string>

int main() 
{	
	int total = 0;
	for (int i = 3; i < 1000; i = i + 1) 
	{	
		if(i%3 == 0)
		{
			total = total + i;
		} else if (i % 5 == 0)
		{
			total = total + i;
		}
	}
	std::cout<<total;
	return 0;
}
