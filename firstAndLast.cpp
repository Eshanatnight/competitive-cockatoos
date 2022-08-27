#include "bits/stdc++.h"

using namespace std;

/*
    // given a array of int, find the first and last occurence of a number
    // return the indexes of the first and last occuerence. Use 1-based indexing.
*/
pair<int, int> firstAndLast(vector<int> v, int n)
{
    int startIdx{0};
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++)
    {
        if(v.at(i) == n)
        {
            startIdx = i;
            while (i + 1 < v.size() && v.at(i + 1) == n)
            {
                i++;
            }

            return make_pair(startIdx, i);
        }
    }

    return make_pair(-1, -1);
}


int main()
{
    vector<int> v = {1, 2, 3, 4,4,4,4,4,4,5,6,7};
    auto p = firstAndLast(v, 4);

    cout << p.first << " " << p.second;
    return 0;
}
