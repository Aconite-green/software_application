# CH13 Theory problems
---
> ## 8.다음 각 문항에 따라 다음 프로그램의 실행 결과는?
>```C++
>int n, m;
>try{
>    if(n ==0){
>        throw "0을 다루지 않음";
>    }
>    if(m % n == 0){
>        throw 0;
>        cout << m % n;
>    }
>}
>catch(int x){
>    cout << x;
>}
>catch(char* s){
>    cout << s;
>}
>```
>### (1) n=0; m=5; 인 경우
>### (2) n=5; m=10; 의 경우
>### (3) n=6; m=10; 의 경우

## __정답 :__

```bash
(1) : 0을 다루지 않음
(2) : 0
(3) : 
```

---
> ## 20.다음 소스에 대해 물음에 답하라
>```C++
>/* main.cpp */
>int subtract(int x, int y);
>int multiply(int x, int y);
>int main(){
>    int n = subtract(3, 5);
>    int m = multiply(3, 5);
>}
>
>/* subtract.c */
>int subtract(int x, int y){
>    return x+y;
>}
>
>/* multiply.c */
>int multiply(int x, int y){
>    return x*y;
>}
>```
>### (1) subtract.c의 컴파일 시에 오류가 발생하는가? 발생하면 오류를 수정하라
>### (2) multiply.c의 컴파일 시에 오류가 발생하는가? 발생하면 오류를 수정하라
>### (3) main.cpp의 컴파일 시에 오류가 발생하는가> 발생하면 오류를 >수정하라
>### (4) 이들을 링크하 때 링크 오류가 발생하는가? 발생하면 오류를 수정하라
## 정답 :
```C++
//(1)
컴파일시 오류 없음
//(2)
컴파일시 오류 없음
//(3)
컴파일시 오류 없음
//(4)
extern "C" int subtract(int x, int y);
extern "C" int multiply(int x, int y);
int main(){
    int n = subtract(3, 5);
    int m = multiply(3, 5);
}
```