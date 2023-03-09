static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> um;
        int cnt= 0;
        
        for(auto i : nums) um[i]++;
        
        for(auto idx : um)
        {
            if(idx.second > 1) cnt += idx.second * (idx.second-1) / 2; 
        }
        return cnt;
    }
};