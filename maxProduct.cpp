#include "bits/stdc++.h"

using namespace std;

int maxProduct(int arr[], int n) {

    if(n < 3)
        return -1;

    int maxProduct = INT_MIN;

    for(int i = 0; i < n - 2; ++i)
    {
        for (int j = i; j < n - 1; ++j)
        {
            for(int k = j; k < n; ++k)
            {
                maxProduct = max(maxProduct, arr[i] * arr[j] * arr[k]);
            }
        }
    }

    return maxProduct;
}

auto maxProduct2(int arr[], int n) -> int
{
    if(n < 3)
        return -1;

    sort(arr, arr + n);

    return max(arr[0] * arr[1] * arr[n - 1], arr[n - 1] * arr[n - 2] * arr[n - 3]);
}


auto main() -> int {
    int a[] = { 1, 2, 3, 4, 5 };
    print(maxProduct(a, 5) == 60);
}