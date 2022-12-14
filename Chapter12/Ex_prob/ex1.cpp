#include<iostream>
#include <fstream>
using namespace std;

int main(){
    char name[10], dept[20];
    int sid;

    cout<< "name>> ";
    cin >> name;
    cout <<"school num>> ";
    cin >> sid;
    cout << "major>> ";
    cin >> dept;

    ofstream fout("c://student.txt");
    if(!fout){
        cout << "c://student.txt 파일을 열 수 없다";
        return 0;
    }

    //파일 쓰기
    fout << name << endl;
    fout << sid << endl;
    fout << dept << endl;

    fout.close();   //file close
}


