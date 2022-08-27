#include "bits/stdc++.h"

using namespace std;

int findCount(int n, int arr[], int num, int diff)
{
    if(n == 0 || arr == nullptr)
        return -1;

    int ret = 0;

    for(int i = 0; i < n; ++i)
    {
        if(abs(arr[i] - num) <= diff)
        {
            ret++;
        }
    }

    return ret > 0 ? ret : -1;
}


int main()
{
    int n = 6;
    int arr[] = {12, 3, 14, 56, 77, 13};
    int num = 13;
    int diff = 2;
    print(findCount(n, arr, num, diff) == 3);
}

