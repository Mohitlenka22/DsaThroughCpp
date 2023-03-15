#include <bits/stdc++.h>
using namespace std;

bool isAnagram(const string &s1, const string &s2);
#define CHAR 256

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << isAnagram(s1, s2);
    return 0;
}

bool isAnagram(const string &s1, const string &s2)
{
    if (s1.length() != s2.length())
        return false;
    // sort(s1.begin(), s1.end());
    // sort(s2.begin(), s2.end());
    int count[CHAR] = {0};
    for(int i = 0; i < s1.length(); i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i = 0; i < CHAR; i++)
    {
        if (count[i] != 0)
            return false;
    }

    // return (s1 == s2);
    return true;
}
