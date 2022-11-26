#include "bits/stdc++.h"

using namespace std;

bool isPrime(int n)
{
	if(n <= 1) return false;

	if(n <= 3) return true;

	// check for 2, 3, 4
	if(n % 2 == 0 || n % 3 == 0) return false;

	for(int i = 5; i * i <= n; i = i + 6)
	{
		if(n % i == 0 || n % (i + 2) == 0) return false;
	}

	return true;
}

// Function that returns the prime factors of a number
int sumOfPrimeFactors(int n)
{
	int sum	   = 0;
	int root_n = (int)sqrt(n);

	for(int i = 1; i <= root_n; i++)
	{
		if(n % i == 0)
		{
			if(i == n / i && isPrime(i)) sum += i;
			else
			{
				if(isPrime(i))
				{
					sum += i;
				}

				if(isPrime(n / i))
				{
					sum += (n / i);
				}
			}
		}
	}
	return sum;
}

auto main() -> int
{
	int n = 3;

	print(sumOfPrimeFactors(n));
}