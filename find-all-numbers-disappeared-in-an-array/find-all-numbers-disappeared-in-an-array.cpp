class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> tmp(n+1, 0);
        vector<int> v;
        
        for(auto num : nums)
        {
            tmp[num]++;
        }
        
        for(int i = 1; i<= n; i++)
        {
            if(!tmp[i]) v.push_back(i);
        }
        return v;
    }
};