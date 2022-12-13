#include "bits/stdc++.h"

using namespace std;

template<typename T>
void print(T a)
{
    std::cout << std::endl << std::boolalpha << a << std::endl;
}

template<typename T>
void print_container(T a)
{
    for_each(a.begin(), a.end(), [](int c){ std::cout << c << " ";});
}

// Question 1: Given Two strings, find the longest common subsequence.

// Recursive Approach
// O(2^n)
auto longestSubsequence(string s1, string s2) -> int {

    int m = s1.length();
    int n = s2.length();

    if(m == 0 || n == 0)
        return 0;

    if(s1.at(m - 1) == s2.at(n - 1))
    {
        string r1 = s1.substr(0, s1.size() - 1);
        string r2 = s2.substr(0, s2.size() - 1);

        return 1 + longestSubsequence(r1, r2);
    }

    else
    {
        string r1 = s1.substr(0, s1.size() - 1);
        string r2 = s2.substr(0, s2.size() - 1);
        return max(longestSubsequence(s1, r2), longestSubsequence(r1, s2));
    }
}

// Dynamic Programming Approach
auto lcs(char* s1, char* s2, int m, int n, vector<vector<int>>& dp) -> int {

    if(m == 0 || n == 0)
        return 0;

    if(s1[m - 1] == s2[n - 1])
    {
        return dp[m][n] = 1 + lcs(s1, s2, m - 1, n - 1, dp);
    }

    if(dp[m][n] != -1)
        return dp[m][n];

    else {
        return dp[m][n] = max(lcs(s1, s2, m, n - 1, dp), lcs(s1, s2, m - 1, n, dp));
    }
}

/*
// Question 2: Find the longest common subsequence
auto longCS(char* s1, char* s2, int m, int n) -> void {
    int LCS_table[m + 1][n + 1];

    for(int i = 0; i <= m; ++i)
    {
        for(int j = 0; j <= n; ++j)
        {
            if(i == 0 || j == 0)
                LCS_table[i][j] = 0;

            else if(s1[i - 1] == s2[j - 1])
                LCS_table[i][j] = 1 + LCS_table[i - 1][j - 1];

            else
                LCS_table[i][j] = max(LCS_table[i - 1][j], LCS_table[i][j - 1]);
        }
    }

    int index = LCS_table[m][n];
    char ret[index + 1];
    ret[index] = '\0';

    int i = m;
    int j = n;

    while(i > 0 && j > 0)
    {
        if(s1[i - 1] == s2[j - 2])
        {
            ret[index - 1] = s1[i - 1];
            i--;
            j--;
            index--;
        }

        else if(LCS_table[i - 1][j] > LCS_table[i][j - 1])
            i--;

        else
            j--;

    }
        cout << ret;
}
*/

// Question 3: Check if two strings are anagram or not
// if empty -> -1
// if true -> 1
//if false -> 0
auto isAnnagram(string s1, string s2) -> int
{
    if(s1.length() != s2.length() || s1.empty() || s2.empty())
        return -1;

    transform(s1.begin(), s1.end(), s1.begin(), [](char a){ return tolower(a);});
    transform(s2.begin(), s2.end(), s2.begin(), [](char a){ return tolower(a);});

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1.compare(s2) == 0)
        return 1;

    return 0;
}

// Question4: Check if two strings are anagram or not without the help of STL
// if empty -> -1
// if true -> 1
//if false -> 0
auto isAnagram(string s1, string s2) -> void {
    array<int, 27> dp = {0};

    if(s1.length() != s2.length())
    {
        cout << -1;
        return;
    }

    for(int i = 0; i < 27; i++)
    {
        dp[s1[i] - 'a']++;
        dp[s2[i] - 'a']--;
    }

    if(all_of(dp.begin(), dp.end(), [](int a){return a != 0;}))
        cout << 0;

    cout << 1;
}

// Question 5: check is a number given is an autobiographical number or not
// An Autobiographical Number is a number N such that the first digit of N
// represents the count of how many zeroes are there in N, the second digit
// represents the count of how many ones are there in N and so on.
auto isAutobiographical(const string s1) -> int {

    int sum{0};
    set<char> s(s1.begin(), s1.end());

    for_each(s.begin(), s.end(), [&](char a){ sum+= (a - '0'); });

    if(s.size() == s1.size())
        return 0;

    return s.size();
}

// Question 6: convert a decimal number to a given base n
auto decToN(int n, int num) -> string {

    char inN[100];
    int i(0);

    while(num != 0) {

        int temp = 0;

        temp = num % n;

        if(temp < 10)
        {
            inN[i] = temp + 48;
            i++;
        }

        else {
            inN[i] = temp + 55;
            i++;
        }

        num /= n;
    }

    reverse(inN, inN + i);
    inN[i] = '\0';

    return inN;
}

// Question 7: Given a string perform the binary operations
/*
A denotes AND operation
B denotes OR operation
C denotes XOR Operation
*/
auto OperationBinaryString(char* s) -> int {
    int ret = s[0] - '0';
    s++;
    while(*s != '\0')
    {
        char p = *s;
        s++;
        if(p == 'A')
        {
            ret &= (*s - '0');
        }

        else if(p == 'B')
        {
            ret |= (*s - '0');
        }

        else if(p == 'C')
        {
            ret ^= (*s - '0');
        }
        s++;
    }

    return ret;
}

// Question 8: Write the algorithm for Binary Search
auto BinarySearch(int arr[], int l, int r, int x) -> int {

    int mid = l + (r - l) / 2;

    if(arr[mid] == x)
        return mid;

    else if(arr[mid] > x)
        return BinarySearch(arr, l, mid - 1, x);

    else if(arr[mid] < x)
        return BinarySearch(arr, mid + 1, r, x);

    else
        return -1;
}

// Question 9: Given a number find the sum of all the numbers whose number of setbits is equal to the number of setbits given
auto bitSum(int n, int set) -> int {
    int sum(0);

    for(int i = 0; i < pow(n, 2) - 1; ++i)
    {
        if(bitset<1024>(i).count() == set)
        {
            sum += i;
        }
    }

    return sum;
}

// Question 10: Given a Number Check if its a bleak Number or not
auto countSetBits(int n) -> int {
    int cnt = 0;

    while(n > 0)
    {
        if(n & 1)
            cnt++;

        n >>= 1;
    }

    return cnt;
}

auto isBleak(int n) -> bool {

    int k = ceil(log2(n * 1.0) * 1.0);

    for(int i = n - k; i <= n; ++i)
    {
        if(i + countSetBits(i) == n)
            return 0;
    }

    return 1;
}


auto IsBleak(int n) -> bool {

    int k = ceil(log2(n * 1.0) * 1.0);

    for(int i = n - k; i <= n; i++)
    {
        if(i + bitset<1024>(i).count() == n)
            return 0;
    }

    return 1;
}


// Question 11: given 3 integers do the following
/*
(a + b), if c = 1
(a / b), if c = 4
(a – b), if c = 2
(a x b), if c = 3
*/

auto choice(int a, int b, int c) -> int {
    switch(c)
    {
        case 1:
            return a + b;
        case 2:
            return a - b;
        case 3:
            return a * b;
        case 4:
            return a / b;
        default:
            return INT_MIN;
    }
}

// Question 12: Find C(n, r)
int combination(int n, int r)
{
    if(r > n-r)
        r= n-r;

    int ans(1);
    for(int i = 1; i < r;++i)
    {
        ans *= n-r+i;
        ans/=i;
    }

    return ans;
}

// Question 13: Given an array, a number and a difference find the number of numbers that are less than the difference when a number in the array is subtracted with the number given
int findCount(int arr[], int n, int num, int diff)
{
    int ret(0);
    for(int i = 0; i < n; ++i)
    {
        if(abs(arr[i] - num) <= diff)
            ret++;
    }

    return ret > 0 ? ret : -1;
}

// Question 14: Given an array, find the number of distinct numbers
int countDistinct(int arr[], int n)
{
    set<int> s(arr,arr+n);

    return s.size();
}

// Question 15: a = the total of all nos [1,n] that are not divisible by m
// b = and the total of all the nos that are divisible by m
// return a-b
int diffSum(int n, int m){
    int a = 0, b = 0;
    for(int i = 1; i <= m; ++i)
    {
        if(i % n != 0)
            a += i;

        else
            b += i;
    }

    return (a > b) ? (a - b): (b - a);
}

// Question 16: given a array of int, find the first and last occurence of a number return the indexes of the first and last occuerence. Use 1-based indexing.
pair<int, int> firstAndLast(vector<int> arr, int n)
{

}

auto main() -> int {

}