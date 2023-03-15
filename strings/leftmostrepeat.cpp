#include <bits/stdc++.h>
using namespace std;

#define CHAR 256

int leftMostRepeat(const string &str);

int main()
{
    string str;
    cin >> str;
    cout << leftMostRepeat(str);

    return 0;
}

int leftMostRepeat(const string &str)
{
    // bool visited[CHAR];
    // fill(visited, visited + CHAR, false);
    vector<bool> visited(CHAR, false);
    int res = -1;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (visited[str[i]])
            res = i;
        else
        {
            visited[str[i]] = true;
        }
    }
    return res;
}