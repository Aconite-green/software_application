#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char *srcFile = "c://users//public//pictures//sample pictures//desert.jpg";
    char *desFile = "c://copydesert.jpg";

    ifstream fsrc(srcFile, ios::in | ios::binary);
    if(!fsrc){
        cout << "open error" << endl;
        return 0;
    }

    ofstream fdes(desFile, ios::out | ios::binary);
    if(!fdes){
        cout << "open eror" << endl;
        return 0;
    }

    int c;
    while((c=fsrc.get()) != EOF){
        fdes.put(c);
    }

    fsrc.close();
    fdes.close();

}