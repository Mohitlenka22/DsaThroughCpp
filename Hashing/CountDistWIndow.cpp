#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    for(int i=0;i<=n-k;i++)
    {
        int count = 0;
        for(int j=0;j<k;j++)
        {
            bool flag = false;
            for(int p=0;p<j;p++)
            {
                if(a[i+j]==a[i+p])
                    {flag=true;break;}
            }
            if(flag==false)
                count++;
        }
        cout << count << " ";
    }
    return 0;
}

// 1 2 3 4 5 6 
//1 2 3 4 , 2 3 4 5 , 3 4 5 6