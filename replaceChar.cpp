#include "bits/stdc++.h"

using namespace std;

string replaceChar(string s, char c1, char c2)
{
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == c1)
        {
            s[i] = c2;
        }

        else if(s[i] == c2)
        {
            s[i] = c1;
        }

    }
    return s;
}



int main()
{
    print(replaceChar("apples", 'a', 'p') == "paales");

}