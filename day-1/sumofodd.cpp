#include <iostream>
using namespace std;


// print sum of all the odd numbers from 1 to N
int main(){
    int N,i,sum=0;
    cout << "Enter the nth number: ";
    cin >> N;
    for(i=1; i <= N; i++){
        if(i%2 != 0){
            cout << "odd:"<<i<<endl;
            sum+=i;
        }
    }
    cout << "Sum of the nth odd number is: "<<sum<<endl;
    return 0;
}