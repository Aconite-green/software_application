# CH10 Theory problems
---

> ## 6.다음 두 함수들을 일반화한 제네릭 함수를 작성하라
>```C++
>void insert(int a, int b[], int index){
>    b[index] = a;
>}
>void insert(char a, char *b, int index){
>    *(b+index) = a;
>}
>```


## __정답 :__
```C++
template <typename T> T insert(T a, T b[], T index){
    b[index] = a;
}
```
---

> ## 12.템플릿 클래스 Container를 작성하고자 한다.
>```C++
>template <cass T> cass Container{
>        //T 타입의 포인터 P를 선언하라
>        //배열의 크기를 나타내는 변수 size를 선언하다
>    public:
>        Container(int n); // 멤버 변수 p에 n개의 동적 배열을 할당받는 생성자
>        ~Contatiner();
>        void set(int index, T value){p[index] = value;} //index 위치에 value 저장
>        T get(int index); // index 위치와 값 리턴
>};
>```
>### (1) 빈칸을 적절하게 채워라
>### (2) 생성자를 작성하라
>### (3) 소멸자를 작성하라
>### (4) get()을 작성하라
>### (5) char 타입의 문자만 저장 가능한 Container 객체 c를 생성하는 선언문을 작성하라
>### (6) 문제 (5)에서 생성한 객체 c에 set() 함수를 이용하여 알파벳 'a'~'z'를 삽입하고, get() 함수를 이용하여 반대순으로 화면에 출력하는 main() 함수를 >작성하라

## __정답 :__
```C++
template <cass T> 
cass Container{
        T p*;    //T 타입의 포인터 P를 선언하라
        int size;        //배열의 크기를 나타내는 변수 size를 선언하다
    public:
        Container(int n); // 멤버 변수 p에 n개의 동적 배열을 할당받는 생성자
        ~Contatiner();
        void set(int index, T value){p[index] = value;} //index 위치에 value 저장
        T get(int index); // index 위치와 값 리턴
};
template <class T>
void Container<T>::Container(int n){
    int arr[];
    p = arr[];
}
```

---

> ## 15. STL 의 vertor 클래스를 활용하는 코드이다. 다음 빈칸을 채워라
```C++
// double 타입의 벡터 v 생성
v.push_back(3.1);
v.push_back(4.1);

//for 문을 이용하여 벡터 v의 모든 값을 출력하라

```

## 정답 :

```C++
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <double> v;
    v.push_back(3.1);
    v.push_back(4.1);

    vector<double>iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << ' ';
        cout << '\n';
    }
}
```
