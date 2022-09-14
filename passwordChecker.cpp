#include "bits/stdc++.h"

using namespace std;

/*
At least 4 characters
Starting character must not be a number
At least one numeric digit
At Least one Capital Letter
Must not have space or slash (/)
*/
int CheckPassword(char str[], int n)
{
	if(n < 4) // size issue
	{
		return 0;
	}

	if(str[0] - '0' >= 0 && str[0] - '0' <= 9) // first letter cannot be a number
	{
		return 0;
	}

	int cap { 0 }, num { 0 }, a { 0 };
	while(a < n)
	{
		if(str[a] == ' ' || str[a] == '/') // space and slash check
		{
			return 0;
		}

		else if(str[a] >= 65 && str[a] <= 90)
		{
			cap++;
		}

		else if(str[a] - '0' >= 0 && str[a] - '0' <= 9)
		{
			num++;
		}

		a++;
	}

	return cap > 0 && num > 0;
}

int main()
{
	string s("aA1_67");
	int len = s.size();
	char* c = &s[0];

	string s2("a987 abC012");
	int len2 = s2.size();
	char* c2 = &s2[0];

	print(CheckPassword(c, len) == 1);
	print(CheckPassword(c2, len2) == 0);
}