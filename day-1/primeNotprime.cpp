#include <iostream>
using namespace std;

// check number is prime or not
int main(){
    int N,i;
    bool isPrime = true;
    cout << "Enter the number: ";
    cin >> N;
    for(i=2; i <= N-1; i++){
        if(N%i == 0){
            isPrime = false;
            break;
        } else {
           isPrime = true;
        }
    }
    if(isPrime == true){
        cout << N <<" is a prime number\n";
    }else{
        cout << N <<" is not prime number\n";
    }
    return 0;
}