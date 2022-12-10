>### 5.디지털 회로에서 기본적인 게이트로 OR 게이트, AND 게이트, XOR 게이트 등이 있다. 이들은 각각 두 입력 신호를 받아 OR 연산, AND 연산, XOR 연산을 >수행한 결과를 출력한다. 이 게이트들을 각각 ORGate, XORGate, ANDGate 클래스로 작성하고자 한다. ORGate, XORGate, ANDGate 클래스가 AbstractGate를 >상속받도록 작성하라
>
>```C++
>//AbstracGate 예시 코드
>#include<iostream>
>using namespace std;
>
>class AbstractGate{
>    protected:
>        bool x, y;
>    public:
>        void set(bool x, bool y){this->x = x; this->y = y;}
>        virtual bool operation()=0;
>};
>
>//메인 동작
>ANDGate and;
>ORGate or;
>XORGate xor;
>
>and.set(true, false);
>or.set(true, false);
>xor.set(true, false);
>cout.setf(ios::boolalpha); //bool 값을 "true", "false" 문자열로 출력
>cout << and.operation() << endl;
>cout << or.operation() << endl;
>cout << xor.operation() << endl;
>```

