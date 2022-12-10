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
>```C++
>class A{
>    public: int x;
>};
>class B : public A{
>    public : int y;
>};
>A a, *p;
>B b, *q;
>```
>### (1) 업 캐스팅과 다운 캐스팅을 골라라
>```C++
>//(1)
>p = &a;
>//(2)
>p = &b;
>//(3)
>q = (B*)&a;
>//(4)
>q = &b;
>```
>
>>### (2) 다음 코드는 컴파일 오류는 없지만 실행 중에 오류가 발생한다. 그 이유는 무엇일까?
>```C++
>p = &a;
>q = (B*)p;
>q->y = 100; //실행 중 오류 발생
>```


## __정답 :__
(1) : 업 캐스팅 => (2)/ 다운 캐스팅 => (3)
(2) : a객체에는 y변수가 존재하지 않기 때문에 (다운 캐스팅 영향)

---

> ## 9. 다음 코드에 대한 물음에 답하라
>```C++
>class A{
>    public:
>        A(){ cout << "생성자 A" << endl;}
>        A(int x){ cout << "생성자 A" << x << endl; }
>};
>class B : public A{
>    public:
>        B(){cout << "생성자 B" << endl;}
>        B(int x){cout << "생성자 B" << x << endl;}
>        B(int x, int y) : A(x+y+2) {cout << "생성자 B" << x*y*2 << endl;}
>};
>```
>## 다음과 같은 객체 b가 생성 될때 화면에 출력되는 내용은?
>### (1) B b;
>### (2) B b(10);
>### (3) B b(10, 20);


## 정답 :
```bash
//(1)
생성자 B
생성자 A

//(2)
생성자 B 10
생성자 A

//(3)
생성자 B 400
생성자 A 10
```

