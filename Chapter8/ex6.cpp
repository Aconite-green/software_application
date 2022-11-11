#include<iostream>
using namespace std;

class BaseArray{
private:
	int capacity;
	int *mem;
protected:
	BaseArray(int capacity=100){
		this->capacity = capacity; mem = new int [capacity];
	}
	~BaseArray() { delete [] mem;}
	void put(int index, int val){mem[index] = val;}
	int get(int index){return mem[index];}
	int getCapacity(){return capacity;}
}; 

class MyStack:public BaseArray{

};

int main(){
	MyStack mStack(100);
	int n;
	cout << "put 5 integer>> ";
	for(int i=0;i<5;i++){
		cin >> n;
		mStack.push(n);
	}

	cout << "stack capacity: " << mStack.capacity() << ", stack size: " << mStack.length() << endl;
	cout << "pop all the element in the stack>> ";
	while(mStack.length() != 0){
		cout << mStack.pop() << ' ';
	}
	cout << endl << "the size of current stack : " << mStack.length() << endl;
}