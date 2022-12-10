#include<iostream>
using namespace std;

class AbstractGate{
    protected:
        bool x, y;
    public:
        void set(bool x, bool y){this->x = x; this->y = y;}
        virtual bool operation()=0;
};

class ANDGate : public AbstractGate{
    public:
        virtual bool operation(){
            return x & y ;
        }
};

class ORGate : public AbstractGate{
    public:
        virtual bool operation(){
            return x | y;
        }
};

class XORGate : public AbstractGate{
    public:
        virtual bool operation(){
            return (~x & y) | (x & ~y);
        }
};

int main(){
//메인 동작
ANDGate and;
ORGate or;
XORGate xor;

and.set(true, false);
or.set(true, false);
xor.set(true, false);
cout.setf(ios::boolalpha); //bool 값을 "true", "false" 문자열로 출력
cout << and.operation() << endl;
cout << or.operation() << endl;
cout << xor.operation() << endl;
}