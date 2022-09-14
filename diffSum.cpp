#include "bits/stdc++.h"

using namespace std;

int differenceOfSum(int n, int m)
{
	// a = the total of all nos [1,n] that are not divisible by m
	// b = and the total of all the nos that are divisible by m
	// return a-b

	int a(0), b(0);
	for(int i = 1; i <= m; ++i)
	{
		if(i % n != 0) a += i;
		else b += i;
	}
	return (a > b) ? (a - b) : (b - a);
}

int main()
{
	cout << boolalpha << (differenceOfSum(6, 30) == 285) << endl;
	cout << boolalpha << (differenceOfSum(3, 10) == 19) << endl;
	print(differenceOfSum(4, 20) == 90);
}