#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char password[11];
    cout << "if you want to exit type password " << endl;
    while (true) {
        cout << "password>> ";
        cin >> password;
        if(strcmp(password, "C++") == 0) {
            cout << "exit program" << endl;
            break;
        }
       else cout << "wrong password" << endl;
    }
}
