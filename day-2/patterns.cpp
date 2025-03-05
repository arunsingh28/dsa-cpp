#include <iostream>
using namespace std;

/*

*
**
***
****
*****
******

*/
// int main(){
//     int i,j;
//     for(i = 26; i >= 1; i--){
//         char ch = 'A';
//         for(j=1; j<= i; j++){
//             cout << ch;
//             ch += 1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

class Solution{
    public:
        bool isPalindrom(int x){
            if(x <0 || (x % 10 == 0 && x != 0)){
                return false;
            }
            int reversed = 0, original = x;
            while(x > 0){
                int digit = x % 10;
                reversed = reversed * 10 + digit;
                x/=10;
            }
            return reversed == original;
        }
    public:
        void numberPattern(){
            int num = 1, n = 3;
            char c = 'A';
            for(int i = 0; i< n; i++){
                for(int j=0; j < n; j++){
                    cout << c << " ";
                    c = 65 + num++;
                }
                cout <<endl;
            }
        }
        

};


int main(){
    Solution sol;
    cout << sol.isPalindrom(-121) <<endl;
    sol.numberPattern();
    return 0;
}

