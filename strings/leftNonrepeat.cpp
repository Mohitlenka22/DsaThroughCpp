#include <bits/stdc++.h>
using namespace std;

int NonLeftRepeat(const string &str);

#define CHAR 256

int main()
{
    string str;
    cin >> str;
    cout << NonLeftRepeat(str);

    return 0;
}

int NonLeftRepeat(const string &str)
{
    vector<int> fIL(CHAR, -1);
    for (int i = 0; i < str.length(); i++)
    {
        if (fIL[str[i]] == -1) // Element is seen first time.
            fIL[str[i]] = i;
        else
            fIL[str[i]] = -2; // Element is seen before & repeated.
    }
    int res = INT_MAX;
    for (int i = 0; i < CHAR; i++)
    {
        if (fIL[i] >= 0)
            res = min(res, fIL[i]);
    }
    return res;
}