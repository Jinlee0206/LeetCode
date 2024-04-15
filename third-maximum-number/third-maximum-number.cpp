class Solution {
public:
    int thirdMax(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_set<int> taken;
        
        for(int i = 0; i< nums.size(); i++)
        {
            if(taken.count(nums[i])) continue;
            
            if(minHeap.size() == 3)
            {
                if(minHeap.top() < nums[i])
                {
                    taken.erase(minHeap.top());
                    minHeap.pop();
                    
                    minHeap.push(nums[i]);
                    taken.insert(nums[i]);
                }
            }
            else
            {
                minHeap.push(nums[i]);
                taken.insert(nums[i]);
            }
        }
        
        if(minHeap.size() == 1)
        {
            return minHeap.top();
        }
        else if(minHeap.size() == 2)
        {
            int firstNum = minHeap.top();
            minHeap.pop();
            return max(firstNum, minHeap.top());   
        }
        return minHeap.top();
    }
};