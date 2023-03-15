#include <bits/stdc++.h>
using namespace std;
int PairSum(vector<int> v, int i, int j, int sum);

int main()
{
    int n, sum;
    cin >> n >> sum;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int i = 0, j = n - 1;
    int res = PairSum(v, i, j, sum);
    if (res)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

int PairSum(vector<int> v, int i, int j, int sum)
{
    while (i < j)
    {
        if (v[i] + v[j] == sum)
            return true;
        else if (v[i] + v[j] > sum)
            j--;
        else
            i++;
    }
    return false;
}