#include "bits/stdc++.h"

using namespace std;

auto maxSum_1(int arr[], int n) -> int
{
	if(n < 3) return -1;

	int maxSum = INT_MIN;

	for(int i = 0; i < n - 2; ++i)
	{
		for(int j = i; j < n - 1; ++j)
		{
			for(int k = j; k < n; ++k)
			{
				maxSum = max(maxSum, arr[i] + arr[j] + arr[k]);
			}
		}
	}

	return maxSum;
}

auto maxSum_2(int arr[], int n) -> int
{
	if(n < 3) return -1;

	sort(arr, arr + n);

	return max(arr[0] + arr[1] + arr[n - 1], arr[n - 1] + arr[n - 2] + arr[n - 3]);
}

auto main() -> int
{
	int a[] = { 1, 2, 3, 4, 5 };
	print(maxSum_1(a, 5) == 12);
	print(maxSum_2(a, 5) == 12);
}