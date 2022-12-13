#include "bits/stdc++.h"

using namespace std;

// checks if s1 is a substring of s2 and returns the index of the first character of the substring
int isSubstring(string s1, string s2)
{
    if(s2.find(s1) != string::npos)
        return s2.find(s1);
    else
        return 0;
}

// Given two strings, find if s1 is a substring shuffling of s2 or not
bool compare(int arr1[], int arr2[])
{
    for(int i = 0; i < 256; i++)
    {
        if(arr1[i] != arr2[i])
            return false;
    }
    return true;
}

bool isSubstringShuffle(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    int count1[256] = {0};
    int count2[256] = {0};

    for(int i = 0; i < M; i++)
    {
        count1[s1[i]]++;
        count2[s2[i]]++;
    }

    for (int i = 0; i < M; i++)
    {
        if (compare(count1, count2))
            return true;

        count2[s2[i]]--;
        count2[s2[i+M]]++;
    }

    if(compare(count1, count2))
        return true;

    return false;
}


int main()
{

}