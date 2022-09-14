#include "bits/stdc++.h"

using namespace std;

int countDistict(int arr[], int len)
{
	set<int> s(arr, arr + len);
	return s.size();
}

int countDistict_binary(int arr[], int len)
{
	sort(arr, arr + len);

	int res(0);
	for(int i = 0; i < len; ++i)
	{
		while(i <= len - 1 && arr[i] == arr[i + 1])
		{
			i++;
		}
		res++;
	}

	return res;
}

int main()
{
	int arr[] = { 12, 10, 9, 45, 2, 10, 10, 45 };
	int len	  = sizeof(arr) / sizeof(int);

	print(countDistict_binary(arr, len) == 5);
}