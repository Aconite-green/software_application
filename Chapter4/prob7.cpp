/*다음과 같은 person 클래스가 있다. Person 클래스와 main() 함수를 작성하여, 
3개의 Person 객체를 가지는 배열을 선언하고, 다음과 같이 키보드에서 이름과 전화번호를 입력받아
 출력하고 검색하는 프로그램을 완성하라*/

 #include<iostream>
 #include<string>
 using namespace std;

 class Person{
		string name;
		string tel;
	public:
		Person();
		string getName(){return name;}
		string getTel(){ return tel;}
		void set(string name, string tel);
 };

Person::Person(){
	
}

void Person::set(string name, string tel){
	this->name = name;
	this->tel = tel;
}

int main(){
	cout << "이름과 전화 번호를 입력해 주세요" << '\n';
	Person *p = new Person[3];
	Person *q = p;
	
	for(int i =0; i<3; i++){
		string name;
		string tel;
		cout << "사람" << i+1 << ">>";
		cin >> name >> tel;
		p->set(name, tel);
		p++;
	}
	
	cout << '\n';
	p = q;
	cout << "모든 사람의 이름은 ";
	for(int i =0; i<3; i++){
		cout << p->getName() << ' ';
		p++;
	}

	string tel_name;
	cout << '\n';
	p=q;
	cout << "전화번호 검색합니다. 이름을 입력하세요>>";
	cin >> tel_name;
	for(int i =0; i<3; i++){
		if(p->getName() == tel_name)break;
		p++;
	}
	cout << '\n' << "전화번호는 " << p->getTel();

}
