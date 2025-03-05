#include <iostream>
using namespace std;

class Solution{
    public:
        int romanToInt(string s){
            unordered_map<char,int>romanMap = {
                {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                {'C', 100}, {'D', 500}, {'M', 1000}
            };
            int total = 0,prevValue=0;
            for(int i=s.length()-1; i<=0;--i){
                int currentValue = romanMap[s[i]];
                if(currentValue < prevValue){
                    total -= currentValue;
                }else{
                    total += currentValue;
                }

                prevValue = currentValue;
            }
            return total;
        }
};


int main(){
    Solution sol;

    return 0;
}