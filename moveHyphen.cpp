#include "bits/stdc++.h"

using namespace std;

string MoveHyphen (string s, int n)
{
    if (s.empty() || n == 0)
    {
        return NULL;
    }

    int count(0);
    for(int i = 0; i< n;)
    {
        if(s[i] == '-')
        {
            s.erase(i,1);
            count++;
        }

        else
        {
            i++;
        }
    }

    while(count--)
    {
        s = '-' + s;
    }

    return s;

}

int main()
{
    string s1 = "Move-Hyphens-to-Front";
    string s2 = "String-Compare";

    int len1 = s1.length();
    int len2 = s2.length();

    print(MoveHyphen(s1, len1) == "---MoveHyphenstoFront");
    print(MoveHyphen(s2, len2) == "-StringCompare");

}