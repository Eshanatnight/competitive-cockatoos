#include "bits/stdc++.h"

using namespace std;

// This sorts the range too
int SecondLargest(vector<int> arr)
{
	nth_element(arr.begin(), arr.begin() + 1, arr.end(), greater<int>());
	return arr[1];
}

// If I am allowed to sort the elements
int secondLargest(vector<int> arr)
{
	sort(arr.begin(), arr.end(), greater<int>());
	return arr[1];
}

// if i am not allowed to sort the elements or if
// we need to return the index of the element rather than
// the value of the element itself
int secondlargest(vector<int> arr)
{
	int maxIdx = 0;

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] < arr[i + 1])
		{
			maxIdx = i + 1;
		}
	}

	arr[maxIdx] = 0;

	for(int i = 0; i < arr.size(); i++)
	{
		if(arr[i] > arr[i + 1])
		{
			maxIdx = i;
		}
	}

	return arr[maxIdx];
}

int main()
{
	vector<int> arr = { 2, 5, 6, 11, 33, 4, 7, 21, 99, 34 };

	print(SecondLargest(arr));
	print(secondLargest(arr));
	print(secondlargest(arr));
}