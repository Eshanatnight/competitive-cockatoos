#include "bits/stdc++.h"

using namespace std;

string play(string str)
{
	istringstream ss(str);
	string ssa = "";
	string s;
	int len;
	while(getline(ss, s, ' '))
	{
		reverse(s.begin(), s.end());
		s[0] = toupper(s[0]);
		ssa += s + " ";
	}

	return ssa;
}

int main()
{
	string str = "my nAmE iS JhOn";

	print(play(str));
}