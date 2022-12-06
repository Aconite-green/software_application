> ## 6.문제 5번의 MyStack를 수정하여 다음과 같이 선언하였다. 스택에 > 저장할 수 있는 정수의 최대 개수는 생성자에서 주어지고 size 멤버에 > 유지한다. MyIntStack 클래스를 작성하라
> ```C++
> class MyIntStack{
>         int *p;
>         int size;
>         int tos;
>     public:
>         MyIntStack();
>         MyIntStack(int size);
>         MyIntStack(MyIntStack &s);
>         ~MyInStack();
>         /*정수 n을 스택에 푸시한다. 스택이 꽉 차 있으면 false, 아니면 true를 return 한다.*/
>         bool push(int n); 
>         /* 스택의 탑에 있는 값을 n에 팝한다. 만일 스택이 비어있으면 false를, 아니면 true return*/
>         bool pop(int &n);
> }
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