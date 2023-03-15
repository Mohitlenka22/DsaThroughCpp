#include <bits/stdc++.h>
using namespace std;

void reverseWords(string &x);
void reverse(string &x, int low, int high);

int main()
{
    string x;
    getline(cin, x);
    reverseWords(x);
    cout << x << endl;
    return 0;
}

void reverseWords(string &x)
{
    int start = 0;
    for (int end = 0; end < x.length(); end++)
    {
        if (x[end] == ' ')
        {
            reverse(x, start, end - 1);
            start = end + 1;
        }
    }
    reverse(x, start, x.length() - 1);
    reverse(x, 0, x.length() - 1);
}

void reverse(string &x, int low, int high)
{
    while (low < high)
    {
        swap(x[low], x[high]);
        low++;
        high--;
    }
}