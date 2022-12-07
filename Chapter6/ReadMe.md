# CH6 Theory problems
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
(2) : int, double 타입 중 어느곳에 해당되는지 모호성이 존재하기 때문

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
5 hello
```
---
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