#include "bits/stdc++.h"

using namespace std;


int main()
{
    int n{12};
    int sum{0};

    for(int i = 0; i < 10; ++i)
    {
        cout << n * (i + 1) << "  ";
        sum += n * (i + 1);
    }

    cout << endl << sum << endl;

}