#include "bits/stdc++.h"

using namespace std;

void MaxInArray(int arr[], int length)
{
	auto maxElemIter = max_element(arr, arr + length);

	cout << "Max Element In Array: " << *maxElemIter << endl;
	cout << "Max Element Index:    " << maxElemIter - arr;
}

int main()
{
	int arr[] = { 23, 45, 82, 27, 66, 12, 78, 13, 71, 86 };
	int len	  = sizeof(arr) / sizeof(arr[0]);

	MaxInArray(arr, len);
}