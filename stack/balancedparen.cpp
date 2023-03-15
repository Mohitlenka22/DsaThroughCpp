#include <bits/stdc++.h>
using namespace std;

bool isMatched(char a, char b);
bool validParenthesis(const string &str);

int main()
{
    string str;
    cin >> str;
    cout << validParenthesis(str);

    return 0;
}

bool isMatched(char a, char b)
{
    return ((a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}'));
}

bool validParenthesis(const string &str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
            s.push(str[i]);
        else
        {
            if (s.empty() == true)
                return false;
            else if (isMatched(s.top(), str[i]) == false)
                return false;
            else
                s.pop();
        }
    }
    return (s.empty() == true);
}