static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    const int INF = 2147000000;

    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i = 1; i<= n;  i++)
        {
            if(i%3 == 0 && i%5 == 0)
            {
                answer.push_back("FizzBuzz");
            }
            else if(i % 3 == 0)
            {
                answer.push_back("Fizz");
            }
            else if (i % 5 ==0)
            {
                answer.push_back("Buzz");
            }
            else answer.push_back(to_string(i));
        }
        return answer;
    }
};