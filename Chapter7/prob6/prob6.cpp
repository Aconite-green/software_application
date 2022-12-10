#include<iostream>
using namespace std;

class Matrix{
        int matrix[4];
    public:
        Matrix();
        Matrix(int a, int b, int c, int d);
        void show();
        Matrix operator>> (int mat[4]);
        Matrix operator<< (int mat[4]);

};

Matrix::Matrix(){
    matrix[4] = {0};
}
Matrix::Matrix(int a, int b, int c, int d){
    matrix[0] = a;
    matrix[1] = b;
    matrix[2] = c;
    matrix[3] = d;
};

Matrix Matrix::operator>>(int mat[4]){
for(int i = 0; i<4; i++){
    for(int j = 3; j=0; j--){
        mat[i] = matrix[j];
    }
}
}

Matrix Matrix::operator<<(int mat[4]){
for(int i = 0; i<4; i++){
    matrix[i] = mat[i];
}
}

void Matrix::show(){
    cout << "Matrix = { ";
    for(int i=0; i <4; i++){
        cout << matrix[i] << ' ';
    }
    cout << '}';

}



int main(){
Matrix a(4, 3, 2, 1);
Matrix b();
int x[4], y[4] = {1,2,3,4};
a >> x; // a의 각 원소를 배열 x에 복사, x[]는 {4,3,2,1}
b << y; // 배열 y의 운소 값을 b의 각 원소에 설정

for(int i = 0; i<4; i++) cout << x[i] << ' '; // x[] 츨력 
cout << endl;
b.show();
}