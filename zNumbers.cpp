#include "bits/stdc++.h"

using namespace std;

bool isZNumber(int n) {
    if(n < 10 && n >= 0)
        return true;

    vector<int> arr;
    while(n != 0)
    {
        arr.push_back(n % 10);
        n /= 10;
    }

    vector<char> arr2;
    for(int i = 0; i < arr.size() - 1; i++)
    {
        if(arr[i] > arr[i + 1])
            arr2.push_back('g');
        else if(arr[i] < arr[i + 1])
            arr2.push_back('l');
        else
            return false;
    }

    int count = 0;
    for(int i = 0; i < arr2.size() - 1; i++)
    {
        if(arr2[i] == 'g')
            count++;
        else
            count--;

        if(count < -1 || count > 1)
            return false;
    }

    return true;
}

int zCount(int n) {
    int count = 0;
    for(int i = 0; i <= n; i++)
    {
        if(isZNumber(i))
            count++;
    }

    return count;
}

int main()
{

}