#include <iostream>
using namespace std;

class BaseArray {
private:
	int capacity;
	int* mem;
protected:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
};

class MyStack : public BaseArray{
		int memory[];
	public:
		MyStack(int cap_stack) : BaseArray(cap_stack){memory[cap_stack];};
		void push(int n);
		int capacity();
		int length();
		int pop();
};

void MyStack::push(int n){
	for(int i=0; i<5; i++) put(i,n);

}

int MyStack::capacity(){
	return getCapacity();
}

int MyStack::length(){
	int cnt=0;
	for(int i =0; i<getCapacity(); i++){
		if(get(i) == NULL) break;
		cnt += 1;
	}
	return cnt;
}

int MyStack::pop(){
	
}



int main() {
	MyStack mStack(100);
	int n;
	cout << "스택에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		mStack.push(n);
	}
	cout << "스택용량:" << mStack.capacity() << ", 스택크기:" << mStack.length() << endl;
	cout << "스택의 모든 원소를 팝하여 출력한다>> ";
	while (mStack.length() != 0) {
		cout << mStack.pop() << ' ';
	}
	cout << endl << "스택의 현재 크기: " << mStack.length() << endl;
}