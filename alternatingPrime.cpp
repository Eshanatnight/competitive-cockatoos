#include "bits/stdc++.h"

using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int penalty(vector<int> arr)
{
    vector<int> primes;
    vector<int> nonPrimes;
    for (int i = 0; i < arr.size(); i++) {
        if (isPrime(arr[i])) {
            primes.push_back(arr[i]);
        } else {
            nonPrimes.push_back(arr[i]);
        }
    }

    sort(primes.begin(), primes.end());
    sort(nonPrimes.begin(), nonPrimes.end());

    int min = 0;

    if(primes.size() == nonPrimes.size())
        return min;

    if(primes.size() > nonPrimes.size())
    {
        for(int i = 0; i < primes.size() - nonPrimes.size() - 1; i++)
        {
            min += primes[i];
        }
    }
    else
    {
        for(int i = 0; i < nonPrimes.size() - primes.size() - 1; i++)
        {
            min += nonPrimes[i];
        }
    }

    return min;
}

int main()
{
    vector<int> arr = {1, 3, 4, 6, 8, 10};
    print(penalty(arr) == 11);
}