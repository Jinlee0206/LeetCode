class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int cnt = 0;
        vector<int> tmp = heights;
        sort(tmp.begin(), tmp.end());
        for(int i = 0; i< heights.size(); i++) if(heights[i] != tmp[i]) cnt++;
        return cnt;
    }
};