#include "bits/stdc++.h"

using namespace std;

string DecToN(int n, int num)
{
	char inN[100];

	int i { 0 };
	while(num != 0)
	{
		int temp = 0;

		temp = num % n;

		if(temp < 10)
		{
			inN[i] = temp + 48; // temp + 58 - 9
			++i;
		}

		else
		{
			inN[i] = temp + 55; //  temp - 9 + 64
			++i;
		}

		num /= n;
	}

	reverse(inN, inN + i);
	inN[i] = '\0';

	return inN;
}

int main()
{
	print(DecToN(12, 718) == "4BA");
	print(DecToN(21, 5678) == "CI8");
}
