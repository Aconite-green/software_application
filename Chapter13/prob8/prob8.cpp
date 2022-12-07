#include<iostream>
using namespace std;

int* copy(int *src, int size){
    int* p;
    if(size < 0){
        throw "too small"; // too small
        return NULL;
    }
    else if(size > 0){
        throw "too big"; // too big
        return NULL;
    }

    p = new int [size]; //메모리 할당
    if(p == NULL){
        throw "memory short"; // memory short
        return NULL;
    }
    else if(src == NULL){
        throw "NULL source"; //NULL source
        delete [] p;
        return NULL;
    }
    else{
        for(int n=0; n<size; n++){
            p[n] = src[n];  //정상적으로 복사
            return p;
        }
    }
}

int main(){
    int x[] = {1,2,3};
    try{
        int *p = copy(x, 3);
        for(int i=0; i<3; i++) cout << p[i] << ' ';
        cout << endl;
        delete [] p;
    }
    catch(char *s){
        cout << "예외 발생: " << s << '\n';
    }
    
    
    
    }