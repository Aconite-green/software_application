> ## 3.다음 Circle 클래스가 있다.
>```C++
>class Circle{
>        int radius;
>    public:
>        Circle(int r){radius = r;}
>        int getRadius(){return radius;}
>        void setRadius(int r){radius = r;}
>        void show(){cout << "반지름 " << radius << "인 원" << >endl;}
>};
>```
>## Circle 객체 b를 a에 더하여 a를 키우고자 다음 함수를 작성하였다.
>```C++
>void increaseBy(Circle a, Circle b){
>    int r = a.getRadius() + b.getRadius();
>    a.setRadius(r);
>}
>```
>## 다음 코드를 실행하면 increaseBy() 함수는 목적대로 실행되는가?
>```C++
>int main(){
>    Circle x(10), y(5);
>    increaseBy(x, y);
>    x.show();
>}
>```