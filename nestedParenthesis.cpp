// A C++ program to find the maximum depth of nested
// parenthesis in a given expression
#include "bits/stdc++.h"

using namespace std;

int maxDepth(string& s)
{

	int count = 0;

	stack<int> st;

	for(int i = 0; i < s.size(); i++)
	{

		if(s[i] == '(') st.push(i); // pushing the bracket in the stack

		else if(s[i] == ')')
		{

			if(count < st.size()) count = st.size();

			/*keeping track of the parenthesis and storing

			it before removing it when it gets balanced*/

			st.pop();
		}
	}

	return count;
}

// Driver program

int main()
{

	string s = "( ((X)) (((Y))) )";

	cout << maxDepth(s);

	// This code is contributed by rakeshsahni

	return 0;
}