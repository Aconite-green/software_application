# CH3 Theory problems
---
> ## 11.다음 프로그램에 대해 답하여라 
> ```C++
>class House {
>    private:
>        int numOfRooms;
>        int size;
>    public:
>        House(int n, int s);
> };
> void f(){
>    House a(2, 20);
> }
> House b(3, 30), c(4, 40)
> int main(){
>    f();
>    House d(5, 50);
> }
>```
> ## (1) n과 s로 numOfRooms, size를 각각 초기화하고, 이들을 출력하는 생성자를 구현하라
> ## (2) size와 numOfRooms 값을 출력하는 House 클래스의 소멸자를 작성하라
> ## (3) 객체 a,b,c,d가 생성되는 순서와 소멸되는 순서는 무엇인가?


## __정답 :__
### (1), (2)
```C++
#include <iostream>
using namespace std;

class House {
    private:
        int numOfRooms;
        int size;
    public:
        House(int n, int s);
 };
 void f(){
    House a(2, 20);
 }
 House b(3, 30), c(4, 40)
 int main(){
    f();
    House d(5, 50);
 }
// (1) answer
House::House(int n, int s){
    numOfRooms = n;
    size = s;
    cout << numOfRooms  << ' ' << size;
}
// (2) answer
House::~House(){
    cout << numOfRooms  << ' ' << size;
}
```

## (3)

**b생성 -> c생성 -> a생성 -> a소멸 -> d생성 -> d소멸 -> c소멸 -> b소멸**

---
> ## 14.다음 프로그램의 오류를 지적하고 수정하라 
> ```C++
>class TV {
>       int channels;
>   public:
>       int colors;
>       TV() {channels = 256; }
>       TV(int a, int b) {channels = a; channels = b;}
>int main(){
>   TV LG;
>   LG.channels = 200;
>   LG.colors = 60000;
>   TV Samsung(100, 50000);
> }
>```
## 정답 :
 channels 변수는 private으로 설정 되어 있기 때문에 아래 코드는 오류를 발생시킴 이를 고치기 위해서는 channels 변수를 public 변수로 바꿔주어야 함 
```C++
LG.channels = 200;
```
---

> ## 18. inline선언은 강제사항이 아니다. 다음 하수 중에서 컴파일러가 인라인으로 처라하기에 가장 바람직한 것은?
> ```C++
>// (1)
>inline int big(int a, int b) return a>b?a:b;
>//(2)
>inline int sum(int a, int b){
>   if(a>=b) return a;
>   else return a + sum(a+1, b); 
>}
>//(3)
>inline void add(int a, int b){
>   int sum = 0;
>   for(int n=a; n<b; n++) sum += n;
>}
>//(4)
>inline int add(int a){
>   static int x = 0;
>   x += a;
>   return x;
>}
>```
## 정답 :
(1)번이 inline 함수로 정의되기에 적합함 코드의 크기가 커지는 것을 고려할 때 짧고 간결한 코드를 inline 시켜야 하기 때문임

---
> ## 20. 다음 C++ 구조체를 동일한 의미를 가지는 클래스로 작성하라
> ```C++
>struct Family {
>       int count;
>       char address[20];
>   public:
>       Family();
>   private:
>       char tel[11];
}
>```
## 정답 :
```C++
class Family {
    public:
        int count;
        char address[20];
        Family();
    private:
        char tel[11];
}
```

