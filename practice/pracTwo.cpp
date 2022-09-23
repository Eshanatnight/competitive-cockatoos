#include "../bits/stdc++.h"

using namespace std;

// take a string as an input and find the occurence of each character in the string
// and print the character and its occurence in the string
void occurance(string str)
{
    map<char, int> m;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for (int i = 0; i < str.length(); i++)
    {
        m[str[i]]++;
    }
    for (auto i : m)
    {
        if(i.first == ' ') continue;
        cout << i.first << " " << i.second << endl;
    }
}

int main()
{
    string str = "Eshan Chatterjee";
    occurance(str);
}