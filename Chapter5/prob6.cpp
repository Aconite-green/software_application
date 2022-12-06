#include <iostream>
#include <string>
using namespace std;

class MyIntStack {
	int* p;
	int size;
	int tos;
public:
	MyIntStack();
	MyIntStack(int size);
	MyIntStack(const MyIntStack& s);
	~MyIntStack();
	bool push(int n);
	bool pop(int& n);
};

int main() {
	MyIntStack a(10);
	a.push(10);
	a.push(20);
	MyIntStack b = a;
	b.push(30);

	int n;
	a.pop(n);
	cout << "스택 a에서 팝한 값 " << n << endl;
	b.pop(n);
	cout << "스택 b에서 팝한 값 " << n << endl;
}

MyIntStack::MyIntStack() {
	p = NULL;
	size = 0;
	tos = 0;
}

MyIntStack::MyIntStack(int size) {
	this->size = size;
	p = new int[size];
	tos = 0;
}

MyIntStack::MyIntStack(const MyIntStack& s) {
	this->size = s.size;
	this->tos = s.tos;
	p = new int[size];
	for (int i = 0; i < tos; i++) {
		p[i] = s.p[i];
	}
}

MyIntStack::~MyIntStack() {
	delete[] p;
}

bool MyIntStack::push(int n) {
	if (size != tos) {
		p[++tos] = n;
		return true;
	}
	else
		return false;

}

bool MyIntStack::pop(int& n) {
	if (tos == 0 && p[0] == NULL)
		return false;
	else {
		n = p[tos];
		return true;
	}
}
