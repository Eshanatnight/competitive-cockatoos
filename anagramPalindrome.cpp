#include "bits/stdc++.h"

using namespace std;

int AnagramPalindrome(string str)
{
    array<int, 26> arr= {0};

    for(int i = 0; i < str.length(); i++)
    {
        arr[str[i] - 'a']++;
    }

    int oddCount = 0;
    for(int i = 0; i < 26; i++)
    {
        if(arr[i] % 2 == 1)
        {
            oddCount++;
        }
    }

    if(oddCount > 1)
        return 0;

    return 1;

}

int main()
{

}