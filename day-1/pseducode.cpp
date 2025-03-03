#include <iostream>
using namespace std;

int main() {
 int result = 1, i;
 for(i=1; i < 5; i++){
    result *=i;
 }
 cout << "Factoril is "<< result << "\n";
 return 0;
}

