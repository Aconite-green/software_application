#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("c://windows//system/ini");
    if(!fin){
        cout << "open error" << endl;
        return 0;
    }

    char buf[81];
    while(true){
        fin.getline(buf, 81);
        if(fin.eof()) break;
        cout << buf << endl;
    }

    fin.close();
}