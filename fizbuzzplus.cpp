#include "bits/stdc++.h"

using namespace std;


int calculate(int m, int n)
{
    int result{0};
    for(int i = m; i < n; ++i)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            result+=i;
        }
    }

    return result;
}


int main()
{

    print(calculate(12, 50) == 90 );
    print(calculate(100, 160) == 510);
}