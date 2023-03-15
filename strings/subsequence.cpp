#include <bits/stdc++.h>
using namespace std;

bool Subseq(const string &s1, int n, const string &s2, int m);

/* subsequence means substrings obtained by removing 0 or more characters from given string with same order
sibstrings may or may not be contiguos */

int main()
{
    string s1, s2;
    cout << "Enter Strings s1 & s2 : " << endl;
    cin >> s1 >> s2;
    // getline(cin, s2);
    // cout << s1 << s1.length() << s2 << s2.length();
    if (Subseq(s1, s1.length(), s2, s2.length()))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}

bool Subseq(const string &s1, int n, const string &s2, int m) // Pass reference for unwanted copying of string.
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
        i++;
    }
    // cout << j;
    return (j == m);
}

/*   i
     |
s1 = aabbagc
s2 = agc
     |
     j
*/