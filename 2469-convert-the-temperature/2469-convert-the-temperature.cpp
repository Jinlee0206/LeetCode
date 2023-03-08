static const int _=[](){ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin, fahrenheit;

        kelvin = celsius + 273.15;
        fahrenheit = celsius * 1.80 + 32.00;

        ans.push_back(kelvin);
        ans.push_back(fahrenheit);
        return ans;
    }
};