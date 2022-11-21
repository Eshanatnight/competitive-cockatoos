#include "bits/stdc++.h"

using namespace std;

void printRepeatingChars(string s) {
    array<int, 26> c = {0};
    //int c[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        c[s[i] - 'a']++;
    }

    for(int i = 0; i < 26; i++) {
        if (c[i] > 1) {
            cout << (char)(i + 'a') << " " << (int)c[i] << endl;
        }
    }
}

void printRepeatingChar(string s) {

    int count = 0;
    for(int i = 0; i < s.length(); ++i)
    {
        count = 1;
        for (int j = i + 1; j < s.length(); ++j)
        {
            if (s[i] == s[j] && s[i] != ' ')
            {
                count++;
                s[j] = '0';
            }
        }

        if(count > 1 && s[i] != '0')
            cout << s[i] << " " << count << endl;
    }

}


auto main() -> int {
    printRepeatingChar("Great responsibility ");
    printRepeatingChars("  ");
}