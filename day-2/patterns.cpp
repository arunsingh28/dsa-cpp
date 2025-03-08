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

class Solution
{
public:
    bool isPalindrom(int x)
    {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        int reversed = 0, original = x;
        while (x > 0)
        {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        return reversed == original;
    }

public:
    void numberPattern()
    {
        int num = 1, n = 3;
        char c = 'A';
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << c << " ";
                c = 65 + num++;
            }
            cout << endl;
        }
    }

public:
    void starPattern()
    {
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
            cout << endl;
        }
    }

public:
    void intPattern()
    {
        for (int i = 1; i <= 4; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j;
            }
            cout << endl;
        }
    }

public:
    void backwardLoop()
    {
        for (int i = 0; i <= 4; i++)
        {
            for (int j = i; j > 0; j--)
            {
                cout << j;
            }
            cout << endl;
        }
    }

public:
    void floydTriangle()
    {
        char ch = 'A';
        for (int i = 1; i <= 4; i++)
        {
            for (int j = i; j > 0; j--)
            {
                ch = 64 + j;
                cout << ch << " ";
            }
            cout << endl;
        }
    }

public:
    void intvertedTriangle()
    {
        for (int i = 1; i <= 5; i++)
        {
            for (int j = 1; j <= i; j++){
                cout <<" ";
            }
            for(int j = 1; j <= (5-i); j++){
                cout << i;
            }
            cout <<endl;
        }
    }

  public:
    int breakNumber(int n){
        int reversed = 0;
        while(n > 0){
           int digit = n %10;
           n/= 10;
           reversed += digit;
        }
        return reversed;
    }  
};

int main()
{
    Solution sol;
    // cout << sol.isPalindrom(-121) <<endl;
    // sol.numberPattern();
    // sol.starPattern();
    // sol.intvertedTriangle();
    cout << sol.breakNumber(19) <<endl;
    return 0;
}
