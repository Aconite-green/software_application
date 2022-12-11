>### 8.bigger() 함수의 다음 라인에서 > 연산자 때문에
>```C++
>if(a > b) return a;
>```
>### T에 Circle과 같은 클래스 타입이 대입되면, 구체화가 실패하여 컴파일 오류가 발생한다. 이 문제를 해결하기 위해 다음과 같은 추상 클래스 Comparable을 제안하다.
>```C++
>class Comparable {
>public:
>	virtual bool operator > (Comparable& op2) = 0;
>	virtual bool operator < (Comparable& op2) = 0;
>	virtual bool operator == (Comparable& op2) = 0;
>};
>```
>### Circle 클래스가 Comparable을 상속받아 순수 가상 함수를 모두 구현하면, 앞의 bigger() 템플릿 함수를 사용하는데 아무 문제가 없다. Circle뿐 아니라, Comparable을 상속받은 Circle 클래스를 완성하고 문제 7의 main()을 실행하여 테스트 하라
>```C++
>#include<iostream>
>using namespace std;
>
>class Circle{
>        int radius;
>    public:
>        Circle(int radius=1){this->radius = radius;}
>        int getRadius(){return radius;}
>};
>
>template <class T>
>T bigger(T a, T b){
>    if(a > b) return a;
>    else return b;
>}
>
>int main() {
>	int a = 20, b = 50, c;
>	c = bigger(a, b);
>	cout << "20과 50중 큰 값은 " << c << endl;
>	Circle waffle(10), pizza(20), y;
>	y = bigger(waffle, pizza);
>	cout << "waffle과 pizza 중 큰 것의 반지름은 " <<  y.getRadius()  endl;
>}
>```