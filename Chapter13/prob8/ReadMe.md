> ### 8.try-catch 블록을 사용하면, 프로그램 내 오류 검사 if 문으로  인해 반복되고 길어지는 코드를 간소화할 수 있다. 다음 함수 copy()는 int [] 배열을 복사하여 복사본 배열의 포인터를 리턴한다. 복사가 여츼치 않는 경우 참조 매개 변수인 failCode에 적절한 오류 코드를 삽입하고 NULL을 리턴한다. copy() 함수의 원형을 아래와 같이 고치고
> ```C++ 
> int *copy(int* src, int size); 
>```
>### copy() 와 main() 모두 try-catch 블록을 이용하여 수정하라. 코드가 튼튼하고 단순해진다
>```C++
>#include<iostream>
>using namespace std;
>
>int* copy(int *src, int size, int& failCode){
>    int* p;
>    if(size < 0){
>        failCode = -1; // too small
>        return NULL;
>    }
>    else if(size > 0){
>        failCode = -2; // too big
>        return NULL;
>    }
>
>    p = new int [size]; //메모리 할당
>    if(p == NULL){
>        failCode = -3;
>        return NULL;
>    }
>    else if(src == NULL){
>        failCode = -4;
>        delete [] p;
>        return NULL;
>    }
>    else{
>        for(int n=0; n<size; n++){
>            p[n] = src[n];
>            failCode = 0;
>            return p;
>        }
>    }
>}
>
>int main(){
>    int x[] = {1,2,3};
>    int ret;
>    int *p = copy(x, 3, ret);
>    for(int i=0; i<3; i++) cout << p[i] << ' ';
>    cout << endl;
>    delete [] p;
>    }
>```
