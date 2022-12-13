// The prime factors of 13195 are 5, 7, 13 and 29.

// What is the largest prime factor of the number 600851475143 ?


#include <iostream>
#include <cmath>
#include <vector>

void primefactor(std::vector<long> primes, long N)
{
	int j = 0 ;

	for(j = primes.size()-1; j > 0; j--)
	{
		if(N % primes[j] == 0)
		{	std::cout<<primes[j]<<std::endl;
			goto done;
		}
	}
done:
	std::cout<<"done";
	
}

int main()
{

	std::vector<long> primes;
	primes.push_back(2);
	long N = 600851475143;
	long sqN = floor(sqrt(N));

	std::cout<<sqN<<std::endl;

	long i = 3;
	int j;

not_prime:

	for(i = i; i < sqN; i = i)
	{	
		for(j = 0; j < primes.size(); j++)
		{	
			int temp = (i % primes[j]);
			if(temp == 0)
			{
				i = i + 1;
				j = 0;
				goto not_prime;
			}

		}
		primes.push_back(i);
		i = i + 1;
		j = 0;
	}
	// std::cout<<primes[primes.size()-1];
	primefactor(primes, N);


	return 0;
}