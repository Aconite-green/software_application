#include <iostream>
using namespace std;

int main(){
    cout << "put your address";

    char address[100];
    cin.getline(address, 100);

    cout << "address is " << address << "\n";
}