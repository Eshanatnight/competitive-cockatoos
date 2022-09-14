#include "bits/stdc++.h"

using namespace std;

// Write a program in C such that it takes a lower
// limit and upper limit as inputs and print all the
// intermediate palindrome numbers.

bool isPalindrome(int n)
{
	int temp = n;
	int rev { 0 };
	while(temp > 0)
	{
		rev = rev * 10 + (temp % 10);
		temp /= 10;
	}

	return n == rev;
}

int main()
{
	int start { 10 }, end { 80 };

	for(int i = start; i < end; ++i)
	{
		if(isPalindrome(i))
		{
			cout << i << ", ";
		}
	}

	cout << endl;

	for(int i = 100; i < 200; ++i)
	{
		if(isPalindrome(i))
		{
			cout << i << ", ";
		}
	}

	return 0;
}