#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char choice;
    cout << "Enter first digit: ";
    cin >> a;
    cout << "Enter second digit: ";
    cin >> b;
    cout << "\na. Sum\n";
    cout << "b. Sub\n";
    cout << "c. Division\n";
    cout << "d. Multipication\n";
    cout << "\nChoice what operation you want : ";
    cin >> choice;
    switch (choice)
    {
    case 'a':
    case 'A':
        cout << (a + b) << endl;
        break;
    case 'b':
    case 'B':
        cout << (a - b) << endl;
        break;
    case 'c':
    case 'C':
        cout << (a / b) << endl;
        break;
    case 'd':
    case 'D':
        cout << (a * b) << endl;
        break;
    default:
        cout << "\n\nWrong choice";
        break;
    }
    return 0;
}