# CH7 Theory problems
---

> ## 4.다음 코드에 대해 컴파일 오류가 발생하는 것은?
>```C++
>class A{
>    public: int w;
>};
>class B : public A{
>    public: int x;
>}
>class C : private A{
>    public: int y;
>}
>class D : protected B{
>    public: int z;
>}
>//(1) 
>A a; a.w=10;
>//(2)
>B b; b.w=10;
>//(3)
>C c; c.y=10;
>//(4)
>D d; d.w=10;
>```


## __정답 :__
(4) : 클래스 D는 클래스 B를 protected 접근의 상속을 했으므로 외부에서 w 변수에 접근할 수 없다.

---

> ## 7.다음에서 다음 클래스 A, B와 변수가 선언되어 있을 때 물음에 답하라
```C++
class A{
    public: int x;
};
class B : public A{
    public : int y;
};
A a
```

## __정답 :__
(3) : 안되는건 알겠는데 이유는 모르겠음

---

> ## 9. 다음에서 a, b는 Power 클래스의 객체이다. 연산자 함수를 Power 클래스의 프렌드 함수로 작성한다고 할 때, 왼쪽의 연산과 오른쪽의 연산자 함수를 선언이 잘못된 것은?
```C++
//(1) a + b
Power operator + (Power &a, Power &b);

//(2) a == b
bool operator == (Power a, Power b);

//(3) a++
Power operator ++ (Power a, int b);

//(4) a = b
Power operator = (Power &a, Power b);

```
## 정답 :
(3) : &a로 참조 연산자를 사용해 주어야 함