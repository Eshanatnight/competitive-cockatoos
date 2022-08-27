#include "bits/stdc++.h"

using namespace std;

int getExponent(int a)
{
    int count{0};

    while(a % 2 == 0 && a != 0)
    {
        count++;
        a /= 2;
    }
    return count;
}

int maxExponents(int a, int b)
{
    // a < b
    int max{0}, num{0};
    for(int i = a; i <= b; ++i)
    {
        int t = getExponent(i);

        if(t > max)
        {
            max = t;
            num = i;
        }
    }

    return num;
}

int main()
{
    print(maxExponents(7, 12) == 8);
}