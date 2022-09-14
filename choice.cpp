#include "bits/stdc++.h"

using namespace std;

int operationChoice(int a, int b, int c)
{
	/*
	(a + b), if c = 1
	(a / b), if c = 4
	(a – b), if c = 2
	(a x b), if c = 3
	*/

	switch(c)
	{
	case 1 :
	{
		return a + b;
		break;
	}

	case 2 :
	{
		return a - b;
		break;
	}

	case 3 :
	{
		return a * b;
		break;
	}

	case 4 :
	{
		return a / b;
		break;
	}

	default :
		return INT_MIN;
	}
}

int main()
{
	print(operationChoice(12, 16, 1) == 28);
	print(operationChoice(16, 20, 2) == -4);
}