#include <bits/stdc++.h>
using namespace std;

struct Mystack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int val = v.back();
        v.pop_back();
        return val;
    }
    bool isempty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
};

int main()
{
    Mystack s;
    s.push(22);
    s.push(23);
    s.push(100);
    cout << s.pop() << endl;
    cout << s.peek() << endl;
    cout << s.isempty() << endl;
    cout << s.size();
    return 0;
}