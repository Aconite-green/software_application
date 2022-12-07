> ## 2.Person 클래스의 객체를 생성하는 main() 함수는 다음과 같다.
>```C++
>class Person{
>        int id;
>        double weight;
>        string name;
>    public:
>        void show(){cout << id << ' ' << weight << ' ' << name << >endl;}
>};
>
>int main(){
>    Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
>    grace.show();
>    ashley.show();
>    helen.show();
>}
>```
>```bash
>1 20.5 Grace
>2 20.5 Ashley
>3 32.5 Helen
>계속하려면 아무 키나 누르십시오 . . . 
>```
>### (1) 생성자를 중복 작성하고 프로그램을 완성하라
>### (2) 디폴트 매개 변수를 가진 하나의 생성자를 작성하고 프로그램을 >완성하라


