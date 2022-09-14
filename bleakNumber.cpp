//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:

	int countSetBits(int n)
	{
		int cnt = 0;
		while(n > 0)
		{
			if(n & 1) cnt++;
			n >>= 1;
		}
		return cnt;
	}

	int is_bleak(int n)
	{
		// Code here.
		int k = ceil(log2(n * 1.0) * 1.0);
		for(int i = n - k; i <= n; ++i)
		{
			if(i + countSetBits(i) == n)
			{
				return 0;
			}
		}
		return 1;
	}
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.is_bleak(n);
		cout << ans << "\n";
	}
	return 0;
}

// } Driver Code Ends