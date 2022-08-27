#include "bits/stdc++.h"

using namespace std;

/*
    // Find the kth largest element in a given array
    // return the value
*/
int kthLargest(vector<int> v, int n)
{
    priority_queue<int> pq(v.begin(), v.end());
    for(int i = 0; i < n - 1; ++i)
    {
        pq.pop();
    }

    return pq.top();
}


int main()
{
    vector<int> v = {1, 2, 3, 4,4,4,4,4,4,5,6,7};
    print(kthLargest(v, 3) == 5);
}
