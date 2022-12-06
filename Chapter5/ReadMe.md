# CH5 Theory problems
---
> ## 사용자로부터 폭과 높이 값을 입력받아 동적으로 Rect 객체를 생성하고 면적을 구하여 출력하는 코드를 작성하고자 한다. 다음물음에 따라 빈칸을 채워라
> ```C++
>   int main(){
>       Rect q*
>       int w, h;
>       cin >> w >> h; // 사용자로부터 사각형의 폭과 높이를 w, h에 각각 입력받는다    
>} 
>       
>```
> ## (1) 포인터 변수 q에 wxh 크기의 사각형을 표현하는 Rect 객체를 동적으로 생성한다
> ## (2) 포인터 q를 이용하여 사각형의 면적을 출력한다
> ## (3) 생성한 객체를 반환한다

## __정답 :__
### (1), (2), (3)
```C++
// 문제에서 주어진 부분
#include<iostream>
using namespace std;

class Rect{
        int width, height;
    public:
        Rect(int w, int h){width = w; height = h;}
        int getWidth(){return width;}
        int getHeight(){return height;}
        int getArea();
}

int Rect::getArea(){
    return width*height;
}

int main(){
    Rect q*
    int w, h;
    cin >> w >> h; // 사용자로부터 사각형의 폭과 높이를 w, h에 각각 입력받는다   

    //풀이 부분
    q = new Rect squre(w, h);    //(1)
    cout << (*q).getArea();      //(2)
    delete q;                    //(3)
} 
```

---
> ## 8.다음 프로그램이 실해될 때 출력되는 결과는 무엇인가? 
>```C++
>#include<iosream>
>#include<string>
>using namespace std;
>
>class Color {
>        string c;
>    public:
>        Color(){ c = "white"; cout << "기본생성자"<<'\n';}
>        Color(string c){this->c = c; cout << "매개변수생성자" << '\n';}
>        ~Color(){cout << "소멸자" << '\n';}
>};
>
>class Palette{
>        Color *p;
>    public:
>        Palette(){p = new Color[3];}
>        ~Palette(){ delete [] p;}
>};
>
>int main(){
>    Palette *p = new Palette();
>    delete p;
>}
>```
## 정답 :

```bash
기본생성자
기본생성자
기본생성자
소멸자
소멸자
소멸자
```

> ## 15. 함수 f가 실행되고 난 뒤 메모리 누수가 발생하는지 판단하고 메모리 누수가 발생하면 발생하지 않도록 수정하여라
 ```C++
// (1)
void f(){
    char *p = new char [10];
    strcpy(p, "abc");
}
//(2)
void f(){
    int *p = new int;
    int *q = p;
    delete q;
}
//(3)
int f(){
    int n[10] = {0};
    return n[0];
}
//(4)
void f(){
    int *p;
    for(int i = 0; i<5; i++){
        p = new int;
        cin >> *p;
        if(*p % 2 == 1) break;
    }
    delete p;
}
```
## 정답 :
발생 X : (1), (2), (3)


발생 O : (4)
```C++
void f(){
    int *p;
    for(int i = 0; i<5; i++){
        p = new int;
        cin >> *p;
        if(*p % 2 == 1) break;
        //for문안에 delete를 넣어줘야 함
        delete p;
    }
    
}
```

---
> ## 19. 다음 프로그램의 각 라인을 string 클래스에서 제공하는 연산자를 이용하여 고쳐라
>```C++
>string a("My name is Jane.")
>char ch = a.at(2);
>if(a.compare(""My name is John.) == 0) cout << "Same";
>a.append("``");
>a.reaplace(1, 1, "Y");
>```
## 정답 :
```C++
string a = "My name is Jane."
char ch = a[1]
if(a == "My name is John.") cout << "Same";
a = a + "``";
a[1] = "Y";
``
