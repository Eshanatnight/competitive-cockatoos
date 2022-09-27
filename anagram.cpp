#include "bits/stdc++.h"

using namespace std;

string isAnnagram(string s1, string s2)
{
	if(s1.length() != s2.length()) return "no";

	transform(s1.begin(), s1.end(), s1.begin(), [](char a) { return tolower(a); });
	transform(s2.begin(), s2.end(), s2.begin(), [](char a) { return tolower(a); });

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	if(s1.compare(s2) == 0) return "yes";

	return "no";
}

bool isAnnagram_2(string s1, string s2)
{
	array<int, 26> arr;
	arr.fill(0);

	transform(s1.begin(), s1.end(), s1.begin(), [](char a) { return tolower(a); });
	transform(s2.begin(), s2.end(), s2.begin(), [](char a) { return tolower(a); });

	for(int i = 0; i < s1.length(); i++)
	{
		arr[s1[i] - 'a']++;
		arr[s2[i] - 'a']--;
	}

	if(all_of(arr.begin(), arr.end(),[](int ch){ return ch != 0;}))
		return false;

	return true;
}

int main()
{
	print(isAnnagram_2("Listen", "Silent"));
}