# CH7 Theory problems
---

> ## 6.다음 프로그램은 컴파일 오류가 발생한다. 오류의 원인은 무엇인가? 오류를 바람직하게 수정하라
>```C++
>class Student{
>        int id;
>    public:
>        Student(int id){this->id = id;}
>
>};
>class Professor{
>    private:
>        string name;
>    public:
>        Professor(string name){this->name = name;}
>};
>
>void show(Student s, Professor p){
>    cout << s.id << p.name;
>}
>```


## __정답 :__
id 와 name 인자는 private 설정이 되어 있기 때문에 show 함수를 friend 설정을 해주어 인자를 사용할 수 있도록 해야한다.

---

> ## 14.다음에서 멤버 함수로 + 연산자 함수를 작성할 수 없는 경우는?
>```C++
>class Power;
>Power a, b; //Power 클래스에 대해
>//(1)
>a = a + b;
>//(2)
>b = a + 3;
>//(3)
>b = a += 3;
>//(4)
>b = 3 + a;
>```

## __정답 :__
(3) : 안되는건 알겠는데 이유는 모르겠음

---

> ## 16. 다음에서 a, b는 Power 클래스의 객체이다. 연산자 함수를 Power 클래스의 프렌드 함수로 작성한다고 할 때, 왼쪽의 연산과 오른쪽의 연산자 함수를 선언이 잘못된 것은?
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