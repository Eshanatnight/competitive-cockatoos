#include "bits/stdc++.h"

using namespace std;

int combination(int n, int r)
{
    if(r > n - r)
        r = n - r;

    int ans = 1;

    for(int i = 1; i < r; ++i)
    {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}


int main()
{
    print(combination(5, 3) == 4);
    print(combination(4, 3) == 1);
}