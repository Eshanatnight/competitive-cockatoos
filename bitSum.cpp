#include "bits/stdc++.h"

using namespace std;

unsigned int SumOfSetBits(int n, int set)
{
	int sum = 0;
	for(int i = 0; i < (pow(n, 2) - 1); ++i)
	{
		if(bitset<1024>(i).count() == set)
		{
			sum += i;
		}
	}

	return sum;
}

int main()
{
	print(SumOfSetBits(3, 2) == 14);
	print(SumOfSetBits(4, 1) == 15);

	return 0;
}