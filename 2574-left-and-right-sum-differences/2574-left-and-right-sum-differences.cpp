class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> leftSum(nums.size()), rightSum(nums.size());
        
        int ls = 0, rs = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            leftSum[i] = ls;
            ls += nums[i];
        }
        
        for(int i = nums.size() -1 ; i >= 0; i--)
        {
            rightSum[i] = rs;
            rs += nums[i];
        }
        
        for(int i = 0; i < leftSum.size(); i++)
        {
            leftSum[i] = abs(leftSum[i] - rightSum[i]);
        }
        return leftSum;
    }
};