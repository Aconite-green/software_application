> ## 6.문제 5번의 MyStack를 수정하여 다음과 같이 선언하였다. 스택에  저장할 수 있는 정수의 최대 개수는 생성자에서 주어지고 size 멤버에  유지한다. MyIntStack 클래스를 작성하라
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
>## MyIntStack 클래스를 활용하는 코드와 샐행 결과는 다음과 같다.
>```C++
>int main(){
>    MyInStack a(10);
>    a.push(10);
>    a.push(20);
>    MyIntStack b = a; //복사 생성
>    b.push(30);
>
>    int n;
>    a.pop(n); // 스택 a 팝
>    cout << "스택 a에서 팝한 값 " << n << endl;
>    b.pop(n); // 스택 b 팝
>    cout << "스택 b에서 팝한 값 " << n << endl;
>}
>```
>---
>```bash
>스택 a에서 팝한 값 20
>스택 b에서 팝한 값 30
>계속하려면 아무 키나 누르십시오 . . .
>```
