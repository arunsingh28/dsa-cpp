#include <iostream>
using namespace std;

/*
    Built-in (Primitive) Data Types
    integer type - size (bytes) 
            short  2 
            int 4
            long 4-8
            long long 8
            unsigned int 4
    decimal
            float  4
            double 8
            long double 12-16
    charcter
            char 1
            wchar_t // for unicode values like L'Ω'
    boolean
            bool 1  (1 for true 0 for false)

    Derived Data Types
    1.  Arrays
    2.  Pointers
    3.  References
*/

int main(){
    // char name = 'A';
    // cout << name << endl;

    // typecasting
    // double price = 102.2;
    // int newPrice = (char)price;
    // cout << newPrice << endl;

    int age;
    cin >> age;
    cout << "Hi your age is "<< age <<endl;

    return 0;
}