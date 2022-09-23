#include "bits/stdc++.h"

using namespace std;

/*
1. Ekta string ar unique elements + repetition kon gulo
2. then replace kore seta te odd elements koto gulo count kore
3. interaction diye new string and count each alphabet
*/

int count(string str)
{
	set<char> s(str.begin(), str.end());

	return s.size();
}

int countTwo(string str)
{
	sort(str.begin(), str.end());
	int r = 0;

	for(int i = 0; i < str.length(); ++i)
	{
		while(i <= str.length() && str[i] == str[i + 1])
		{
			i++;
		}
		r++;
	}

	return r;
}

int countOddElements(string str)
{
	string ret;
	if(str.length() % 2 != 0) return str.length() / 2 + 1;

	return -1;
}

string newString(string str)
{
	string ret;
	for(int i = 1; i < str.length(); i += 2)
	{
		ret += str[i];
	}

	return ret;
}

int main()
{
	string s = "aghtstsbvdvrsb";
	print(s.length());
	print(newString(s));
}