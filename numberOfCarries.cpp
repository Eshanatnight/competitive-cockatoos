#include "bits/stdc++.h"

using namespace std;

int numberOfCarries(int num1 , int num2)
{
    int r1, r2;
    int count{0};
    while (num1 != 0 || num2 != 0)
    {
        r1 = num1 % 10;
        r2 = num2 % 10;

        int temp = r1 + r2 - 9;
        if(temp >= 0)
        {
            count++;
            num1 += temp;
        }

        num1 = num1 / 10;
        num2 = num2 / 10;
    }

    return count;

}


int main()
{
    int x{451}, y{349};
    print(numberOfCarries(x, y) == 2);

    x = 23;
    y = 563;
    print(numberOfCarries(x, y) == 0);

}