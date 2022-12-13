#include "bits/stdc++.h"

using namespace std;

int longestSubsequence(vector<int> arr)
{
    set<int> s(arr.begin(), arr.end());
    return s.size();
}

int main()
{
    vector<int> v = {5, 3, 1, 3, 3};

    print(longestSubsequence(v));
}