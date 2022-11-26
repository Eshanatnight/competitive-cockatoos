#include "bits/stdc++.h"

// Given a number check if it is a Prime number or not
[[nodiscard]] auto isPrime(int n) -> bool
{
	for(int i = 2; i < n; ++i)
	{
		if(n % i == 0) return false;
	}
	return true;
}

// Check if a given number has a 3 in it
[[nodiscard]] auto hasThree(int n) -> bool
{
	while(n > 0)
	{
		if(n % 10 == 3) return true;
		n /= 10;
	}
	return false;
}

[[nodiscard]] auto calculate(int n) -> int
{
	if(isPrime(n) && hasThree(n)) return 1;

	return 0;
}

auto main() -> int
{
	print(calculate(13) == 1);
	print(calculate(29) == 0);
	print(calculate(19) == 0);
}