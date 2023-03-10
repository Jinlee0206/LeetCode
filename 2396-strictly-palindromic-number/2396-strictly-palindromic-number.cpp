class Solution {
public:
    bool isPalindrome(int b, int n)
    {
        string str = "";
        while(n)
        {
            str += to_string(n % b);
            n /= b; 
        }
        
        for(int i = 0; i<str.size(); i++)
        {
            if(str[i] != str[str.size()-1 - i]) return false;
        }
        return true;
    }
    
    bool isStrictlyPalindromic(int n) {
        for(int i = 2; i<n; i++)
        {
            if(!isPalindrome(i,n)) return false;
        }
        return true;
    }
};