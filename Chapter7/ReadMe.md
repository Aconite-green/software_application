# CH7 Theory problems
---

> ## 3.다음 함수 중 한 프로그램에 같이 선언할 수 없는 함수 2개를 골라라
>```C++
>//(1) 
>int f(int x);
>//(2)
>int f(double x);
>//(3)
>double f(int x, int y);
>//(4)
>int f(int x, int y);


## __정답 :__
(3) : 리턴 데이터 타입 차이만으로는 중복 함수를 정의할 수 없음
(4) : 받는 인수의 개수가 다름

> ## 7.다음과 같은 디폴트 매개 변수를 가진 함수가 있을 때, 적절치 못한 함수 호출은?
> ```C++
>int add(int a=10, double b=10.0);
>```
>```C++
>//(1) 
>int x = add();
>//(2) 
>int x = add(20);
>//(3) 
>add(20, 3.14);
>//(4) 
>int x = add(3.14);
>```

## __정답 :__
(4) : int type 먼저 넣었어야 함
---
> ## 12.다음 클래스의 객체가 생성될 때 화면에 출력되는 결과는?
>```C++
>class Overloading{
>    public:
>        Overloading(int x=0){cout << x;}
>        Overloading(int x, string b){cout << x<< b;}
>};
>
>//(1) 
>Overloading a;
>//(2)
>Overloading b(3);
>//(3)
>Overloading c(5, "hello");
>```
## __정답 :__
```bash
0
3
5hello
```

---

> ## 16. 다음 StaticTest 클래스가 있을 때 다음 소스에서 잘못된 코드는?
```C++
class StaticTest{
        static int a;
    public:
        static int getA(){return a};
};

StaticTest s;
StaticTest *p = &s;

StaticTest::getA();         //(1)
s.getA();                   //(2)
s::getA();                  //(3)
p->getA();                  //(4)
```
## 정답 :
(3) : static 멤버 함수는 여러개 선언이 가능해서 s::를 쓰면 안됨