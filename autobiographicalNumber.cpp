#include "bits/stdc++.h"

using namespace std;

/*
    // An Autobiographical Number is a number N such that the first digit of N
    // represents the count of how many zeroes are there in N, the second digit
    // represents the count of how many ones are there in N and so on.
*/

int findAutoCount(const string n)
{
    int sum{0};
    set<char> st(n.begin(), n.end());

//    for_each(n.begin(), n.end(), [&](char a){ sum += (a - '0');});

    for (int i = 0; i < n.size(); i++)
    {
        sum += (n[i] - '0');
    }

    if (sum != n.size())
        return 0;

    return st.size();
}

int main()
{
    string n("1210");
    print(findAutoCount(n));
}