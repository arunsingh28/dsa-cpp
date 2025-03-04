#include <iostream>
using namespace std;

// find the largest prime number in range of (2 - n)
int findMaxPrime(int n){
    int max,i;
    for(i=2; i <= n-1; i++){
        if(n%i == 0){
           max = i;
        }else{
            
        }
    }
    return max;
}

// check number is prime or not
int main(){
    int N,i;
    bool isPrime = true;
    cout << "Enter the number: ";
    cin >> N;
    for(i=2; i*i <= N; i++){
        if(N%i == 0){
            isPrime = false;
            break;
        } else {
           isPrime = true;
        }
    }
    if(isPrime == true){
        cout << N <<" is a prime number\n";
        cout << "Bigest prime number is "<< findMaxPrime(N) <<endl;
    }else{
        cout << N <<" is not prime number\n";
    }
    return 0;
}
