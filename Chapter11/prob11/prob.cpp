#include<iostream>
#include<string>
using namespace std;

istream& pos(istream& ins){
    cout << "μμΉλ? ";
    return ins;
}

int main(){
    int x, y;
    cin >> pos >> x;
    cin >> pos >> y;
    cout << x << ',' << y << endl;
}