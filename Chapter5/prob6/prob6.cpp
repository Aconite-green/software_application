#include<iostream>
using namespace std;

class MyIntStack{
         int *p;	//스택 메모리에 사용될 포인터
         int size;	// 스택의 최대 크기
         int tos;	// 스택의 탑을 가리키는 인덱스
     public:
         MyIntStack();
         MyIntStack(int size);
         MyIntStack(MyIntStack &s);
         ~MyIntStack();
         /*정수 n을 스택에 푸시한다. 스택이 꽉 차 있으면 false, 아니면 true를 return 한다.*/
         bool push(int n); 
         /* 스택의 탑에 있는 값을 n에 팝한다. 만일 스택이 비어있으면 false를, 아니면 true return*/
         bool pop(int &n);
 };

 MyIntStack::MyIntStack(){
	tos = 0;
	p = NULL;
	size = 0;
 }
 MyIntStack::MyIntStack(int size){
	this->size = size;
	int *p = new int [size];
	tos = 0;
 }
 MyIntStack::MyIntStack(MyIntStack &s){
	this->p = new int [s.size];
	this->size = s.size;
	this->tos = s.tos;
	for(int i =0; i<tos; i++){
		p[i] = s.p[i];
	}
 }
 MyIntStack::~MyIntStack(){
	delete [] p;
 }

 bool MyIntStack::push(int n){
	if(tos == size) return false;
	else {
		p[++tos] = n;
		return true;
	}
 }

 bool MyIntStack::pop(int &n){
	if(tos == 0 && p[0] == NULL) return false;
	else{
		n = p[tos];
		return true;
	}
 }

int main(){
    MyIntStack a(10);
    a.push(10);
    a.push(20);
    MyIntStack b = a; //복사 생성
    b.push(30);

    int n;
    a.pop(n); // 스택 a 팝
    cout << "스택 a에서 팝한 값 " << n << endl;
    b.pop(n); // 스택 b 팝
    cout << "스택 b에서 팝한 값 " << n << endl;
}