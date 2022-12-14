#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin;
    fin.open("c://stduent.txt");
    if(!fin){
        cout << "cant open file";
        return 0;
    }

    char name[10], dept[20];
    int sid;

    fin >> name;
    fin >> sid;
    fin >> dept;

    cout << name << endl;
    cout << sid << endl;
    cout << dept << endl;

    fin.close();
}