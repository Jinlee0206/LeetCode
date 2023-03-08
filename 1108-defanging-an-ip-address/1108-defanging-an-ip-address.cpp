static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    string defangIPaddr(string address) {
        string tmp = "";
        
        for(int i = 0; i< address.size(); i++)
        {
            if(address[i] == '.')
            {
                tmp += "[.]";
            }
            else tmp += address[i];
        }
        return tmp;
    }
};