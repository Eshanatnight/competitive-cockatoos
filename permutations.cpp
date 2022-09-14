#include "bits/stdc++.h"

using namespace std;

int fact(int n)
{
	if(n <= 1)
	{
		return 1;
	}

	return n * fact(n - 1);
}

int permutation(int n, int r)
{
	return fact(n) / fact(n - r);
}

int main()
{
	print(permutation(2, 2) == 2);
	print(permutation(1, 12) == 1);
}