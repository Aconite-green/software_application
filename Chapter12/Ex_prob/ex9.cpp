#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char *srcFile = "c://tulips.jpg";
    char *desFile = "c://copytulips.jpg";

    ifstream fsrc(srcFile, ios::in | ios::binary);
    ofstream fdes(desFile, ios::out | ios::binary);
    char buf[1024];
    while(!fsrc.eof()){
        fsrc.read(buf, 1024);
        int n = fsrc.gcount();
        fdes.write(buf, n);
    }

    fsrc.close();
    fdes.close();
}