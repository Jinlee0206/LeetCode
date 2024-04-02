static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while(true)
        {
            if (num == 0) break;   
            
            if(num & 1)
            {
                num -=1;
            } else num /= 2;
            ans++;
        }
        return ans;
    }
};