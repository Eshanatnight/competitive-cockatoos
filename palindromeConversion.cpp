#include "bits/stdc++.h"

using namespace std;

bool isPalindrome(int n)
{
    int temp = n;
    int rev  = 0;
    while (temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return (rev == n);
}

int palindromeConversion(int n)
{
    if(isPalindrome(n))
        return n;

    else
    {
        int temp = n;
        int rev  = 0;
        while (temp > 0)
        {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        return palindromeConversion(n + rev);
    }
}


int main()
{
    print(palindromeConversion(100) == 101);
    print(palindromeConversion(195) == 9339);
    return 0;
}