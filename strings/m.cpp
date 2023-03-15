#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int num = 0, p = 0;
        vector<int> v;
        while (digits.empty() == false)
        {
            num = num + (((int)pow(10, p)) * (digits.back()));
            digits.pop_back();
            p++;
        }
        num++;
        while (num > 0)
        {
            v.push_back(num % 10);
            num = num / 10;
        }
        reverse(v.begin(), v.end());
    }
};

int main()
{
    Solution s;
    vector<int> v;
    v.push_back(9);
    // v.push_back(2);
    // v.push_back(4);
    s.plusOne(v);

    return 0;
}