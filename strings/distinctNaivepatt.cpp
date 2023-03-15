// It is same as previous algorithm but it is guarenteed that pattern consists of distinct char's.

#include <bits/stdc++.h>
using namespace std;

int NaivePattrn(string &txt, string &patt);

int main()
{
    string txt, patt;
    getline(cin, txt);
    getline(cin, patt);
    NaivePattrn(txt, patt);

    return 0;
}

int NaivePattrn(string &txt, string &patt)
{
    int n = txt.length();
    int m = patt.length();

    for (int i = 0; i <= n - m;)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (patt[j] != txt[i + j])
                break;
        }
        if (j == m)
            cout << i << " ";
        if (j == 0)
            i++;
        else
            i += j;
    }
}