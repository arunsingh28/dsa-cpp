#include <iostream>
using namespace std;


// print sum of all the odd numbers from 1 to N
int main(){
    int N,i,sum=0;
    cout << "Enter the nth number: ";
    cin >> N;

    for(i=1; i <= N; i++){
        if(i%2 != 0){
            sum += i;
        }
    }

    // while(i <= N){
    //     if(i%2 !=0){
    //         sum += i;
    //     }
    //     i++;
    // }

    // do {
    //     if(i%2 != 0){
    //         sum += i;
    //     }
    //     i++;
    // } while( i <= N);

    cout << "Sum of the nth odd number is: "<<sum<<endl;
    return 0;
}