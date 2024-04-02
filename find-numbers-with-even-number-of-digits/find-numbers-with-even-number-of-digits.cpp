static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int answer = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            int cnt = 0;
            while(true)
            {
                if(nums[i] == 0) break; 
                cnt++;
                nums[i] /= 10;
            }
            if(cnt % 2 == 0) answer++;
        }
        return answer;
    }
};