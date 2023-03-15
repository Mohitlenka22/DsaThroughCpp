#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    unordered_map <int, int> h;
    for(int i=0;i<k;i++)
    {
        h[a[i]]++;
    }
    for (int i = k; i < n; i++)
    {
        h[a[i - k]]--;
        if (h[a[i - k]] == 0)
            h.erase(a[i - k]);
        if (h.find(a[i]) == h.end())
        {
            h[a[i]]++;
        }
        else{
            h[a[i]]++;
        }
        cout << h.size() << endl;
    }

    return 0;
}

// 1 2 3 4 5 6 
//1 2 3 4 , 2 3 4 5 , 3 4 5 6