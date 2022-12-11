# CH11 Theory problems

> ## 12.다음 프로그램을 실행하고 키보드로 Happy Birthday<Enter> 키를 입력하였다. 실행 결과는 무엇인가?
```C++
char line[80];
cin.getline(line, 80);
cout << cin.gount();
```

## __정답 :__
```bash
14
```

---

> ## 17. 다음 프로그램의 실행 결과는 무엇인가?
```C++
cout.width(10);
cout.precision(4);
cout << setfill('~') << left <<2./3; 

```

## 정답 :

```bash
~~~~0.6666
```