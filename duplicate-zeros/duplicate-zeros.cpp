class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> v;
        int cnt = 0;
        for(int i = 0; ; i++)
        {
            if(i > arr.size() - cnt - 1) break;
            if(arr[i] != 0) {
                v.push_back(arr[i]);
            }
            else
            {
                v.push_back(arr[i]);
                v.push_back(arr[i]);
                cnt++;
            }
        }
        if(v.size() > arr.size()) v.pop_back();
        arr = v;
    }
};