#include "bits/stdc++.h"


using namespace std;

string isAnnagram(string s1, string s2)
{
    if(s1.length() != s2.length())
        return "no";

    transform(s1.begin(), s1.end(), s1.begin(), [](char a){return tolower(a);});
    transform(s2.begin(), s2.end(), s2.begin(), [](char a){return tolower(a);});

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1.compare(s2) == 0)
        return "yes";

    return "no";
}


int main()
{
    print(isAnnagram("Listen", "Silent") == "yes");
}