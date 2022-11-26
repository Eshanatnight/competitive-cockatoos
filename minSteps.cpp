#include "bits/stdc++.h"

using namespace std;

int minSteps(int input1, int input2)
{
	int cnt(0);

	while(input1 != 0 && input2 != 0)
	{
		if(input1 > input2)
		{
			cnt += input1 / input2;
			input1 %= input2;
		}

		else
		{
			cnt += input2 / input1;
			input2 %= input1;
		}
	}

	cnt--;

	if(input1 > 1 || input2 > 1) return -1;

	return cnt;
}

int main()
{
	int input1(3), input2(2);

	cout << minSteps(input1, input2) << endl;

	return 0;
}