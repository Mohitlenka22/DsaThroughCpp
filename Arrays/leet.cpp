#include <bits/stdc++.h>

class Solution {
public:
    vector <int> divisibilityArray(string word, int m) {
        vector <int> div;
        for(int i = 0; i < word.length(); i++) {
            int j = atoi(word.substr(0, i));
            if (j % m == 0){
                div.add(1);
            }
            else{
                div.add(0);
            }
        }
    return div;
    }
};

using namespace std;

int main()
{
    Solution s;
    s.divisibilityArray("998244353", 3);
    cout<<"Hello World";

    return 0;
}