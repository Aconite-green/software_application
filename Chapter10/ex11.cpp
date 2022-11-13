#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
	int year;
	string BookName;
	string writer;
public:
	Book(int year, string BookName, string writer) {
		this->year = year;
		this->BookName = BookName;
		this->writer = writer;
	}
	string PutWriter() {
		return writer;
	}
	int PutYear() {
		return year;
	}
	string PutBookName() {
		return BookName;
	}
};

int main(void) {
	vector<Book> v;
	int year;
	string BookName;
	string writer;
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다." << endl;
while (1) {
		cout << "년도>>";
		cin >> year;
		cin.ignore();
		if (year == -1)
			break;
		cout << "책이름>>";
		getline(cin,BookName,'\n');
		cout << "저자>>";
		getline(cin,writer,'\n');
		v.emplace_back(year, BookName, writer);
	}	
cout << "총 입고된 책은 " << v.size() << "권입니다." << endl;
	cout << "검색하고자 하는 저자 이름을 입력하세요>>";
	cin >> writer;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].PutWriter() == writer) {
			cout << v[i].PutYear() << "년도, " << v[i].PutBookName() << ", " <<v[i].PutWriter() << endl;
		break;
		}
	}
	cout << "검색하고자 하는 년도를 입력하세요>>";
	cin >> year;
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].PutYear() == year) {
			cout << v[i].PutYear() << "년도, " << v[i].PutBookName() << ", " << v[i].PutWriter() << endl;
			break;
		}
	}
}
