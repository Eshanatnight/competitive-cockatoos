#include "bits/stdc++.h"

using namespace std;

string removeKChar(int k, string s)
{

	if(k == 1) return "";

	stack<pair<char, int>> st;

	for(int i = 0; i <= s.length(); ++i)
	{

		if(st.empty())
		{
			st.push({ s[i], 1 });
		}

		else if(s[i] == st.top().first)
		{
			auto p = st.top();
			st.pop();
			p.second++;
			if(p.second == k) continue;
			else st.push(p);
		}

		else
		{
			st.push({ s[i], 1 });
		}
	}

	string ret = "";
	while(!st.empty())
	{
		ret += st.top().first;
		st.pop();
	}

	reverse(ret.begin(), ret.end());
	return ret;
}

auto main() -> int
{
	string s = "geeksforgeeks";
	int k	 = 2;
	cout << removeKChar(k, s) << "\n";
}