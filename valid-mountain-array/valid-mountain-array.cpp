#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool flag = true;
        int idx, mx;
        for(int i = 0; i< arr.size(); i++)
        {
            if(mx < arr[i])
            {
                mx = arr[i];
                idx = i;
            }
        }
        
        if(idx == 0 || idx == arr.size()-1) return false;
        
        for(int i = 0; i< idx - 1; i++)
        {
            if(arr[i] >= arr[i+1]) flag = false;
        }
        
        for(int i = idx; i < arr.size()-1; i++)
        {
            if(arr[i] <= arr[i+1]) flag = false;
        }
        
        return flag;
    }
};