// A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

// Find the largest palindrome made from the product of two 3-digit numbers.

#include <iostream>
#include <string>
#include <cmath>

int how_many_digits(int N)  
{  
	int exponent = log(N)/ log(10);
    return (exponent+1);  
}  

std::string palindrome_check(int N)
{
	std::string num_str = std::to_string(N);

	std::string first_str  = num_str.substr(0, num_str.length()/2);
	std::string second_str = num_str.substr(num_str.length()/2);

	for(int i = 0; i < first_str.length() ; i++)
	{
		if(first_str[i]!=second_str[first_str.length()-i-1])
		{
			return "NO";
		}
	}
	return "yes";
}


int main()
{	
	int N = 3;
	int large = 0;  

	std::cout<<"Number of Digits"<<std::endl;
	
	// std::cin>>N; --default 

	for(int i = pow(10, N); i > pow(10, N-1) ; i--)
	{
		for(int j = pow(10, N); j > pow(10, N-1) ; j--)
		{	
			int prod = i*j;

			if(how_many_digits(prod) == N*2)
			{
				if(palindrome_check(prod) == "yes")
				{	
					if(prod > large)
					{
						large = prod;
					}
				}
			}
		}	
	}
	std::cout<<large<<'\n';
	return 0;
}