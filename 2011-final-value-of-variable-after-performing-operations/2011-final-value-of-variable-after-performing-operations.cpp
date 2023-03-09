static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        
        for(int i= 0; i< operations.size(); i++)
        {
            string str = operations[i];
            char c;
            if(operations[i][0] != 'X') c = operations[i][0];
            else c= operations[i][2];
            switch(c)
            {
                case '+':
                    ++x;
                    break;
                case '-':
                    --x;
                    break;
            }
        }
        return x;
    }
};