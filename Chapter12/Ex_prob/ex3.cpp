#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char *file = "c://windows//system.ini";
    ifstream fin(file);
    if(!fin){
        cout << file << " 열기 오류" << endl;
        return 0;
    }
    int count = 0;
    int c;
    while((c=fin.get() != EOF)){
        cout << (char) c;
        count++;     
    }
    
    cout << "read byte " << count << endl;
    fin.close();    // file close
}