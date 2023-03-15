#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(const string &str);

int main()
{
    string s;
    cout << "Enter String: " << endl;
    getline(cin, s);
    if (isPalindrome(s))
        cout << "It is Palindrome. " << endl;
    else
        cout << "It is not Palindrome. " << endl;

    return 0;
}

bool isPalindrome(const string &str)
{
    int i = 0, j = str.length() - 1;
    while (i < j)
    {
        if (str[i] != str[j])
            return false;
        i++;
        j--;
    }
    return true;
}