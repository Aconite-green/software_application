#include <iostream>
#include <string>
using namespace std;

class Person {
	int id;
	double weight;
	string name;
public:
	Person() {
		id = 1;
		weight = 20.5;
		name = "Grace";
	}
	Person(int a,string name) {
		id = a;
		this->name = name;
		weight = 20.5;
	}
	Person(int a,string name,double weight) {
		id = a;
		this->name = name;
		this->weight = weight;
	}
	void show() { cout << id << ' ' << weight << ' ' << name << endl; }
};

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
