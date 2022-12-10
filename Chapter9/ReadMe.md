# CH7 Theory problems
---

> ## 6.다음 코드에 대해 물음에 답하여라
>```C++
>class A{
>    public:
>        void func(){f();}
>        virtual void f() { cout << "A::f() called" << endl;}
>};
>class B : public A{
>    public:
>        void f() { cout << "B::f() called" << endl;}
>};
>class C : public B{
>    public:
>        void f(){ cout << "C::f() called" << endl;}
>}
>```
>### (1) 다음 함수 중 가상 함수를 모두 골라라
>(1) A의 f()     
>(2) B의 f()     
>(3) C의 f()     
>(4) D의 f()
>
>### (2) 다음 코드가 실행 될 때 출력되는 결과는 무엇인가?
>```C++
>C c;
>c.f(); // (2)
>A *pa;
>B *pb;
>pa = pb = &c;
>pb->f(); // (3)
>pa->f(); // (4)
>pa->func(); // (5)
>```


## __정답 :__
(1) : 1,2,3
(2)
```bash
C::f() called
C::f() called
C::f() called
C::f() called
```
---

> ## 10.다음은 Person 클래스와 파생 클래스 Student를 작성한 사례이다.
>```C++
>lass Person{
>       int id;
>   public:()
>       Person(int id=0){this->id = id;}
>       ~Person(){cout << "id=" << id << endl;} 
>;
>lass Student : public Person{
>       char *name;
>   public:
>       Student(int id, char* name) : Person(id){
>           int len = strlen(name);
>           this->name = new char [len + 1];
>           strcpy(this->name, name);
>       }
>       ~Student(){
>           cout << "name=" << name << endl;
>           delete [] name;
>       };
>;
>
>nt main(){
>   Person *p = new Student(10, "이영희");
>   delete p;
>
>```
>## (1) 다음 코드의 실행결과는 무엇인가? 실행 결과에 대해 어떤 문제가 있다고 생각되는가?
>## (2) Person 클래스나 Student 클래스를 수정하여 문제점을 해결하라

## __정답 :__
(1)
```bash
name=이영희
id=10
```
(2) : ?

---

> ## 14. 다음 코드에 대한 물음에 답하라
>```C++
>class Shape{
>    public:
>        void paint(){draw();}
>        virtual void draw()=0;
>};
>class Circle : public Shape{
>        int radius;
>    public:
>        Circle(int radius=1){this->radius = radius;}
>        double getArea(){return 3.14*radius*radius;}
>
>};
>```
>## (1) 다음 중 오류가 발생하는 것을 있는 대로 골라라
>### (1) Shape shape;
>### (2) Shape *p;
>### (3) Circle circle(10)
>### (4) Circle *pCircle;


>## (2) 다음 코드의 실행 결과 "반지름=10인 원"이 출력되도록 Shape 나 Circle 클래스를 수정하라
>```C++
>Circle *p = new Circle(10);
>p->paint();
>```

## 정답 :
(1) : 1, 3
(2) 
```C++
class Circle : public Shape{
        int radius;
    public:
        Circle(int radius=1){this->radius = radius;}
        double getArea(){return 3.14*radius*radius;}
        double getRadius(){return radius;}
        virtual void draw(){cout << "반지름=" << radius << "인 원";}
}
```
