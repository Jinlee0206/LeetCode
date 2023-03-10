static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0, _max = -2147000000;
        
        for(int i = 0; i<accounts.size(); i++)
        {
            int tmpSum = accumulate(accounts[i].begin(), accounts[i].end(), 0);
            _max = max(_max, tmpSum);
        }
        return _max;
    }
};