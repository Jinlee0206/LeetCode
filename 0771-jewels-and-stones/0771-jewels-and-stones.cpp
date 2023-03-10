static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<char> jew;
        int cnt = 0;
        
        for(int i = 0; i<jewels.size(); i++) jew.push_back(jewels[i]);
        
        for(int i = 0; i < jew.size(); i++)
        {
            for(int j = 0; j <stones.size(); j++)
            {
                if(jew[i] == stones[j]) cnt++;
            }
        }
        return cnt;
    }
};