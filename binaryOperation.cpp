#include "bits/stdc++.h"

using namespace std;

/*
A denotes AND operation
B denotes OR operation
C denotes XOR Operation
*/
int OperationBinaryString(char* str)
{
	if(str == nullptr || str == NULL)
	{
		return -1;
	}

	int i(1);
	int a = *str - '0';
	str++;

	while(*str != '\0')
	{
		char p = *str;
		str++;

		if(p == 'A') // AND case
		{
			a &= (*str - '0');
		}

		else if(p == 'B') // OR case
		{
			a |= (*str - '0');
		}

		else if(p == 'C')
		{
			a ^= (*str - '0');
		}

		str++;
	}

	return a;
}

int main()
{
	string s("1C0C1C1A0B1");
	int len	  = s.length();
	char* str = &s[0];

	string s2("0C1A1B1C1C1B0A0");
	int len2   = s2.length();
	char* str2 = &s2[0];

	print(OperationBinaryString(str) == 1);
	print(OperationBinaryString(str2) == 0);
}