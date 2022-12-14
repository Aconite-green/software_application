# CH12 Theory problems

## 6. 다음과 같이 메모장으로 test.txt 파일을 작성하였다. 0123456789 뒤에 <Enter> 키가 있지만, Integer (r 뒤에는 <Enter> 키가 없다.
```bash
0123456789
Integer
```
### (1) test.txt 파일의 바이트 수는 얼마인가?
### (2) 부록의 ASCII 표를 참고하여 test.txt에 저장된 바이트를 16진수로 말하라
### (3) 아래 코드는 파일의 문자 개수를 세는 코드이다. 실행하였을 때 출력되는 count 값은 얼마인가?

```C++
ifstream fin("test.txt");
char ch;
int count =0;
while(true){
    fin.get(ch);
    if(fin.eof()) break;
    count++;
}
cout << count;
```

### (4) 위 코드에서 ifstream fin("test.txt"); 를 ifstream fin("test.txt", los::binary); 변경되면 출력되는 count 값은 얼마인가? count 값이 서로 다른 이유는 무엇인가? 

## __정답 :__
(1) : 25 byte
(2) : ?
(3) : 7
(4) : 35 byte /ios::binary 는 무조건 2byte 취급해서?

---

> ## 22. 파일을 거꾸로 읽어 화면에 출력하고자 할 때 다음 빈칸에 적절한 코드는 무엇인가? 
```C++
void reverseReadFile(ifstream& fin){
    fin.seekg(0, ios::end);
    int length = fin.tellg();
    for(int i=0; i<length; i++){
        fin.seekg(______, ios::beg);
        cout << (char)fin.get();
    }
}
```

## 정답 :

```C++
fin.seekg(1, los::beg);
```