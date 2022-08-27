#include "bits/stdc++.h"

using namespace std;

/*
    // given an array, and a value sum if the sum of the smallest number is < `sum` then return sum else return 0
*/

int productSmallPair(int sum, vector<int> arr)
{
    int result;

    if(arr.size() == 0 || arr.size() < 2)
        return -1;

    sort(arr.begin(), arr.end());

    int t = arr.at(0) + arr.at(1);
    result = arr.at(0) * arr.at(1);

    if(t < sum)
        return result;

    return 0;
}


int main()
{
    auto v = {5, 4, 2, 3, 9, 1, 7};
    int s{9};
    print(productSmallPair(s, v) == 2);

    vector<int> v2 = {9, 8, -7, 3, 9, 3};
    int s2{9};
    print(productSmallPair(s2, v2) == -21);
}