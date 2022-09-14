#include "bits/stdc++.h"

using namespace std;

/*
You are required to input the size of the matrix then the elements of matrix,
then you have to divide the main matrix in two sub matrices (even and odd)
in such a way that element at 0 index will be considered as even and element
at 1st index will be considered as odd and so on.
then you have sort the even matrix in decending and odd matrix in ascending order
then print the sum of second largest number from both the matrices
*/
int largeSmallSum(vector<int> arr)
{
	vector<int> odd, even;
	if(arr.empty() || arr.size() <= 3) return 0;

	for(int i = 0; i < arr.size(); ++i)
	{
		if(i % 2 == 0)
		{
			even.emplace_back(arr[i]);
		}

		else
		{
			odd.emplace_back(arr[i]);
		}
	}

	sort(odd.begin(), odd.end());
	sort(even.begin(), even.end(), greater<int>());

	return odd[1] + even[1];
}

/*
You are required to input the size of the matrix then the elements of matrix,
then you have to divide the main matrix in two sub matrices (even and odd)
in such a way that element at 0 index will be considered as even and element
at 1st index will be considered as odd and so on.
then you have sort the even matrix and odd matrix in ascending order
then print the sum of second largest number from both the matrices
*/
int largeLargeSum(vector<int> arr)
{
	vector<int> even, odd;

	for(int i = 0; i < arr.size(); i++)
	{
		if(i % 2 == 0)
		{
			even.push_back(arr[i]);
		}

		else
		{
			odd.push_back(arr[i]);
		}
	}

	sort(even.begin(), even.end(), greater<int>());
	sort(odd.begin(), odd.end(), greater<int>());

	return odd[1] + even[1];
}

int main()
{
	vector v { 3, 2, 1, 7, 5, 4 };
	vector v2 { 1, 8, 0, 2, 3, 5, 6 };

	print(largeSmallSum(v) == 7);
	print(largeSmallSum(v2) == 8);

	vector v3 { 3, 4, 1, 7, 9 };
	print(largeLargeSum(v3) == 7);
}