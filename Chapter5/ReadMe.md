# CH5 Theory problems
---
> ## 7.char 형 변수 c가 선언되어 있을 때, 참조 변수 r의 선언 중 틀린 것은?
>```C++
>//(1) 
>char & r = c;
>//(2)
>char r & = c;
>//(3)
>char& r = c;
>//(4)
>char &r = c;
```

## __정답 :__
(2) : 참조 연산자의 순서가 변수 보다 앞에 가있어야 한다.


---
> ## 12.비슷하게 생긴 다음 두 함수가 있다.
>```C++
>int& big1(int a, int b){
>    if(a > b) return a;
>    else return b;
>}
>
>int& big2(int &a, int &b){
>    if(a > b) return a;
>    else return b;
>}
>```
> ## 다음코드를 실행하였을 때, x, y의 값이 어떻게 변하는지 예측하고, 그 이유를 설명하라
>```C++
>int x=1, y=2;
>int&z = big1(x, y);
>z = 100;
>int &w = big2(x, y);
>w = 100;
>```

## 정답 :

```bash
x = 1
y = 100
```
big1의 참조는 아무런 영향을 끼치지 못함, big2는 참조연산자로서 동작해서 값을 바꿈

---

> ## 15. 다음 클래스에 대해 물음에 답하여라
>```C++
>class MyClass{
>        int size;
>        int *element;
>    public:
>        MyClass(int size){
>            this->size = size;
>            element = new int [size];
>            for(int i=0; i<size; i++) element[i] = 0;
>        }
>};
>```
>### (1) 적절한 소멸자를 작성하라.
>### (2) 컴파일러가 삽입하는 디폴트 복사 생성자 코드는 무엇인가?
>### (3) MyClass에 깊은 복사를 실행하는 복사 생성자 코드를 작성하라.

## 정답 :
```C++
class MyClass{
       int size;
        int *element;
    public:
        MyClass(int size){
            this->size = size;
            element = new int [size];
            for(int i=0; i<size; i++) element[i] = 0;
        }
        //(1)
        ~MyClass(){
            delete [] element;
        }
        //(2)
        MyClass(MyClass &MyClass){
            this->size = MyClass.size;
            this->element = MyClass.element;
        }
        //(3)
        MyClass(MyClass &MyClass){
            this->size = MyClass.size;
            this->element = new int [MyClass.size];
        }
        
}
```



