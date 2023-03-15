#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.pop();
    // cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;

    return 0;
}
