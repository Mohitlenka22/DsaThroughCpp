#include <bits/stdc++.h>
using namespace std;

class TwoStacks
{
    int *arr, top1, top2, cap;

public:
    TwoStacks(int cap)
    {
        this->cap = cap;
        arr = new int[cap];
        top1 = -1;
        top2 = cap;
    }
    void push1(int x)
    {
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
    }
    void push2(int x)
    {
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
    }

    int pop1()
    {
        int res = arr[top1];
        top1--;
        // delete (arr[top1]);
        return res;
    }
    int pop2()
    {
        int res = arr[top2];
        top2++;
        // delete (arr[top2]);
        return res;
    }
    int size1()
    {
        return top1 + 1;
    }
    int size2()
    {
        return (cap - top2);
    }
};

int main()
{
    TwoStacks s(7);
    s.push1(2);
    s.push1(3);
    s.push1(4);
    s.push2(5);
    s.push2(3);
    s.push2(6);
    s.push2(1);

    cout << s.size1() << endl;
    cout << s.size2() << endl;

    cout << s.pop1() << endl;
    cout << s.pop1() << endl;

    cout << s.pop1() << endl;
    cout << s.pop2() << endl;

    cout << s.size1() << endl;
    cout << s.size2() << endl;

    return 0;
}

// 2 3 4 1 6 3 5
// 0 1 2 3 4 5 6
// 2 < 4-1