#include <iostream>
using namespace std;

// int main(){
//     // print the any table with for loop
//     int table_number, i;
//     cout <<"Enter number for printing table: ";
//     cin >> table_number;
//     for(i=1;i<=10;i++){
//         cout<<table_number<<" X "<<i <<" = "<< (long)table_number*i <<endl;
//     }
//     return 0;
// }


// int main()
// {
//     // print first n natural numbers
//     int n = 4, sum = 0, i = 1;
//     for (i = 1; i <= n; i++)
//     {
//         if (i % 2 == 0)
//         {
//             sum += i;
//         }
//     }
//     cout << "SUM is: " << sum << endl;
//     return 0;
// }

// reverse couting
// int main(){
//     int N=10,i;
//     for(i=N;i >= 1; i--){
//         cout << i <<endl;
//     }
//     return 0;
// }

// print pattern
// *  
// **  
// ***  
// **** 

// int main(){
//     int N;
//     cout << "Enter the number of rows for the diamond (odd number): ";
//     cin >> N;

//     // Upper half of diamond
//     for (int i = 1; i <= N; i += 2) {
//         for (int j = 1; j <= (N - i) / 2; j++)
//             cout << " ";  // Print spaces
//         for (int j = 1; j <= i; j++)
//             cout << "*";  // Print stars
//         cout << endl;
//     }

//     // Lower half of diamond
//     for (int i = N - 2; i >= 1; i -= 2) {
//         for (int j = 1; j <= (N - i) / 2; j++)
//             cout << " ";  // Print spaces
//         for (int j = 1; j <= i; j++)
//             cout << "*";  // Print stars
//         cout << endl;
//     }

// }

// int main(){
//     int i=1,N;
//     cin >> N;
//     while(i <= N){
//         cout << i << " ";
//         i++;
//     }
//     cout <<endl;
//     return 0;
// }

bool isPlaindrome(int num){
    int original = num, reversed = 0;
    while(num > 0){
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return original == reversed;
}

int main(){
   int num;
   cin >> num;
   if(isPlaindrome(num))
   cout << num << " is a Plaindrom number"<<endl;
   else 
    cout << num << " is not a Plaindrome number"<<endl;
    return 0;
}
