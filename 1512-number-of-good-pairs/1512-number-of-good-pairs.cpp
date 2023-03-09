static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int gp = 0;
        for(int i = 0; i< nums.size() - 1; i++)
        {
            for(int j= i+1; j< nums.size(); j++)
            {
                if(nums[i]== nums[j]) gp++;
            }
        }
        return gp;
    }
};